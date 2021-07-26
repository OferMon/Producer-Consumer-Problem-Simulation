
//----------------------------------------
// BIOS header files
//----------------------------------------
#include <xdc/std.h>  						//mandatory - have to include first, for BIOS types
#include <ti/sysbios/BIOS.h> 				//mandatory - if you call APIs like BIOS_start()
#include <xdc/runtime/Log.h>				//needed for any Log_info() call
#include <xdc/cfg/global.h> 				//header file for statically defined objects/handles


//-----------------------------------------
// MSP430 Header Files
//-----------------------------------------
#include <driverlib.h>
#include <stdlib.h> 						//for rand/strand
#include <time.h>    						//for using the time as the seed to strand!

//-----------------------------------------
// MSP430 MCLK frequency settings
// Used to set MCLK frequency
// Ratio = MCLK/FLLREF = 8192KHz/32KHz
//-----------------------------------------
#define MCLK_DESIRED_FREQUENCY_IN_KHZ  8000                            // 8MHz
#define MCLK_FLLREF_RATIO              MCLK_DESIRED_FREQUENCY_IN_KHZ / ( UCS_REFOCLK_FREQUENCY / 1024 )    // Ratio = 250

#define GPIO_ALL	GPIO_PIN0|GPIO_PIN1|GPIO_PIN2|GPIO_PIN3| \
					GPIO_PIN4|GPIO_PIN5|GPIO_PIN6|GPIO_PIN7


#define BUFFER_SIZE 10 						//Size of the shared buffer
#define MAX_VAL_NUM 10 						//Maximum value of randomly generated produced item!
#define MIN_VAL_NUM 1 						//Minimum value of randomly generated produced item
#define RED GPIO_PORT_P1, GPIO_PIN0 		//Red LED
#define GREEN GPIO_PORT_P4, GPIO_PIN7 		//Green LED
#define EMPTY_SLOT_IND -1					//Indicator for an empty buffer slot

//-----------------------------------------
// Prototypes
//-----------------------------------------


//LED_E enum - denoting all possible LEDs in the system
typedef enum
{
	red_e,
	green_e
} LED_E;


/*
 Structure LedBlinksInfo_T, so that each of the producerTask and consumerTask can define
 a local instance of this (each one in its own context function!) and fill it accordingly.
 This Structure is used, in order to communicate between the producerTask/consumerTask and
 the ledSrvTask (which provides LED blinking services) - each one of the
 producerTask/consumerTask fills it with the appropriate LED blinking specification
 (after producing/consuming an item) and "send" it to ledSrvTask. Well, it is not really a
 "sending" operation, but using the ability BIOS is providing us to set/get the Env (Environment)
 of a Task, using Task_setEnv and Task_getEnv API functions (see API Documentation) - recall,
 setting the Task Env is merely giving it a generic pointer (of type Ptr - which is simply a
 void * pointer - hence generic, which could be a pointer to anything!) to some data. The Task
 whose Env was set can then get this Env data pointer using Task_getEnv API function (and cast
 the pointer appropriately!) and then read the data!

 In this case, producerTask/consumerTask fills a local copy of this structure with the
 appropriate LED blinking specification (after producing/consuming an item) and then sending
 the pointer to this structure to ledSrvTask using Task_setEnv API function.
 Then, when ledSrvTask gets to run, it simply reads this Env pointer using Task_getEnv API
 function (casting the result, of course, to type LedBlinksInfo_T *).
 The LED blinking specification is simple:

 	 - producerTask fills the "led" field to be green_e whereas consumerTask fills
 	   the led field to be red_e.

 	 - the "blinksNum" is to be filled with the number of Blinks the LED (specified in the
 	   field "led") should be blinked.
 */
typedef struct
{
	LED_E led;
	Int blinksNum;
}LedBlinksInfo_T;


//The usual hardware_init function
void hardware_init(void);


