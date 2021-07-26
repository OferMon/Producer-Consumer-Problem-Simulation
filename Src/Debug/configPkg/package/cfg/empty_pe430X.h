/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

#include <xdc/std.h>

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle producerTask1;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle consumerTask1;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle ledSrvTask;

#include <ti/sysbios/knl/Clock.h>
extern const ti_sysbios_knl_Clock_Handle timeSharingClk;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle fullSlots;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle emptySlots;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle mutex;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle ledSrvSchedSem;

#include <ti/sysbios/knl/Semaphore.h>
extern const ti_sysbios_knl_Semaphore_Handle setLedEnvMutex;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle consumerTask2;

#include <ti/sysbios/knl/Task.h>
extern const ti_sysbios_knl_Task_Handle producerTask2;

#define TI_DRIVERS_WIFI_INCLUDED 0

extern int xdc_runtime_Startup__EXECFXN__C;

extern int xdc_runtime_Startup__RESETFXN__C;

#ifndef ti_sysbios_knl_Task__include
#ifndef __nested__
#define __nested__
#include <ti/sysbios/knl/Task.h>
#undef __nested__
#else
#include <ti/sysbios/knl/Task.h>
#endif
#endif

extern ti_sysbios_knl_Task_Struct TSK_idle;