/*
 Function: Bool insert_item(Int item)

 This function is called from the producerTask (after producerTask generated a random number
 in the value between 1 and MAX_VAL_NUM). This function receives the produced item in the
 parameter "item" and updates it in the shared buffer "buffer".

 Several guidelines:

 1) This function needs to synchronize the access to the shared data using the semaphores:
    emptySlots, mutex and fullSlots (as defined in the lecture notes in the function "Producer"
    - Ch. 8, slide 63). This should prevent the producerTask from Producing an item when buffer
    is full. Again, this should be done according to the algorithm in lecture Notes.

    Function is also doing Error Checking/Handling - therefore, it returns "TRUE" when
    item was successfully added to the shared "buffer" (and "in" and "count" global variables
    are updated accordingly!). Otherwise, if there is something wrong (i.e. Abnormal Behaviour)
    - it should issue a Log message and return FALSE.
    Abnormal behaviour (Unsuccessful Result), in this case, would be to try and write the item
    on an existing (not consumed!) data-item in the buffer (i.e. buffer[in] value is NOT -1:
    recall - an "empty" buffer cell is always marked with -1 - this is done in initialisation
    of the "buffer" (in main function) and also by the consumer's function remove_item, which
    sets the consumed cell value to -1, after consumption is done!).

    The shared data in this case are the global variables defined in the global section: the
    shared "buffer" array, the "in" variable - managing the next empty slot in the
    shared buffer and the "count" variable - holding the current number of items in the
    shared buffer.

    After gaining access to the shared data (according to the Algorithm in the lecture notes),
    insert_item function should perform the following:

    1) Check if  Abnormal behaviour (i.e. buffer[in] value is NOT -1). If Abnormal behaviour
       is encountered, issue a Log message, release all the "taken" semaphores and return FALSE.

    2) If Everything is OK:
       - update the "count" global variable;
       - enter the "item" to the buffer at location "in";
       - then update "in" global variable to hold the position of the next item for "production"
         (recall - buffer is cyclic! Look in the Lab document for further explanation on how to
         do that!);
       - issue a Log message - outputting the value of the currently produced item and the
         up-to-dated number of items in the buffer (i.e. the value of "count" global variable).

    3) Then, release the Semaphores (according to the Algorithm in the lecture notes) and
       return TRUE.
 */
Bool insert_item(Int item);


/*
 Function: Bool remove_item(Int *item);

 This function is called from the consumerTask. This function receives an address of a locally
 defined variable in a certain consumerTask and "consumes" the next available item
 from the shared buffer "buffer" - copying this item to the contents of the address pointed
 by *item (I'm writing certain consumerTask because, after you test the final program with one
 producerTask/consumerTask, you will be asked to add another  producerTask/consumerTask and to
 verify your program works generically without doing any changes (apart from configuring in GUI
 the two additional producerTask/consumerTask).


 Several guidelines:

 1) This function needs to synchronize the access to the shared data using the semaphores:
    fullSlots, mutex and emptySlots (as defined in the lecture notes in the function "Consumer"
    - Ch. 8, slide 63). This should prevent the consumerTask from Consuming an item when buffer
    is empty. Again, this should be done according to the algorithm in lecture Notes.

    Function is also doing Error Checking/Handling - therefore, it returns "TRUE" when
    item was successfully consumed from the shared "buffer" (and "out" and "count" global
    variables are updated accordingly!). Otherwise, if there is something wrong
    (i.e. Abnormal Behaviour) - it should issue a Log message and return FALSE.
    Abnormal behaviour (Unsuccessful Result), in this case, would be to try and remove a
    non-existing item from the shared buffer (i.e. buffer[out] value is -1:
    recall - an "empty" buffer cell is always marked with -1 - this is done in initialisation
    of the "buffer" (in main function) and also by this function, which sets the consumed cell
    value to -1, after consumption is done!).

    The shared data in this case are the global variables defined in the global section: the
    shared "buffer" array, the "out" variable - managing the next full slot in the shared buffer
    and the "count" variable - holding the current number of items in the shared buffer.

    After gaining access to the shared data (according to the Algorithm in the lecture notes),
    remove_item function should perform the following:

    1) Check if  Abnormal behaviour (i.e. buffer[out] value is -1). If Abnormal behaviour
       is encountered, issue a Log message, release all the "taken" semaphores and return FALSE.

    2) If Everything is OK:
       - update the "count" global variable;
       - copy the value from the buffer at location "out" to *item;
	   - mark the consumed cell in the shared buffer as empty (i.e. put there -1);
       - then update "out" global variable to hold the position of the next item for "consumption"
         (recall - buffer is cyclic! Look in the Lab document for further explanation on how to
         do that!);
       - issue a Log message - outputting the value of the currently consumed item and the
         up-to-dated number of items in the buffer (i.e. the value of "count" global variable).


    3) Then, release the Semaphores (according to the Algorithm in the lecture notes) and
       return TRUE.
 */
Bool remove_item(Int *item);


/*
 Function: producerHandler(UArg arg0, UArg arg1)

 This is the handler function for the producerTask (producerTask1) and for all other
 producerTasks added to the system (in this case: producerTask2).

 This function implements the producer behaviour and provides the infrastructure for the
 producer to run forever! Therefore, this function runs in while(TRUE) loop.
 Remember, it must also:

  1) Define a local structure of type LedBlinksInfo_T;

  2) Recall, arg0 of this function holds the unique producerID (you gave it in GUI definition).


 Then the while(TRUE) loop. Every iteration in this loop should perform the following:

 1) Generate a random number between 1 and MAX_VAL_NUM;

 2) Send this number to insert_item function call. Recall, insert_item is the function that
    implements the producer algorithm for 1 item (as defined in the lecture notes) in the
    context of the currently running producerTask (therefore, currently running producerTask
    might block on one of the Semaphore pends in this function - according to the algorithm
    in the lecture notes!);

    You must check the return value from insert_item - if it is FALSE, you must issue a Log
    message about an abnormal behaviour and the producerID of the running producerTask. In
    this case, you must skip the rest of the loop and get back to the beginning of the loop!

 3) If no abnormal behaviour:

  	A. Issue a Log message outputting the producerID and the value of the item produced;

  	B. Set the Env of ledSrvTask (using Task_setEnv API function) to send it the up-to-dated
  	   data for the Led Blink (i.e. sending it a pointer to the local LedBlinksInfo_T structure
  	   that you must also update it with the proper information before that!)

  	C. Release ledSrvTask to work (by posting the Scheduling Constraint Semaphore
  	   ledSrvSchedSem, which ledSrvTask pends on).

  	Now, since ledSrvTask is the highest priority Task in the system, it will immediately get
  	to run and blink the appropriate Led (according to the specification you updated in
  	LedBlinksInfo_T structure and sent it to ledSrvTask's Env).

  	However, what happens if current Task yielded (by timeSharingClk), just after setting the
  	ledSrvTask's Env, but before posting ledSrvSchedSem (i.e. before releasing ledSrvTask)???
  	Some other producerTask/consumerTask may set ledSrvTask's Env with their data -
  	running over the data set by current Task...!!! Reminds you of something???
  	Indeed, this is RACE CONDITION!!!

  	This means that the ENTIRE CODE in sections B & C above is a CRITICAL SECTION!!!! It must,
  	therefore, be protected by a Mutex Semaphore (we named this Mutex Semaphore: setLedEnvMutex).

  4) Go back to the beginning of the while(TRUE) loop;
 */
void producerHandler(UArg arg0, UArg arg1);


/*
 Function: consumerHandler(UArg arg0, UArg arg1)

 This is the handler function for the consumerTask (consumerTask1) and for all other
 consumerTasks added to the system (in this case: consumerTask2).

 This function implements the consumer behaviour and provides the infrastructure for the
 consumer to run forever! Therefore, this function runs in while(TRUE) loop.
 Remember, it must also:

  1) Define a local structure of type LedBlinksInfo_T;

  2) Recall, arg0 of this function holds the unique consumerID (you gave it in GUI definition).
     

 Then the while(TRUE) loop. Every iteration in this loop should perform the following:

 1) Call remove_item function. Recall, remove_item is the function that
    implements the consumer algorithm for 1 item (as defined in the lecture notes) in the
    context of the currently running consumerTask (therefore, currently running consumerTask
    might block on one of the Semaphore pends in this function - according to the algorithm
    in the lecture notes!);

    You must check the return value from remove_item - if it is FALSE, you must issue a Log
    message about an abnormal behaviour and the consumerID of the running consumerTask. In
    this case, you must skip the rest of the loop and get back to the beginning of the loop!

 3) If no abnormal behaviour:

  	A. Issue a Log message outputting the consumerID and the value of the item consumed;

  	B. Set the Env of ledSrvTask (using Task_setEnv API function) to send it the up-to-dated
  	   data for the Led Blink (i.e. sending it a pointer to the local LedBlinksInfo_T structure
  	   that you must also update it with the proper information before that!)

  	C. Release ledSrvTask to work (by posting the Scheduling Constraint Semaphore
  	   ledSrvSchedSem, which ledSrvTask pends on).

  	Now, since ledSrvTask is the highest priority Task in the system, it will immediately get
  	to run and blink the appropriate Led (according to the specification you updated in
  	LedBlinksInfo_T structure and sent it to ledSrvTask's Env).

  	However, what happens if current Task yielded (by timeSharingClk), just after setting the
  	ledSrvTask's Env, but before posting ledSrvSchedSem (i.e. before releasing ledSrvTask)???
  	Some other producerTask/consumerTask may set ledSrvTask's Env with their data -
  	running over the data set by current Task...!!! Reminds you of something???
  	Indeed, this is RACE CONDITION!!!

  	This means that the ENTIRE CODE in sections B & C above is a CRITICAL SECTION!!!! It must,
  	therefore, be protected by a Mutex Semaphore (we named this Mutex Semaphore: setLedEnvMutex).

  4) Go back to the beginning of the while(TRUE) loop;
 */
void consumerHandler(UArg arg0, UArg arg1);


/*
 Function: ledSrvTaskHandler(void)

 This is the handling function for ledSrvTask. This is the highest priority Task in the system,
 so when it is scheduled (i.e. not pending on the Scheduling Constraint Semaphore:
 ledSrvSchedSem) - it will occupy the CPU exclusively! The role of this Task is to wait on the
 Scheduling Constraint Semaphore, ledSrvSchedSem, and whenever an event is posted it should:

  - Read its own (SELF!!) environment data, in order to get the Led blinking specification (Recall:
    consumerTask/producerTask updated ledSrvTask's Env with this specification, just before
    posting ledSrvSchedSem). This is done by calling Task_getEnv API function on SELF (Recall: the
    return value of Task_getEnv is of type Ptr (defined in BIOS as void *) - this should be
    casted to LedBlinksInfo_T *, in this case).

  - Blink the Led, according to the Led specification set by consumerTask/producerTask to
   ledSrvTask's Env - this is, in fact, done by simply calling ledToggle function with the
   parameters corresponding to the Led specification read from ledSrvTask's own Env!

  - get back to pend on ledSrvSchedSem Scheduling Constraint Semaphore.

 Of course - you realise that the above functionality should be run in while(TRUE) loop, so that
 ledSrvTask should always be ready to receive "posts" on ledSrvSchedSem Scheduling Constraint
 Semaphore.
 */
void ledSrvTaskHandler(void);


/*
 Function: void ledToggle(uint8_t selectedPort, uint16_t selectedPins, int times)

 This function is very similar to what you implemented in Lab 1: gets LED Port/Pin and times
 and toggles the corresponding LED times times.

 As you recall, a delay of 1/2 a second should be set between ON/OFF states of the Led.
 Note, in this project, you must use the delay function "delay" implemented here - see below
 (This delay function is similar to what you used in Lab 3, only that in this project, the Clock
 Module is set to tick every 500 microseconds, so the ~1/2 second delay value here is set with
 respect to 500 microseconds Clock tick - different to that in Lab3!).

 Recall, "delay" function consumes CPU Cycles for 1/2 second. You must use this function in the
 ledToggle function, rather than Task_sleep function, because Task_sleep function blocks on a
 timer for N milliseconds, and while blocking, another Task (with highest priority in the
 Ready Queue) gets to run, until Task unblocks from sleep! In this project, if you get
 ledSrvTask to release the CPU - you break the system requirements - and might get into
 trouble!!! Therefore, you have no choice, but to use a non-blocking delay here!
 */
void ledToggle(uint8_t selectedPort, uint16_t selectedPins, int times);


/*
 Function: void delay(void)

 The delay function, used in lab 3. This function consumes CPU Cycles for 1/2 second.
 You must use this function in the LED toggling function, rather than Task_sleep function,
 because Task_sleep function blocks on a timer for N milliseconds, and while blocking, another
 Task (with highest priority in the Ready Queue) gets to run, until Task unblocks from sleep!
 In this project, if you get ledSrvTask to release the CPU - you break the system requirements
 - and might get into trouble!!! Therefore, you have no choice, but to use a non-blocking
 delay here!
 */
void delay(void);


/*
 Function: void tsClockHandler(void)

 This is the handler function for the "time-sharing" Clock object: timeSharingClk.

 timeSharingClk is set to elapse every 1/2 millisecond (500 microseconds), and forcefully
 get the running Task to yield (You should know how to do that by now). If you set the Clock
 Module's "Tick period" to 500 microseconds (and NOT the default 1000 microseconds), what
 should be timeSharingClk "Initial timeout" and "period" set to in GUI?
 */
void tsClockHandler(void);


/*
 Function: initArray(volatile Int *arr, Int size)

 This function initialises the shared buffer array to hold -1 in ALL its cells.
 Recall, -1 marks an empty cell in the shared buffer! Therefore, initially ALL cells are empty!

 Of course, this function must be invoked from main function to initialise the shared
 buffer array - before BIOS kernel objects start running!
 */
void initArray(volatile Int *arr, Int size);

void printErrorMessage(char* errorMsg, Int msgArg1);

void printMessage(char* msg, Int msgArg1, Int msgArg2);

void prepForLedSrv(LedBlinksInfo_T* ledBlinkInfo);

//-----------------------------------------
// Globals
//-----------------------------------------


/*
 The shared buffer array.
 */
volatile Int buffer[BUFFER_SIZE];

/*
 This global variable always manages the next empty slot in the shared buffer - see the
 description of the functions: insert_item & remove_item.
 */
volatile Int in = 0;

/*
 This global variable always manages the next full slot in the shared buffer - see the
 description of the functions: insert_item & remove_item.
 */
volatile Int out = 0;

/*
 This global variable always manages the count of current full slots in the shared buffer -
 see the description of the functions: insert_item & remove_item.
 */
volatile Int count = 0;


//---------------------------------------------------------------------------
// main()
//---------------------------------------------------------------------------
void main(void)
{
	hardware_init();
	Semaphore_reset(emptySlots, BUFFER_SIZE);
	initArray(buffer, BUFFER_SIZE);
	BIOS_start();
}

void hardware_init(void)
{
	// Disable the Watchdog Timer (important, as this is enabled by default)
	WDT_A_hold( WDT_A_BASE );

	// Set MCLK frequency to 8192 KHz
	// First, set DCO FLLREF to 32KHz = REF0
	UCS_initClockSignal(UCS_FLLREF, UCS_REFOCLK_SELECT, UCS_CLOCK_DIVIDER_1);
	// Second, Set Ratio and Desired MCLK Frequency = 8192KHz and initialize DCO
	UCS_initFLLSettle(MCLK_DESIRED_FREQUENCY_IN_KHZ, MCLK_FLLREF_RATIO);

	// Set GPIO ports to low-level outputs
	GPIO_setAsOutputPin( GPIO_PORT_P1, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_P2, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_P3, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_P4, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_P5, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_P6, GPIO_ALL );
	GPIO_setAsOutputPin( GPIO_PORT_PJ, GPIO_ALL );

	GPIO_setOutputLowOnPin( GPIO_PORT_P1, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_P2, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_P3, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_P4, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_P5, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_P6, GPIO_ALL );
	GPIO_setOutputLowOnPin( GPIO_PORT_PJ, GPIO_ALL );
}

/*---------------------------------------------------------------------------
Function name: delay
Description: Busy-waiting loop
Input: None
Output: None
Algorithm: 1/2s delay.
---------------------------------------------------------------------------*/
void delay(void)
{
	// ~1/2 second delay providing Clock Module is set to tick every 500 microseconds
	// (i.e every 1/2 milisecond, rather than every 1 milisecond).
	__delay_cycles(1024000);
}

/*---------------------------------------------------------------------------
Function name: initArray
Description: Initialize buffer.
Input: volatile Int *arr, Int size
Output: None
Algorithm: insert -1 in each buffer space.
---------------------------------------------------------------------------*/
void initArray(volatile Int *arr, Int size)
{
	while(size > 0)
		arr[--size] = EMPTY_SLOT_IND;
}

/*---------------------------------------------------------------------------
Function name: tsClockHandler
Description: The clock function
Input: None
Output: None
Algorithm: Yields the current task every 0.5ms to create a time-sharing
		   mechanism.
---------------------------------------------------------------------------*/
void tsClockHandler(void)
{
	Task_yield();
}

/*---------------------------------------------------------------------------
Function name: producerHandler
Description: The producers task.
Input: UArg arg0, UArg arg1
Output: None
Algorithm: Activates insert_item function to insert an item to the buffer,
		   if succeeded- print a log message, update his ledBlinkInfo and
		   send it to prepForLedSrv function.
---------------------------------------------------------------------------*/
void producerHandler(UArg arg0, UArg arg1)
{
	LedBlinksInfo_T ledBlinkInfo;
	Int prodItem;
	while(TRUE)
	{
		srand(time(NULL));
		prodItem = rand() % (MAX_VAL_NUM - MIN_VAL_NUM + 1) + MIN_VAL_NUM;
		if(!insert_item(prodItem))
		{
			printErrorMessage("ProducerID = %u:: Error, could not insert item!", arg0);
			continue;
		}
		printMessage("ProducerID = %u; Produced Item = %u", arg0, prodItem);
		ledBlinkInfo.led = green_e;
		ledBlinkInfo.blinksNum = prodItem;
		prepForLedSrv(&ledBlinkInfo);
	}
}

/*---------------------------------------------------------------------------
Function name: consumerHandler
Description: The consumers task.
Input: UArg arg0, UArg arg1
Output: None
Algorithm: Activates remove_item function to remove an item from the buffer,
		   if succeeded- print a log message, update his ledBlinkInfo and
		   send it to prepForLedSrv function.
---------------------------------------------------------------------------*/
void consumerHandler(UArg arg0, UArg arg1)
{
	LedBlinksInfo_T ledBlinkInfo;
	Int consItem;
	while(TRUE)
	{
		if(!remove_item(&consItem))
		{
			printErrorMessage("ConsumerID = %u:: Error, could not remove item!", arg0);
			continue;
		}
		printMessage("ConsumerID = %u; Removed Item = %u", arg0, consItem);
		ledBlinkInfo.led = red_e;
		ledBlinkInfo.blinksNum = consItem;
		prepForLedSrv(&ledBlinkInfo);
	}
}

/*---------------------------------------------------------------------------
Function name: prepForLedSrv
Description: Environment critical section
Input: LedBlinksInfo_T* ledBlinkInfo
Output: None
Algorithm: Wait until it can write to ledSrvTask Env and then posts his
		   semaphore to get his service.
---------------------------------------------------------------------------*/
void prepForLedSrv(LedBlinksInfo_T* ledBlinkInfo)
{
	Semaphore_pend(setLedEnvMutex, BIOS_WAIT_FOREVER);
	Task_setEnv(ledSrvTask, (Ptr)ledBlinkInfo);
	Semaphore_post(ledSrvSchedSem);
	Semaphore_post(setLedEnvMutex);
}

/*---------------------------------------------------------------------------
Function name: ledSrvTaskHandler
Description: LEDs manager
Input: None
Output: None
Algorithm: Wait until a producer/consumer need his service, then read the
		   data they sent him from his environment and blink the neede LED.
---------------------------------------------------------------------------*/
void ledSrvTaskHandler(void)
{
	Task_Handle taskHandle = Task_self();
	LedBlinksInfo_T* ledBlinkInfo;
	while(TRUE)
	{
		Semaphore_pend(ledSrvSchedSem, BIOS_WAIT_FOREVER);
		ledBlinkInfo = (LedBlinksInfo_T *)Task_getEnv(taskHandle);
		if(ledBlinkInfo->led == green_e)
			ledToggle(GREEN, ledBlinkInfo->blinksNum);
		else
			ledToggle(RED, ledBlinkInfo->blinksNum);
	}
}

/*---------------------------------------------------------------------------
Function name: insert_item
Description: Inserts an item to the buffer
Input: Int item
Output: Bool- True if an item was inserted, False if not.
Algorithm: Wait until there is empty space in the buffer, then check if the next
		   place is empty, if it is- it inserts the item, increase count,
		   advance "in" variable and issue a log message, then signals the
		   consumers.
---------------------------------------------------------------------------*/
Bool insert_item(Int item)
{
	Semaphore_pend(emptySlots, BIOS_WAIT_FOREVER);
	Semaphore_pend(mutex, BIOS_WAIT_FOREVER);
	if(buffer[in] != EMPTY_SLOT_IND)
	{
		printErrorMessage("insert_item:: Error, could not insert item %u!", item);
		Semaphore_post(mutex);
		Semaphore_post(emptySlots);
		return FALSE;
	}
	count = -~count;
	buffer[in] = item;
	in = -~in % BUFFER_SIZE;
	printMessage("Produced item value = %u; Count = %u", item, count);
	Semaphore_post(mutex);
	Semaphore_post(fullSlots);
	return TRUE;
}

/*---------------------------------------------------------------------------
Function name: remove_item
Description: Removes an item from the buffer
Input: Int *item
Output: Bool- True if an item was removed, False if not.
Algorithm: Wait until there are items in the buffer, then check if the next
		   place is not empty, if it's not- it removes the item, reduce count,
		   advance "out" variable and issue a log message, then signals the
		   producers.
---------------------------------------------------------------------------*/
Bool remove_item(Int *item)
{
	Semaphore_pend(fullSlots, BIOS_WAIT_FOREVER);
	Semaphore_pend(mutex, BIOS_WAIT_FOREVER);
	if(buffer[out] == EMPTY_SLOT_IND)
	{
		printErrorMessage("remove_item:: Error, could not consume item %u!", *item);
		Semaphore_post(mutex);
		Semaphore_post(fullSlots);
		return FALSE;
	}
	count--;
	*item = buffer[out];
	buffer[out] = EMPTY_SLOT_IND;
	out = -~out % BUFFER_SIZE;
	printMessage("Consumed item value = %u; Count = %u", *item, count);
	Semaphore_post(mutex);
	Semaphore_post(emptySlots);
	return TRUE;
}

/*---------------------------------------------------------------------------
Function name: ledToggle
Description: Blink LEDs
Input: uint8_t selectedPort, uint16_t selectedPins, int times
Output: None
Algorithm: Runs in a while loop, toggle LED each iteration.
---------------------------------------------------------------------------*/
void ledToggle(uint8_t selectedPort, uint16_t selectedPins, int times)
{
	times <<= 1;
	while(times > 0)
	{
		GPIO_toggleOutputOnPin(selectedPort, selectedPins);
		delay();
		times--;
	}
}

/*---------------------------------------------------------------------------
Function name: printErrorMessage
Description: Print log messages
Input: char* errorMsg, Int msgArg1
Output: None
Algorithm: Use Log_info1 function to send a log message.
---------------------------------------------------------------------------*/
void printErrorMessage(char* errorMsg, Int msgArg1)
{
	Log_info1(errorMsg, msgArg1);
}

/*---------------------------------------------------------------------------
Function name: printMessage
Description: Print log messages
Input: char* msg, Int msgArg1, Int msgArg2
Output: None
Algorithm: Use Log_info2 function to send a log message.
---------------------------------------------------------------------------*/
void printMessage(char* msg, Int msgArg1, Int msgArg2)
{
	Log_info2(msg, msgArg1, msgArg2);
}
