/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/msp430/ClockFreqs.h>
#include <ti/sysbios/family/msp430/Hwi.h>
#include <ti/sysbios/family/msp430/IntrinsicsSupport.h>
#include <ti/sysbios/family/msp430/TaskSupport.h>
#include <ti/sysbios/family/msp430/Timer.h>
#include <ti/sysbios/family/msp430/TimestampProvider.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/HeapStd.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Hwi_Object__ {
    const ti_sysbios_family_msp430_Hwi_Fxns__ *__fxns;
    xdc_Int intNum;
    ti_sysbios_family_msp430_Hwi_Irp irp;
    __TA_ti_sysbios_family_msp430_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_msp430_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Hwi_Object__ obj;
} ti_sysbios_family_msp430_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Hwi___VERS
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Timer_Object__ {
    const ti_sysbios_family_msp430_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_msp430_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_msp430_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt savedCurrCount;
    xdc_UInt32 rollovers;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_msp430_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Timer_Object__ obj;
} ti_sysbios_family_msp430_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Timer___VERS
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Hwi_Object */

/* Object */
typedef ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Timer_Object */

/* Object */
typedef ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_loggers_LoggerStopMode___VERS
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.HeapStd INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_HeapStd_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_HeapStd_Module__;

/* Module__root__V */
extern xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V;

/* Object__ */
typedef struct xdc_runtime_HeapStd_Object__ {
    const xdc_runtime_HeapStd_Fxns__ *__fxns;
    xdc_runtime_Memory_Size remainSize;
    xdc_runtime_Memory_Size startSize;
} xdc_runtime_HeapStd_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_HeapStd_Object__ obj;
} xdc_runtime_HeapStd_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_HeapStd___VERS
    #define xdc_runtime_HeapStd___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_HeapStd___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- xdc_runtime_HeapStd_Object */

/* Object */
typedef xdc_runtime_HeapStd_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_msp430_IntrinsicsSupport_Fxns__ ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_msp430_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8017, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8034, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8035, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8029, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.HeapStd VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__FXNS__C, ".const:xdc_runtime_HeapStd_Module__FXNS__C");
const xdc_runtime_HeapStd_Fxns__ xdc_runtime_HeapStd_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &xdc_runtime_HeapStd_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_HeapStd_alloc__E,
    xdc_runtime_HeapStd_free__E,
    xdc_runtime_HeapStd_isBlocking__E,
    xdc_runtime_HeapStd_getStats__E,
    {
        xdc_runtime_HeapStd_Object__create__S,
        xdc_runtime_HeapStd_Object__delete__S,
        xdc_runtime_HeapStd_Handle__label__S,
        0x800b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800f, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module_State__ {
    xdc_Char *taskSP;
    xdc_Char *isrStack;
} ti_sysbios_family_msp430_Hwi_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__device device;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__handles handles;
} ti_sysbios_family_msp430_Timer_Module_State__;

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_TimestampProvider_Module_State__ {
    ti_sysbios_family_msp430_Timer_Handle timer;
    volatile xdc_UInt32 rollovers;
} ti_sysbios_family_msp430_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_TimestampProvider_Module_State__ ti_sysbios_family_msp430_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* --> tsClockHandler */
extern xdc_Void tsClockHandler(xdc_UArg);

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[5];


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> producerHandler */
extern xdc_Void producerHandler(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> consumerHandler */
extern xdc_Void consumerHandler(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_2_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_2_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> ledSrvTaskHandler */
extern xdc_Void ledSrvTaskHandler(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_3_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_3_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> consumerHandler */
extern xdc_Void consumerHandler(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_4_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_4_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> producerHandler */
extern xdc_Void producerHandler(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=2
#endif

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_5_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_5_stack__A, 2);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[6];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[36];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[36] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[128];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[128] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[36];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[36] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[256];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[256] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[36];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[36] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[256];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[256] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.HeapStd DECLARATIONS ========
 */

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1];

/* Module_State__ */
typedef struct xdc_runtime_HeapStd_Module_State__ {
    xdc_runtime_Memory_Size remainRTSSize;
} xdc_runtime_HeapStd_Module_State__;

/* Module__state__V */
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V;


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7559];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[58];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/TI_RTOS/Workspace/RT_FinProj_Part1_MontanoHadad/Debug/configPkg/package/cfg/empty_pe430X");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 430X");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp430");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.msp430.elf.MSP430X");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32801, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32805, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern xdc_Void ti_catalog_msp430_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_msp430_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt, 
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_CString fmt = *pfmt;
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                                       (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (xdc_Int) va_arg(va, xdc_IArg) : 
                                       (xdc_Int) va_arg(va, xdc_Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.msp430.init.Boot TEMPLATE ========
 */

    extern xdc_Void ti_catalog_msp430_init_Boot_disableWatchdog(xdc_UInt address);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO(xdc_Void);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO_CS_A(xdc_Void);
    extern xdc_Void ti_catalog_msp430_init_Boot_configureDCO_CS_A_useLFXT(xdc_Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_msp430_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_msp430_init_Boot_init ========
 */
#if defined(__ICC430__)
    #pragma location="CSTART"
#endif
xdc_Void ti_catalog_msp430_init_Boot_init(xdc_Void)
{
    ti_catalog_msp430_init_Boot_disableWatchdog(348);


    ti_catalog_msp430_init_Boot_configureDCO();


}



/*
 * ======== ti.sysbios.family.msp430.Hwi TEMPLATE ========
 */



/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_msp430_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_msp430_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (NULL);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    return (NULL);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    return (NULL);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    return (NULL);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x7d0000,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x7d0000,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x0;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__id ti_sysbios_family_msp430_ClockFreqs_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__count ti_sysbios_family_msp430_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__heap ti_sysbios_family_msp430_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__sizeof ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__table ti_sysbios_family_msp430_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_ACLK ti_sysbios_family_msp430_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C");
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_SMCLK ti_sysbios_family_msp430_ClockFreqs_SMCLK__C = (xdc_UInt32)0x7d0000;


/*
 * ======== ti.sysbios.family.msp430.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_msp430_Hwi_Params ti_sysbios_family_msp430_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V = {
    {&ti_sysbios_family_msp430_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x35,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_msp430_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_msp430_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsEnabled ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsIncluded ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask ti_sysbios_family_msp430_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gateObj ti_sysbios_family_msp430_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms ti_sysbios_family_msp430_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__id__C, ".const:ti_sysbios_family_msp430_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__id ti_sysbios_family_msp430_Hwi_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerDefined ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj ti_sysbios_family_msp430_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__count__C, ".const:ti_sysbios_family_msp430_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__count ti_sysbios_family_msp430_Hwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__heap__C, ".const:ti_sysbios_family_msp430_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__heap ti_sysbios_family_msp430_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__sizeof ti_sysbios_family_msp430_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__table__C, ".const:ti_sysbios_family_msp430_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__table ti_sysbios_family_msp430_Hwi_Object__table__C = ti_sysbios_family_msp430_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x40;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LM_begin__C, ".const:ti_sysbios_family_msp430_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LM_begin ti_sysbios_family_msp430_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)4689) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LD_end__C, ".const:ti_sysbios_family_msp430_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LD_end ti_sysbios_family_msp430_Hwi_LD_end__C = (((xdc_runtime_Log_Event)4759) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_alreadyDefined ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)3861) << 16 | 0);

/* E_notImplemented__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_notImplemented__C, ".const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_notImplemented ti_sysbios_family_msp430_Hwi_E_notImplemented__C = (((xdc_runtime_Error_Id)3909) << 16 | 0);

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_hooks__C, ".const:ti_sysbios_family_msp430_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_hooks ti_sysbios_family_msp430_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__id ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__count ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__table ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__id__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__id ti_sysbios_family_msp430_TaskSupport_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__count__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__count ti_sysbios_family_msp430_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__heap ti_sysbios_family_msp430_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__sizeof ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__table__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__table ti_sysbios_family_msp430_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_defaultStackSize ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x200;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_stackAlignment ti_sysbios_family_msp430_TaskSupport_stackAlignment__C = (xdc_UInt)0x2;


/*
 * ======== ti.sysbios.family.msp430.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_msp430_Timer_Params ti_sysbios_family_msp430_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_msp430_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_msp430_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_msp430_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_msp430_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V = {
    {&ti_sysbios_family_msp430_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x10,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_msp430_Hwi_Handle)&ti_sysbios_family_msp430_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* savedCurrCount */
        (xdc_UInt32)0x0,  /* rollovers */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x35,  /* intNum */
        ((xdc_Ptr)(0x340)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x31,  /* intNum */
        ((xdc_Ptr)(0x380)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x2c,  /* intNum */
        ((xdc_Ptr)(0x400)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x3b,  /* intNum */
        ((xdc_Ptr)(0x3c0)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_msp430_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_msp430_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V = {
    (xdc_UInt)0xe,  /* availMask */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsEnabled ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsIncluded ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsMask ti_sysbios_family_msp430_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gateObj ti_sysbios_family_msp430_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gatePrms ti_sysbios_family_msp430_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__id__C, ".const:ti_sysbios_family_msp430_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__id ti_sysbios_family_msp430_Timer_Module__id__C = (xdc_Bits16)0x8019;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerDefined ti_sysbios_family_msp430_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerObj ti_sysbios_family_msp430_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__count__C, ".const:ti_sysbios_family_msp430_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__count ti_sysbios_family_msp430_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__heap__C, ".const:ti_sysbios_family_msp430_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__heap ti_sysbios_family_msp430_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__sizeof ti_sysbios_family_msp430_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__table__C, ".const:ti_sysbios_family_msp430_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__table ti_sysbios_family_msp430_Timer_Object__table__C = ti_sysbios_family_msp430_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_invalidTimer ti_sysbios_family_msp430_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)3956) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_notAvailable__C, ".const:ti_sysbios_family_msp430_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_notAvailable ti_sysbios_family_msp430_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)3992) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_cannotSupport ti_sysbios_family_msp430_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4031) << 16 | 0);

/* E_runtimeCreate__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_runtimeCreate__C, ".const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_runtimeCreate ti_sysbios_family_msp430_Timer_E_runtimeCreate__C = (((xdc_runtime_Error_Id)4089) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_anyMask__C, ".const:ti_sysbios_family_msp430_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_anyMask ti_sysbios_family_msp430_Timer_anyMask__C = (xdc_UInt)0xf;

/* keepAwake__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_keepAwake__C, ".const:ti_sysbios_family_msp430_Timer_keepAwake__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_keepAwake ti_sysbios_family_msp430_Timer_keepAwake__C = 0;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_startupNeeded__C, ".const:ti_sysbios_family_msp430_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_startupNeeded ti_sysbios_family_msp430_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_numTimerDevices__C, ".const:ti_sysbios_family_msp430_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_msp430_Timer_numTimerDevices ti_sysbios_family_msp430_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_msp430_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_msp430_TimestampProvider_Module_State__ ti_sysbios_family_msp430_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_msp430_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_msp430_TimestampProvider_Module_State__ ti_sysbios_family_msp430_TimestampProvider_Module__state__V = {
    0,  /* timer */
    (xdc_UInt32)0x0,  /* rollovers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled ti_sysbios_family_msp430_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded ti_sysbios_family_msp430_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__gateObj ti_sysbios_family_msp430_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__id ti_sysbios_family_msp430_TimestampProvider_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined ti_sysbios_family_msp430_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__count ti_sysbios_family_msp430_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__heap ti_sysbios_family_msp430_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__sizeof ti_sysbios_family_msp430_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_msp430_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_Object__table ti_sysbios_family_msp430_TimestampProvider_Object__table__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_timerId__C, ".const:ti_sysbios_family_msp430_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_timerId ti_sysbios_family_msp430_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_useClockTimer ti_sysbios_family_msp430_TimestampProvider_useClockTimer__C = 1;

/* clockSource__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_clockSource__C, ".const:ti_sysbios_family_msp430_TimestampProvider_clockSource__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_clockSource ti_sysbios_family_msp430_TimestampProvider_clockSource__C = ti_sysbios_family_msp430_TimestampProvider_Source_ACLK;

/* synchronize__C */
#pragma DATA_SECTION(ti_sysbios_family_msp430_TimestampProvider_synchronize__C, ".const:ti_sysbios_family_msp430_TimestampProvider_synchronize__C");
__FAR__ const CT__ti_sysbios_family_msp430_TimestampProvider_synchronize ti_sysbios_family_msp430_TimestampProvider_synchronize__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8035;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3422) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8027;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4350) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = 0;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2285) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2321) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2366) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4435) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2257) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Clock_Object__ ti_sysbios_knl_Clock_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
        (xdc_UInt32)0x1,  /* timeout */
        (xdc_UInt32)0x1,  /* currTimeout */
        (xdc_UInt32)0x1,  /* period */
        1,  /* active */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)tsClockHandler)),  /* fxn */
        ((xdc_UArg)0),  /* arg */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Object__table__V[0].elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = ti_sysbios_knl_Clock_Object__table__V;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)4777) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)4799) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)4817) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)453) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)534) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x1f4;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)4849) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)4903) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)604) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)651) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)690) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)733) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)796) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [1] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[2] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {2, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {2, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Semaphore_Object__ ti_sysbios_knl_Semaphore_Object__table__V[5] = {
    {/* instance#0 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[0].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#1 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[1].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#2 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x1,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[2].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#3 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x0,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[3].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[3].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
    {/* instance#4 */
        0,  /* event */
        (xdc_UInt)0x1,  /* eventId */
        ti_sysbios_knl_Semaphore_Mode_BINARY,  /* mode */
        (xdc_UInt16)0x1,  /* count */
        {
            {
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[4].Object_field_pendQ.elem)),  /* next */
                ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Semaphore_Object__table__V[4].Object_field_pendQ.elem)),  /* prev */
            },  /* elem */
        },  /* Object_field_pendQ */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 5;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = ti_sysbios_knl_Semaphore_Object__table__V;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)4984) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5014) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)944) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)999) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)733) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1064) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1118) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8024;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5057) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5104) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5122) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1212) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1269) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_2_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_2_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_3_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_3_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_4_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_4_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_5_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_5_stack__A[512];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[6] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)producerHandler)),  /* fxn */
        ((xdc_UArg)(0x1)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)consumerHandler)),  /* fxn */
        ((xdc_UArg)(0x1)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#2 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[2].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x3,  /* priority */
        (xdc_UInt)0x8,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_2_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ledSrvTaskHandler)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#3 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[3].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_3_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)consumerHandler)),  /* fxn */
        ((xdc_UArg)(0x2)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#4 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[4].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_4_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)producerHandler)),  /* fxn */
        ((xdc_UArg)(0x2)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#5 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[5].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_5_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[5],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x6,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 6;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5162) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5230) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5275) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5316) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5348) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5396) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5452) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5483) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5566) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)5652) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4225) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4268) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4319) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1318) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1387) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1441) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1495) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1558) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1608) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1643) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1676) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1760) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)0),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x0,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)6820) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)6837) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)6855) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)6873) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 0;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 0;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)5722) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)5744) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)5771) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)5796) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)5826) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)5854) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)5887) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)5918) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)5954) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)5979) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6013) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6051) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6087) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6133) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6167) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6199) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6233) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6279) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6344) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6383) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6427) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6464) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6513) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6549) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6612) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6636) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6665) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)6687) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)6714) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)6737) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)6766) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[36];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[128];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[36];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[256];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[36];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[256];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x80,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x100,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x100,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)6800) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3689) << 16 | 0);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3621) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3643) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3647) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3681) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.HeapStd INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__PARAMS__C, ".const:xdc_runtime_HeapStd_Object__PARAMS__C");
__FAR__ const xdc_runtime_HeapStd_Params xdc_runtime_HeapStd_Object__PARAMS__C = {
    sizeof (xdc_runtime_HeapStd_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&xdc_runtime_HeapStd_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
xdc_runtime_HeapStd_Module__ xdc_runtime_HeapStd_Module__root__V = {
    {&xdc_runtime_HeapStd_Module__root__V.link,  /* link.next */
    &xdc_runtime_HeapStd_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
xdc_runtime_HeapStd_Object__ xdc_runtime_HeapStd_Object__table__V[1] = {
    {/* instance#0 */
        &xdc_runtime_HeapStd_Module__FXNS__C,
        ((xdc_UArg)((-0x0 - 1))),  /* remainSize */
        ((xdc_UArg)((-0x0 - 1))),  /* startSize */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_HeapStd_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V __attribute__ ((section(".data_xdc_runtime_HeapStd_Module__state__V")));
#endif
#endif
xdc_runtime_HeapStd_Module_State__ xdc_runtime_HeapStd_Module__state__V = {
    ((xdc_UArg)(0x0)),  /* remainRTSSize */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsEnabled__C, ".const:xdc_runtime_HeapStd_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsEnabled xdc_runtime_HeapStd_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsIncluded__C, ".const:xdc_runtime_HeapStd_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsIncluded xdc_runtime_HeapStd_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__diagsMask__C, ".const:xdc_runtime_HeapStd_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__diagsMask xdc_runtime_HeapStd_Module__diagsMask__C = ((CT__xdc_runtime_HeapStd_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gateObj__C, ".const:xdc_runtime_HeapStd_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__gateObj xdc_runtime_HeapStd_Module__gateObj__C = ((CT__xdc_runtime_HeapStd_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__gatePrms__C, ".const:xdc_runtime_HeapStd_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__gatePrms xdc_runtime_HeapStd_Module__gatePrms__C = ((CT__xdc_runtime_HeapStd_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__id__C, ".const:xdc_runtime_HeapStd_Module__id__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__id xdc_runtime_HeapStd_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerDefined__C, ".const:xdc_runtime_HeapStd_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerDefined xdc_runtime_HeapStd_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerObj__C, ".const:xdc_runtime_HeapStd_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerObj xdc_runtime_HeapStd_Module__loggerObj__C = ((CT__xdc_runtime_HeapStd_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn0__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn0 xdc_runtime_HeapStd_Module__loggerFxn0__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn1__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn1 xdc_runtime_HeapStd_Module__loggerFxn1__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn2__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn2 xdc_runtime_HeapStd_Module__loggerFxn2__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn4__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn4 xdc_runtime_HeapStd_Module__loggerFxn4__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__loggerFxn8__C, ".const:xdc_runtime_HeapStd_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__loggerFxn8 xdc_runtime_HeapStd_Module__loggerFxn8__C = ((CT__xdc_runtime_HeapStd_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Module__startupDoneFxn__C, ".const:xdc_runtime_HeapStd_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_HeapStd_Module__startupDoneFxn xdc_runtime_HeapStd_Module__startupDoneFxn__C = ((CT__xdc_runtime_HeapStd_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__count__C, ".const:xdc_runtime_HeapStd_Object__count__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__count xdc_runtime_HeapStd_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__heap__C, ".const:xdc_runtime_HeapStd_Object__heap__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__heap xdc_runtime_HeapStd_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__sizeof__C, ".const:xdc_runtime_HeapStd_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__sizeof xdc_runtime_HeapStd_Object__sizeof__C = sizeof(xdc_runtime_HeapStd_Object__);

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__table__C, ".const:xdc_runtime_HeapStd_Object__table__C");
__FAR__ const CT__xdc_runtime_HeapStd_Object__table xdc_runtime_HeapStd_Object__table__C = xdc_runtime_HeapStd_Object__table__V;

/* E_noRTSMemory__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_E_noRTSMemory__C, ".const:xdc_runtime_HeapStd_E_noRTSMemory__C");
__FAR__ const CT__xdc_runtime_HeapStd_E_noRTSMemory xdc_runtime_HeapStd_E_noRTSMemory__C = (((xdc_runtime_Error_Id)3766) << 16 | 0);

/* A_zeroSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_zeroSize__C, ".const:xdc_runtime_HeapStd_A_zeroSize__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_zeroSize xdc_runtime_HeapStd_A_zeroSize__C = (((xdc_runtime_Assert_Id)95) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_align__C, ".const:xdc_runtime_HeapStd_A_align__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_align xdc_runtime_HeapStd_A_align__C = (((xdc_runtime_Assert_Id)140) << 16 | 16);

/* A_invalidTotalFreeSize__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidTotalFreeSize__C, ".const:xdc_runtime_HeapStd_A_invalidTotalFreeSize__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidTotalFreeSize xdc_runtime_HeapStd_A_invalidTotalFreeSize__C = (((xdc_runtime_Assert_Id)185) << 16 | 16);

/* A_invalidAlignment__C */
#pragma DATA_SECTION(xdc_runtime_HeapStd_A_invalidAlignment__C, ".const:xdc_runtime_HeapStd_A_invalidAlignment__C");
__FAR__ const CT__xdc_runtime_HeapStd_A_invalidAlignment xdc_runtime_HeapStd_A_invalidAlignment__C = (((xdc_runtime_Assert_Id)246) << 16 | 16);


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4513) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4537) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4558) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)4577) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)4594) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)4608) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)4624) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)4631) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)4642) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)4652) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)4671) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&xdc_runtime_HeapStd_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_TimestampProvider_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    1,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {0, 0};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[128];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x80;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7559] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x75,  /* [402] */
    (xdc_Char)0x6e,  /* [403] */
    (xdc_Char)0x73,  /* [404] */
    (xdc_Char)0x75,  /* [405] */
    (xdc_Char)0x70,  /* [406] */
    (xdc_Char)0x70,  /* [407] */
    (xdc_Char)0x6f,  /* [408] */
    (xdc_Char)0x72,  /* [409] */
    (xdc_Char)0x74,  /* [410] */
    (xdc_Char)0x65,  /* [411] */
    (xdc_Char)0x64,  /* [412] */
    (xdc_Char)0x4d,  /* [413] */
    (xdc_Char)0x61,  /* [414] */
    (xdc_Char)0x73,  /* [415] */
    (xdc_Char)0x6b,  /* [416] */
    (xdc_Char)0x69,  /* [417] */
    (xdc_Char)0x6e,  /* [418] */
    (xdc_Char)0x67,  /* [419] */
    (xdc_Char)0x4f,  /* [420] */
    (xdc_Char)0x70,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x69,  /* [423] */
    (xdc_Char)0x6f,  /* [424] */
    (xdc_Char)0x6e,  /* [425] */
    (xdc_Char)0x3a,  /* [426] */
    (xdc_Char)0x20,  /* [427] */
    (xdc_Char)0x75,  /* [428] */
    (xdc_Char)0x6e,  /* [429] */
    (xdc_Char)0x73,  /* [430] */
    (xdc_Char)0x75,  /* [431] */
    (xdc_Char)0x70,  /* [432] */
    (xdc_Char)0x70,  /* [433] */
    (xdc_Char)0x6f,  /* [434] */
    (xdc_Char)0x72,  /* [435] */
    (xdc_Char)0x74,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x64,  /* [438] */
    (xdc_Char)0x20,  /* [439] */
    (xdc_Char)0x6d,  /* [440] */
    (xdc_Char)0x61,  /* [441] */
    (xdc_Char)0x73,  /* [442] */
    (xdc_Char)0x6b,  /* [443] */
    (xdc_Char)0x53,  /* [444] */
    (xdc_Char)0x65,  /* [445] */
    (xdc_Char)0x74,  /* [446] */
    (xdc_Char)0x74,  /* [447] */
    (xdc_Char)0x69,  /* [448] */
    (xdc_Char)0x6e,  /* [449] */
    (xdc_Char)0x67,  /* [450] */
    (xdc_Char)0x2e,  /* [451] */
    (xdc_Char)0x0,  /* [452] */
    (xdc_Char)0x41,  /* [453] */
    (xdc_Char)0x5f,  /* [454] */
    (xdc_Char)0x63,  /* [455] */
    (xdc_Char)0x6c,  /* [456] */
    (xdc_Char)0x6f,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6b,  /* [459] */
    (xdc_Char)0x44,  /* [460] */
    (xdc_Char)0x69,  /* [461] */
    (xdc_Char)0x73,  /* [462] */
    (xdc_Char)0x61,  /* [463] */
    (xdc_Char)0x62,  /* [464] */
    (xdc_Char)0x6c,  /* [465] */
    (xdc_Char)0x65,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x3a,  /* [468] */
    (xdc_Char)0x20,  /* [469] */
    (xdc_Char)0x43,  /* [470] */
    (xdc_Char)0x61,  /* [471] */
    (xdc_Char)0x6e,  /* [472] */
    (xdc_Char)0x6e,  /* [473] */
    (xdc_Char)0x6f,  /* [474] */
    (xdc_Char)0x74,  /* [475] */
    (xdc_Char)0x20,  /* [476] */
    (xdc_Char)0x63,  /* [477] */
    (xdc_Char)0x72,  /* [478] */
    (xdc_Char)0x65,  /* [479] */
    (xdc_Char)0x61,  /* [480] */
    (xdc_Char)0x74,  /* [481] */
    (xdc_Char)0x65,  /* [482] */
    (xdc_Char)0x20,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x20,  /* [485] */
    (xdc_Char)0x63,  /* [486] */
    (xdc_Char)0x6c,  /* [487] */
    (xdc_Char)0x6f,  /* [488] */
    (xdc_Char)0x63,  /* [489] */
    (xdc_Char)0x6b,  /* [490] */
    (xdc_Char)0x20,  /* [491] */
    (xdc_Char)0x69,  /* [492] */
    (xdc_Char)0x6e,  /* [493] */
    (xdc_Char)0x73,  /* [494] */
    (xdc_Char)0x74,  /* [495] */
    (xdc_Char)0x61,  /* [496] */
    (xdc_Char)0x6e,  /* [497] */
    (xdc_Char)0x63,  /* [498] */
    (xdc_Char)0x65,  /* [499] */
    (xdc_Char)0x20,  /* [500] */
    (xdc_Char)0x77,  /* [501] */
    (xdc_Char)0x68,  /* [502] */
    (xdc_Char)0x65,  /* [503] */
    (xdc_Char)0x6e,  /* [504] */
    (xdc_Char)0x20,  /* [505] */
    (xdc_Char)0x42,  /* [506] */
    (xdc_Char)0x49,  /* [507] */
    (xdc_Char)0x4f,  /* [508] */
    (xdc_Char)0x53,  /* [509] */
    (xdc_Char)0x2e,  /* [510] */
    (xdc_Char)0x63,  /* [511] */
    (xdc_Char)0x6c,  /* [512] */
    (xdc_Char)0x6f,  /* [513] */
    (xdc_Char)0x63,  /* [514] */
    (xdc_Char)0x6b,  /* [515] */
    (xdc_Char)0x45,  /* [516] */
    (xdc_Char)0x6e,  /* [517] */
    (xdc_Char)0x61,  /* [518] */
    (xdc_Char)0x62,  /* [519] */
    (xdc_Char)0x6c,  /* [520] */
    (xdc_Char)0x65,  /* [521] */
    (xdc_Char)0x64,  /* [522] */
    (xdc_Char)0x20,  /* [523] */
    (xdc_Char)0x69,  /* [524] */
    (xdc_Char)0x73,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x61,  /* [528] */
    (xdc_Char)0x6c,  /* [529] */
    (xdc_Char)0x73,  /* [530] */
    (xdc_Char)0x65,  /* [531] */
    (xdc_Char)0x2e,  /* [532] */
    (xdc_Char)0x0,  /* [533] */
    (xdc_Char)0x41,  /* [534] */
    (xdc_Char)0x5f,  /* [535] */
    (xdc_Char)0x62,  /* [536] */
    (xdc_Char)0x61,  /* [537] */
    (xdc_Char)0x64,  /* [538] */
    (xdc_Char)0x54,  /* [539] */
    (xdc_Char)0x68,  /* [540] */
    (xdc_Char)0x72,  /* [541] */
    (xdc_Char)0x65,  /* [542] */
    (xdc_Char)0x61,  /* [543] */
    (xdc_Char)0x64,  /* [544] */
    (xdc_Char)0x54,  /* [545] */
    (xdc_Char)0x79,  /* [546] */
    (xdc_Char)0x70,  /* [547] */
    (xdc_Char)0x65,  /* [548] */
    (xdc_Char)0x3a,  /* [549] */
    (xdc_Char)0x20,  /* [550] */
    (xdc_Char)0x43,  /* [551] */
    (xdc_Char)0x61,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x6e,  /* [554] */
    (xdc_Char)0x6f,  /* [555] */
    (xdc_Char)0x74,  /* [556] */
    (xdc_Char)0x20,  /* [557] */
    (xdc_Char)0x63,  /* [558] */
    (xdc_Char)0x72,  /* [559] */
    (xdc_Char)0x65,  /* [560] */
    (xdc_Char)0x61,  /* [561] */
    (xdc_Char)0x74,  /* [562] */
    (xdc_Char)0x65,  /* [563] */
    (xdc_Char)0x2f,  /* [564] */
    (xdc_Char)0x64,  /* [565] */
    (xdc_Char)0x65,  /* [566] */
    (xdc_Char)0x6c,  /* [567] */
    (xdc_Char)0x65,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x65,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x20,  /* [573] */
    (xdc_Char)0x43,  /* [574] */
    (xdc_Char)0x6c,  /* [575] */
    (xdc_Char)0x6f,  /* [576] */
    (xdc_Char)0x63,  /* [577] */
    (xdc_Char)0x6b,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x66,  /* [580] */
    (xdc_Char)0x72,  /* [581] */
    (xdc_Char)0x6f,  /* [582] */
    (xdc_Char)0x6d,  /* [583] */
    (xdc_Char)0x20,  /* [584] */
    (xdc_Char)0x48,  /* [585] */
    (xdc_Char)0x77,  /* [586] */
    (xdc_Char)0x69,  /* [587] */
    (xdc_Char)0x20,  /* [588] */
    (xdc_Char)0x6f,  /* [589] */
    (xdc_Char)0x72,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x53,  /* [592] */
    (xdc_Char)0x77,  /* [593] */
    (xdc_Char)0x69,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x74,  /* [596] */
    (xdc_Char)0x68,  /* [597] */
    (xdc_Char)0x72,  /* [598] */
    (xdc_Char)0x65,  /* [599] */
    (xdc_Char)0x61,  /* [600] */
    (xdc_Char)0x64,  /* [601] */
    (xdc_Char)0x2e,  /* [602] */
    (xdc_Char)0x0,  /* [603] */
    (xdc_Char)0x41,  /* [604] */
    (xdc_Char)0x5f,  /* [605] */
    (xdc_Char)0x6e,  /* [606] */
    (xdc_Char)0x75,  /* [607] */
    (xdc_Char)0x6c,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x45,  /* [610] */
    (xdc_Char)0x76,  /* [611] */
    (xdc_Char)0x65,  /* [612] */
    (xdc_Char)0x6e,  /* [613] */
    (xdc_Char)0x74,  /* [614] */
    (xdc_Char)0x4d,  /* [615] */
    (xdc_Char)0x61,  /* [616] */
    (xdc_Char)0x73,  /* [617] */
    (xdc_Char)0x6b,  /* [618] */
    (xdc_Char)0x73,  /* [619] */
    (xdc_Char)0x3a,  /* [620] */
    (xdc_Char)0x20,  /* [621] */
    (xdc_Char)0x6f,  /* [622] */
    (xdc_Char)0x72,  /* [623] */
    (xdc_Char)0x4d,  /* [624] */
    (xdc_Char)0x61,  /* [625] */
    (xdc_Char)0x73,  /* [626] */
    (xdc_Char)0x6b,  /* [627] */
    (xdc_Char)0x20,  /* [628] */
    (xdc_Char)0x61,  /* [629] */
    (xdc_Char)0x6e,  /* [630] */
    (xdc_Char)0x64,  /* [631] */
    (xdc_Char)0x20,  /* [632] */
    (xdc_Char)0x61,  /* [633] */
    (xdc_Char)0x6e,  /* [634] */
    (xdc_Char)0x64,  /* [635] */
    (xdc_Char)0x4d,  /* [636] */
    (xdc_Char)0x61,  /* [637] */
    (xdc_Char)0x73,  /* [638] */
    (xdc_Char)0x6b,  /* [639] */
    (xdc_Char)0x20,  /* [640] */
    (xdc_Char)0x61,  /* [641] */
    (xdc_Char)0x72,  /* [642] */
    (xdc_Char)0x65,  /* [643] */
    (xdc_Char)0x20,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x75,  /* [646] */
    (xdc_Char)0x6c,  /* [647] */
    (xdc_Char)0x6c,  /* [648] */
    (xdc_Char)0x2e,  /* [649] */
    (xdc_Char)0x0,  /* [650] */
    (xdc_Char)0x41,  /* [651] */
    (xdc_Char)0x5f,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x75,  /* [654] */
    (xdc_Char)0x6c,  /* [655] */
    (xdc_Char)0x6c,  /* [656] */
    (xdc_Char)0x45,  /* [657] */
    (xdc_Char)0x76,  /* [658] */
    (xdc_Char)0x65,  /* [659] */
    (xdc_Char)0x6e,  /* [660] */
    (xdc_Char)0x74,  /* [661] */
    (xdc_Char)0x49,  /* [662] */
    (xdc_Char)0x64,  /* [663] */
    (xdc_Char)0x3a,  /* [664] */
    (xdc_Char)0x20,  /* [665] */
    (xdc_Char)0x70,  /* [666] */
    (xdc_Char)0x6f,  /* [667] */
    (xdc_Char)0x73,  /* [668] */
    (xdc_Char)0x74,  /* [669] */
    (xdc_Char)0x65,  /* [670] */
    (xdc_Char)0x64,  /* [671] */
    (xdc_Char)0x20,  /* [672] */
    (xdc_Char)0x65,  /* [673] */
    (xdc_Char)0x76,  /* [674] */
    (xdc_Char)0x65,  /* [675] */
    (xdc_Char)0x6e,  /* [676] */
    (xdc_Char)0x74,  /* [677] */
    (xdc_Char)0x49,  /* [678] */
    (xdc_Char)0x64,  /* [679] */
    (xdc_Char)0x20,  /* [680] */
    (xdc_Char)0x69,  /* [681] */
    (xdc_Char)0x73,  /* [682] */
    (xdc_Char)0x20,  /* [683] */
    (xdc_Char)0x6e,  /* [684] */
    (xdc_Char)0x75,  /* [685] */
    (xdc_Char)0x6c,  /* [686] */
    (xdc_Char)0x6c,  /* [687] */
    (xdc_Char)0x2e,  /* [688] */
    (xdc_Char)0x0,  /* [689] */
    (xdc_Char)0x41,  /* [690] */
    (xdc_Char)0x5f,  /* [691] */
    (xdc_Char)0x65,  /* [692] */
    (xdc_Char)0x76,  /* [693] */
    (xdc_Char)0x65,  /* [694] */
    (xdc_Char)0x6e,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x49,  /* [697] */
    (xdc_Char)0x6e,  /* [698] */
    (xdc_Char)0x55,  /* [699] */
    (xdc_Char)0x73,  /* [700] */
    (xdc_Char)0x65,  /* [701] */
    (xdc_Char)0x3a,  /* [702] */
    (xdc_Char)0x20,  /* [703] */
    (xdc_Char)0x45,  /* [704] */
    (xdc_Char)0x76,  /* [705] */
    (xdc_Char)0x65,  /* [706] */
    (xdc_Char)0x6e,  /* [707] */
    (xdc_Char)0x74,  /* [708] */
    (xdc_Char)0x20,  /* [709] */
    (xdc_Char)0x6f,  /* [710] */
    (xdc_Char)0x62,  /* [711] */
    (xdc_Char)0x6a,  /* [712] */
    (xdc_Char)0x65,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x74,  /* [715] */
    (xdc_Char)0x20,  /* [716] */
    (xdc_Char)0x61,  /* [717] */
    (xdc_Char)0x6c,  /* [718] */
    (xdc_Char)0x72,  /* [719] */
    (xdc_Char)0x65,  /* [720] */
    (xdc_Char)0x61,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x79,  /* [723] */
    (xdc_Char)0x20,  /* [724] */
    (xdc_Char)0x69,  /* [725] */
    (xdc_Char)0x6e,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x75,  /* [728] */
    (xdc_Char)0x73,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x2e,  /* [731] */
    (xdc_Char)0x0,  /* [732] */
    (xdc_Char)0x41,  /* [733] */
    (xdc_Char)0x5f,  /* [734] */
    (xdc_Char)0x62,  /* [735] */
    (xdc_Char)0x61,  /* [736] */
    (xdc_Char)0x64,  /* [737] */
    (xdc_Char)0x43,  /* [738] */
    (xdc_Char)0x6f,  /* [739] */
    (xdc_Char)0x6e,  /* [740] */
    (xdc_Char)0x74,  /* [741] */
    (xdc_Char)0x65,  /* [742] */
    (xdc_Char)0x78,  /* [743] */
    (xdc_Char)0x74,  /* [744] */
    (xdc_Char)0x3a,  /* [745] */
    (xdc_Char)0x20,  /* [746] */
    (xdc_Char)0x62,  /* [747] */
    (xdc_Char)0x61,  /* [748] */
    (xdc_Char)0x64,  /* [749] */
    (xdc_Char)0x20,  /* [750] */
    (xdc_Char)0x63,  /* [751] */
    (xdc_Char)0x61,  /* [752] */
    (xdc_Char)0x6c,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x69,  /* [755] */
    (xdc_Char)0x6e,  /* [756] */
    (xdc_Char)0x67,  /* [757] */
    (xdc_Char)0x20,  /* [758] */
    (xdc_Char)0x63,  /* [759] */
    (xdc_Char)0x6f,  /* [760] */
    (xdc_Char)0x6e,  /* [761] */
    (xdc_Char)0x74,  /* [762] */
    (xdc_Char)0x65,  /* [763] */
    (xdc_Char)0x78,  /* [764] */
    (xdc_Char)0x74,  /* [765] */
    (xdc_Char)0x2e,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x4d,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x73,  /* [770] */
    (xdc_Char)0x74,  /* [771] */
    (xdc_Char)0x20,  /* [772] */
    (xdc_Char)0x62,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x20,  /* [775] */
    (xdc_Char)0x63,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x6c,  /* [778] */
    (xdc_Char)0x6c,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x64,  /* [781] */
    (xdc_Char)0x20,  /* [782] */
    (xdc_Char)0x66,  /* [783] */
    (xdc_Char)0x72,  /* [784] */
    (xdc_Char)0x6f,  /* [785] */
    (xdc_Char)0x6d,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x61,  /* [788] */
    (xdc_Char)0x20,  /* [789] */
    (xdc_Char)0x54,  /* [790] */
    (xdc_Char)0x61,  /* [791] */
    (xdc_Char)0x73,  /* [792] */
    (xdc_Char)0x6b,  /* [793] */
    (xdc_Char)0x2e,  /* [794] */
    (xdc_Char)0x0,  /* [795] */
    (xdc_Char)0x41,  /* [796] */
    (xdc_Char)0x5f,  /* [797] */
    (xdc_Char)0x70,  /* [798] */
    (xdc_Char)0x65,  /* [799] */
    (xdc_Char)0x6e,  /* [800] */
    (xdc_Char)0x64,  /* [801] */
    (xdc_Char)0x54,  /* [802] */
    (xdc_Char)0x61,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x6b,  /* [805] */
    (xdc_Char)0x44,  /* [806] */
    (xdc_Char)0x69,  /* [807] */
    (xdc_Char)0x73,  /* [808] */
    (xdc_Char)0x61,  /* [809] */
    (xdc_Char)0x62,  /* [810] */
    (xdc_Char)0x6c,  /* [811] */
    (xdc_Char)0x65,  /* [812] */
    (xdc_Char)0x64,  /* [813] */
    (xdc_Char)0x3a,  /* [814] */
    (xdc_Char)0x20,  /* [815] */
    (xdc_Char)0x43,  /* [816] */
    (xdc_Char)0x61,  /* [817] */
    (xdc_Char)0x6e,  /* [818] */
    (xdc_Char)0x6e,  /* [819] */
    (xdc_Char)0x6f,  /* [820] */
    (xdc_Char)0x74,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x63,  /* [823] */
    (xdc_Char)0x61,  /* [824] */
    (xdc_Char)0x6c,  /* [825] */
    (xdc_Char)0x6c,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x45,  /* [828] */
    (xdc_Char)0x76,  /* [829] */
    (xdc_Char)0x65,  /* [830] */
    (xdc_Char)0x6e,  /* [831] */
    (xdc_Char)0x74,  /* [832] */
    (xdc_Char)0x5f,  /* [833] */
    (xdc_Char)0x70,  /* [834] */
    (xdc_Char)0x65,  /* [835] */
    (xdc_Char)0x6e,  /* [836] */
    (xdc_Char)0x64,  /* [837] */
    (xdc_Char)0x28,  /* [838] */
    (xdc_Char)0x29,  /* [839] */
    (xdc_Char)0x20,  /* [840] */
    (xdc_Char)0x77,  /* [841] */
    (xdc_Char)0x68,  /* [842] */
    (xdc_Char)0x69,  /* [843] */
    (xdc_Char)0x6c,  /* [844] */
    (xdc_Char)0x65,  /* [845] */
    (xdc_Char)0x20,  /* [846] */
    (xdc_Char)0x74,  /* [847] */
    (xdc_Char)0x68,  /* [848] */
    (xdc_Char)0x65,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x54,  /* [851] */
    (xdc_Char)0x61,  /* [852] */
    (xdc_Char)0x73,  /* [853] */
    (xdc_Char)0x6b,  /* [854] */
    (xdc_Char)0x20,  /* [855] */
    (xdc_Char)0x6f,  /* [856] */
    (xdc_Char)0x72,  /* [857] */
    (xdc_Char)0x20,  /* [858] */
    (xdc_Char)0x53,  /* [859] */
    (xdc_Char)0x77,  /* [860] */
    (xdc_Char)0x69,  /* [861] */
    (xdc_Char)0x20,  /* [862] */
    (xdc_Char)0x73,  /* [863] */
    (xdc_Char)0x63,  /* [864] */
    (xdc_Char)0x68,  /* [865] */
    (xdc_Char)0x65,  /* [866] */
    (xdc_Char)0x64,  /* [867] */
    (xdc_Char)0x75,  /* [868] */
    (xdc_Char)0x6c,  /* [869] */
    (xdc_Char)0x65,  /* [870] */
    (xdc_Char)0x72,  /* [871] */
    (xdc_Char)0x20,  /* [872] */
    (xdc_Char)0x69,  /* [873] */
    (xdc_Char)0x73,  /* [874] */
    (xdc_Char)0x20,  /* [875] */
    (xdc_Char)0x64,  /* [876] */
    (xdc_Char)0x69,  /* [877] */
    (xdc_Char)0x73,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x62,  /* [880] */
    (xdc_Char)0x6c,  /* [881] */
    (xdc_Char)0x65,  /* [882] */
    (xdc_Char)0x64,  /* [883] */
    (xdc_Char)0x2e,  /* [884] */
    (xdc_Char)0x0,  /* [885] */
    (xdc_Char)0x4d,  /* [886] */
    (xdc_Char)0x61,  /* [887] */
    (xdc_Char)0x69,  /* [888] */
    (xdc_Char)0x6c,  /* [889] */
    (xdc_Char)0x62,  /* [890] */
    (xdc_Char)0x6f,  /* [891] */
    (xdc_Char)0x78,  /* [892] */
    (xdc_Char)0x5f,  /* [893] */
    (xdc_Char)0x63,  /* [894] */
    (xdc_Char)0x72,  /* [895] */
    (xdc_Char)0x65,  /* [896] */
    (xdc_Char)0x61,  /* [897] */
    (xdc_Char)0x74,  /* [898] */
    (xdc_Char)0x65,  /* [899] */
    (xdc_Char)0x27,  /* [900] */
    (xdc_Char)0x73,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x62,  /* [903] */
    (xdc_Char)0x75,  /* [904] */
    (xdc_Char)0x66,  /* [905] */
    (xdc_Char)0x53,  /* [906] */
    (xdc_Char)0x69,  /* [907] */
    (xdc_Char)0x7a,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x20,  /* [910] */
    (xdc_Char)0x70,  /* [911] */
    (xdc_Char)0x61,  /* [912] */
    (xdc_Char)0x72,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x6d,  /* [915] */
    (xdc_Char)0x65,  /* [916] */
    (xdc_Char)0x74,  /* [917] */
    (xdc_Char)0x65,  /* [918] */
    (xdc_Char)0x72,  /* [919] */
    (xdc_Char)0x20,  /* [920] */
    (xdc_Char)0x69,  /* [921] */
    (xdc_Char)0x73,  /* [922] */
    (xdc_Char)0x20,  /* [923] */
    (xdc_Char)0x69,  /* [924] */
    (xdc_Char)0x6e,  /* [925] */
    (xdc_Char)0x76,  /* [926] */
    (xdc_Char)0x61,  /* [927] */
    (xdc_Char)0x6c,  /* [928] */
    (xdc_Char)0x69,  /* [929] */
    (xdc_Char)0x64,  /* [930] */
    (xdc_Char)0x20,  /* [931] */
    (xdc_Char)0x28,  /* [932] */
    (xdc_Char)0x74,  /* [933] */
    (xdc_Char)0x6f,  /* [934] */
    (xdc_Char)0x6f,  /* [935] */
    (xdc_Char)0x20,  /* [936] */
    (xdc_Char)0x73,  /* [937] */
    (xdc_Char)0x6d,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x6c,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x29,  /* [942] */
    (xdc_Char)0x0,  /* [943] */
    (xdc_Char)0x41,  /* [944] */
    (xdc_Char)0x5f,  /* [945] */
    (xdc_Char)0x6e,  /* [946] */
    (xdc_Char)0x6f,  /* [947] */
    (xdc_Char)0x45,  /* [948] */
    (xdc_Char)0x76,  /* [949] */
    (xdc_Char)0x65,  /* [950] */
    (xdc_Char)0x6e,  /* [951] */
    (xdc_Char)0x74,  /* [952] */
    (xdc_Char)0x73,  /* [953] */
    (xdc_Char)0x3a,  /* [954] */
    (xdc_Char)0x20,  /* [955] */
    (xdc_Char)0x54,  /* [956] */
    (xdc_Char)0x68,  /* [957] */
    (xdc_Char)0x65,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x45,  /* [960] */
    (xdc_Char)0x76,  /* [961] */
    (xdc_Char)0x65,  /* [962] */
    (xdc_Char)0x6e,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x2e,  /* [965] */
    (xdc_Char)0x73,  /* [966] */
    (xdc_Char)0x75,  /* [967] */
    (xdc_Char)0x70,  /* [968] */
    (xdc_Char)0x70,  /* [969] */
    (xdc_Char)0x6f,  /* [970] */
    (xdc_Char)0x72,  /* [971] */
    (xdc_Char)0x74,  /* [972] */
    (xdc_Char)0x73,  /* [973] */
    (xdc_Char)0x45,  /* [974] */
    (xdc_Char)0x76,  /* [975] */
    (xdc_Char)0x65,  /* [976] */
    (xdc_Char)0x6e,  /* [977] */
    (xdc_Char)0x74,  /* [978] */
    (xdc_Char)0x73,  /* [979] */
    (xdc_Char)0x20,  /* [980] */
    (xdc_Char)0x66,  /* [981] */
    (xdc_Char)0x6c,  /* [982] */
    (xdc_Char)0x61,  /* [983] */
    (xdc_Char)0x67,  /* [984] */
    (xdc_Char)0x20,  /* [985] */
    (xdc_Char)0x69,  /* [986] */
    (xdc_Char)0x73,  /* [987] */
    (xdc_Char)0x20,  /* [988] */
    (xdc_Char)0x64,  /* [989] */
    (xdc_Char)0x69,  /* [990] */
    (xdc_Char)0x73,  /* [991] */
    (xdc_Char)0x61,  /* [992] */
    (xdc_Char)0x62,  /* [993] */
    (xdc_Char)0x6c,  /* [994] */
    (xdc_Char)0x65,  /* [995] */
    (xdc_Char)0x64,  /* [996] */
    (xdc_Char)0x2e,  /* [997] */
    (xdc_Char)0x0,  /* [998] */
    (xdc_Char)0x41,  /* [999] */
    (xdc_Char)0x5f,  /* [1000] */
    (xdc_Char)0x69,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x76,  /* [1003] */
    (xdc_Char)0x54,  /* [1004] */
    (xdc_Char)0x69,  /* [1005] */
    (xdc_Char)0x6d,  /* [1006] */
    (xdc_Char)0x65,  /* [1007] */
    (xdc_Char)0x6f,  /* [1008] */
    (xdc_Char)0x75,  /* [1009] */
    (xdc_Char)0x74,  /* [1010] */
    (xdc_Char)0x3a,  /* [1011] */
    (xdc_Char)0x20,  /* [1012] */
    (xdc_Char)0x43,  /* [1013] */
    (xdc_Char)0x61,  /* [1014] */
    (xdc_Char)0x6e,  /* [1015] */
    (xdc_Char)0x27,  /* [1016] */
    (xdc_Char)0x74,  /* [1017] */
    (xdc_Char)0x20,  /* [1018] */
    (xdc_Char)0x75,  /* [1019] */
    (xdc_Char)0x73,  /* [1020] */
    (xdc_Char)0x65,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x42,  /* [1023] */
    (xdc_Char)0x49,  /* [1024] */
    (xdc_Char)0x4f,  /* [1025] */
    (xdc_Char)0x53,  /* [1026] */
    (xdc_Char)0x5f,  /* [1027] */
    (xdc_Char)0x45,  /* [1028] */
    (xdc_Char)0x56,  /* [1029] */
    (xdc_Char)0x45,  /* [1030] */
    (xdc_Char)0x4e,  /* [1031] */
    (xdc_Char)0x54,  /* [1032] */
    (xdc_Char)0x5f,  /* [1033] */
    (xdc_Char)0x41,  /* [1034] */
    (xdc_Char)0x43,  /* [1035] */
    (xdc_Char)0x51,  /* [1036] */
    (xdc_Char)0x55,  /* [1037] */
    (xdc_Char)0x49,  /* [1038] */
    (xdc_Char)0x52,  /* [1039] */
    (xdc_Char)0x45,  /* [1040] */
    (xdc_Char)0x44,  /* [1041] */
    (xdc_Char)0x20,  /* [1042] */
    (xdc_Char)0x77,  /* [1043] */
    (xdc_Char)0x69,  /* [1044] */
    (xdc_Char)0x74,  /* [1045] */
    (xdc_Char)0x68,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x74,  /* [1048] */
    (xdc_Char)0x68,  /* [1049] */
    (xdc_Char)0x69,  /* [1050] */
    (xdc_Char)0x73,  /* [1051] */
    (xdc_Char)0x20,  /* [1052] */
    (xdc_Char)0x53,  /* [1053] */
    (xdc_Char)0x65,  /* [1054] */
    (xdc_Char)0x6d,  /* [1055] */
    (xdc_Char)0x61,  /* [1056] */
    (xdc_Char)0x70,  /* [1057] */
    (xdc_Char)0x68,  /* [1058] */
    (xdc_Char)0x6f,  /* [1059] */
    (xdc_Char)0x72,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x2e,  /* [1062] */
    (xdc_Char)0x0,  /* [1063] */
    (xdc_Char)0x41,  /* [1064] */
    (xdc_Char)0x5f,  /* [1065] */
    (xdc_Char)0x6f,  /* [1066] */
    (xdc_Char)0x76,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x72,  /* [1069] */
    (xdc_Char)0x66,  /* [1070] */
    (xdc_Char)0x6c,  /* [1071] */
    (xdc_Char)0x6f,  /* [1072] */
    (xdc_Char)0x77,  /* [1073] */
    (xdc_Char)0x3a,  /* [1074] */
    (xdc_Char)0x20,  /* [1075] */
    (xdc_Char)0x43,  /* [1076] */
    (xdc_Char)0x6f,  /* [1077] */
    (xdc_Char)0x75,  /* [1078] */
    (xdc_Char)0x6e,  /* [1079] */
    (xdc_Char)0x74,  /* [1080] */
    (xdc_Char)0x20,  /* [1081] */
    (xdc_Char)0x68,  /* [1082] */
    (xdc_Char)0x61,  /* [1083] */
    (xdc_Char)0x73,  /* [1084] */
    (xdc_Char)0x20,  /* [1085] */
    (xdc_Char)0x65,  /* [1086] */
    (xdc_Char)0x78,  /* [1087] */
    (xdc_Char)0x63,  /* [1088] */
    (xdc_Char)0x65,  /* [1089] */
    (xdc_Char)0x65,  /* [1090] */
    (xdc_Char)0x64,  /* [1091] */
    (xdc_Char)0x65,  /* [1092] */
    (xdc_Char)0x64,  /* [1093] */
    (xdc_Char)0x20,  /* [1094] */
    (xdc_Char)0x36,  /* [1095] */
    (xdc_Char)0x35,  /* [1096] */
    (xdc_Char)0x35,  /* [1097] */
    (xdc_Char)0x33,  /* [1098] */
    (xdc_Char)0x35,  /* [1099] */
    (xdc_Char)0x20,  /* [1100] */
    (xdc_Char)0x61,  /* [1101] */
    (xdc_Char)0x6e,  /* [1102] */
    (xdc_Char)0x64,  /* [1103] */
    (xdc_Char)0x20,  /* [1104] */
    (xdc_Char)0x72,  /* [1105] */
    (xdc_Char)0x6f,  /* [1106] */
    (xdc_Char)0x6c,  /* [1107] */
    (xdc_Char)0x6c,  /* [1108] */
    (xdc_Char)0x65,  /* [1109] */
    (xdc_Char)0x64,  /* [1110] */
    (xdc_Char)0x20,  /* [1111] */
    (xdc_Char)0x6f,  /* [1112] */
    (xdc_Char)0x76,  /* [1113] */
    (xdc_Char)0x65,  /* [1114] */
    (xdc_Char)0x72,  /* [1115] */
    (xdc_Char)0x2e,  /* [1116] */
    (xdc_Char)0x0,  /* [1117] */
    (xdc_Char)0x41,  /* [1118] */
    (xdc_Char)0x5f,  /* [1119] */
    (xdc_Char)0x70,  /* [1120] */
    (xdc_Char)0x65,  /* [1121] */
    (xdc_Char)0x6e,  /* [1122] */
    (xdc_Char)0x64,  /* [1123] */
    (xdc_Char)0x54,  /* [1124] */
    (xdc_Char)0x61,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x6b,  /* [1127] */
    (xdc_Char)0x44,  /* [1128] */
    (xdc_Char)0x69,  /* [1129] */
    (xdc_Char)0x73,  /* [1130] */
    (xdc_Char)0x61,  /* [1131] */
    (xdc_Char)0x62,  /* [1132] */
    (xdc_Char)0x6c,  /* [1133] */
    (xdc_Char)0x65,  /* [1134] */
    (xdc_Char)0x64,  /* [1135] */
    (xdc_Char)0x3a,  /* [1136] */
    (xdc_Char)0x20,  /* [1137] */
    (xdc_Char)0x43,  /* [1138] */
    (xdc_Char)0x61,  /* [1139] */
    (xdc_Char)0x6e,  /* [1140] */
    (xdc_Char)0x6e,  /* [1141] */
    (xdc_Char)0x6f,  /* [1142] */
    (xdc_Char)0x74,  /* [1143] */
    (xdc_Char)0x20,  /* [1144] */
    (xdc_Char)0x63,  /* [1145] */
    (xdc_Char)0x61,  /* [1146] */
    (xdc_Char)0x6c,  /* [1147] */
    (xdc_Char)0x6c,  /* [1148] */
    (xdc_Char)0x20,  /* [1149] */
    (xdc_Char)0x53,  /* [1150] */
    (xdc_Char)0x65,  /* [1151] */
    (xdc_Char)0x6d,  /* [1152] */
    (xdc_Char)0x61,  /* [1153] */
    (xdc_Char)0x70,  /* [1154] */
    (xdc_Char)0x68,  /* [1155] */
    (xdc_Char)0x6f,  /* [1156] */
    (xdc_Char)0x72,  /* [1157] */
    (xdc_Char)0x65,  /* [1158] */
    (xdc_Char)0x5f,  /* [1159] */
    (xdc_Char)0x70,  /* [1160] */
    (xdc_Char)0x65,  /* [1161] */
    (xdc_Char)0x6e,  /* [1162] */
    (xdc_Char)0x64,  /* [1163] */
    (xdc_Char)0x28,  /* [1164] */
    (xdc_Char)0x29,  /* [1165] */
    (xdc_Char)0x20,  /* [1166] */
    (xdc_Char)0x77,  /* [1167] */
    (xdc_Char)0x68,  /* [1168] */
    (xdc_Char)0x69,  /* [1169] */
    (xdc_Char)0x6c,  /* [1170] */
    (xdc_Char)0x65,  /* [1171] */
    (xdc_Char)0x20,  /* [1172] */
    (xdc_Char)0x74,  /* [1173] */
    (xdc_Char)0x68,  /* [1174] */
    (xdc_Char)0x65,  /* [1175] */
    (xdc_Char)0x20,  /* [1176] */
    (xdc_Char)0x54,  /* [1177] */
    (xdc_Char)0x61,  /* [1178] */
    (xdc_Char)0x73,  /* [1179] */
    (xdc_Char)0x6b,  /* [1180] */
    (xdc_Char)0x20,  /* [1181] */
    (xdc_Char)0x6f,  /* [1182] */
    (xdc_Char)0x72,  /* [1183] */
    (xdc_Char)0x20,  /* [1184] */
    (xdc_Char)0x53,  /* [1185] */
    (xdc_Char)0x77,  /* [1186] */
    (xdc_Char)0x69,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x73,  /* [1189] */
    (xdc_Char)0x63,  /* [1190] */
    (xdc_Char)0x68,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x64,  /* [1193] */
    (xdc_Char)0x75,  /* [1194] */
    (xdc_Char)0x6c,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x72,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x69,  /* [1199] */
    (xdc_Char)0x73,  /* [1200] */
    (xdc_Char)0x20,  /* [1201] */
    (xdc_Char)0x64,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x73,  /* [1204] */
    (xdc_Char)0x61,  /* [1205] */
    (xdc_Char)0x62,  /* [1206] */
    (xdc_Char)0x6c,  /* [1207] */
    (xdc_Char)0x65,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x2e,  /* [1210] */
    (xdc_Char)0x0,  /* [1211] */
    (xdc_Char)0x41,  /* [1212] */
    (xdc_Char)0x5f,  /* [1213] */
    (xdc_Char)0x73,  /* [1214] */
    (xdc_Char)0x77,  /* [1215] */
    (xdc_Char)0x69,  /* [1216] */
    (xdc_Char)0x44,  /* [1217] */
    (xdc_Char)0x69,  /* [1218] */
    (xdc_Char)0x73,  /* [1219] */
    (xdc_Char)0x61,  /* [1220] */
    (xdc_Char)0x62,  /* [1221] */
    (xdc_Char)0x6c,  /* [1222] */
    (xdc_Char)0x65,  /* [1223] */
    (xdc_Char)0x64,  /* [1224] */
    (xdc_Char)0x3a,  /* [1225] */
    (xdc_Char)0x20,  /* [1226] */
    (xdc_Char)0x43,  /* [1227] */
    (xdc_Char)0x61,  /* [1228] */
    (xdc_Char)0x6e,  /* [1229] */
    (xdc_Char)0x6e,  /* [1230] */
    (xdc_Char)0x6f,  /* [1231] */
    (xdc_Char)0x74,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x63,  /* [1234] */
    (xdc_Char)0x72,  /* [1235] */
    (xdc_Char)0x65,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x74,  /* [1238] */
    (xdc_Char)0x65,  /* [1239] */
    (xdc_Char)0x20,  /* [1240] */
    (xdc_Char)0x61,  /* [1241] */
    (xdc_Char)0x20,  /* [1242] */
    (xdc_Char)0x53,  /* [1243] */
    (xdc_Char)0x77,  /* [1244] */
    (xdc_Char)0x69,  /* [1245] */
    (xdc_Char)0x20,  /* [1246] */
    (xdc_Char)0x77,  /* [1247] */
    (xdc_Char)0x68,  /* [1248] */
    (xdc_Char)0x65,  /* [1249] */
    (xdc_Char)0x6e,  /* [1250] */
    (xdc_Char)0x20,  /* [1251] */
    (xdc_Char)0x53,  /* [1252] */
    (xdc_Char)0x77,  /* [1253] */
    (xdc_Char)0x69,  /* [1254] */
    (xdc_Char)0x20,  /* [1255] */
    (xdc_Char)0x69,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x20,  /* [1258] */
    (xdc_Char)0x64,  /* [1259] */
    (xdc_Char)0x69,  /* [1260] */
    (xdc_Char)0x73,  /* [1261] */
    (xdc_Char)0x61,  /* [1262] */
    (xdc_Char)0x62,  /* [1263] */
    (xdc_Char)0x6c,  /* [1264] */
    (xdc_Char)0x65,  /* [1265] */
    (xdc_Char)0x64,  /* [1266] */
    (xdc_Char)0x2e,  /* [1267] */
    (xdc_Char)0x0,  /* [1268] */
    (xdc_Char)0x41,  /* [1269] */
    (xdc_Char)0x5f,  /* [1270] */
    (xdc_Char)0x62,  /* [1271] */
    (xdc_Char)0x61,  /* [1272] */
    (xdc_Char)0x64,  /* [1273] */
    (xdc_Char)0x50,  /* [1274] */
    (xdc_Char)0x72,  /* [1275] */
    (xdc_Char)0x69,  /* [1276] */
    (xdc_Char)0x6f,  /* [1277] */
    (xdc_Char)0x72,  /* [1278] */
    (xdc_Char)0x69,  /* [1279] */
    (xdc_Char)0x74,  /* [1280] */
    (xdc_Char)0x79,  /* [1281] */
    (xdc_Char)0x3a,  /* [1282] */
    (xdc_Char)0x20,  /* [1283] */
    (xdc_Char)0x41,  /* [1284] */
    (xdc_Char)0x6e,  /* [1285] */
    (xdc_Char)0x20,  /* [1286] */
    (xdc_Char)0x69,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x76,  /* [1289] */
    (xdc_Char)0x61,  /* [1290] */
    (xdc_Char)0x6c,  /* [1291] */
    (xdc_Char)0x69,  /* [1292] */
    (xdc_Char)0x64,  /* [1293] */
    (xdc_Char)0x20,  /* [1294] */
    (xdc_Char)0x53,  /* [1295] */
    (xdc_Char)0x77,  /* [1296] */
    (xdc_Char)0x69,  /* [1297] */
    (xdc_Char)0x20,  /* [1298] */
    (xdc_Char)0x70,  /* [1299] */
    (xdc_Char)0x72,  /* [1300] */
    (xdc_Char)0x69,  /* [1301] */
    (xdc_Char)0x6f,  /* [1302] */
    (xdc_Char)0x72,  /* [1303] */
    (xdc_Char)0x69,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x79,  /* [1306] */
    (xdc_Char)0x20,  /* [1307] */
    (xdc_Char)0x77,  /* [1308] */
    (xdc_Char)0x61,  /* [1309] */
    (xdc_Char)0x73,  /* [1310] */
    (xdc_Char)0x20,  /* [1311] */
    (xdc_Char)0x75,  /* [1312] */
    (xdc_Char)0x73,  /* [1313] */
    (xdc_Char)0x65,  /* [1314] */
    (xdc_Char)0x64,  /* [1315] */
    (xdc_Char)0x2e,  /* [1316] */
    (xdc_Char)0x0,  /* [1317] */
    (xdc_Char)0x41,  /* [1318] */
    (xdc_Char)0x5f,  /* [1319] */
    (xdc_Char)0x62,  /* [1320] */
    (xdc_Char)0x61,  /* [1321] */
    (xdc_Char)0x64,  /* [1322] */
    (xdc_Char)0x54,  /* [1323] */
    (xdc_Char)0x68,  /* [1324] */
    (xdc_Char)0x72,  /* [1325] */
    (xdc_Char)0x65,  /* [1326] */
    (xdc_Char)0x61,  /* [1327] */
    (xdc_Char)0x64,  /* [1328] */
    (xdc_Char)0x54,  /* [1329] */
    (xdc_Char)0x79,  /* [1330] */
    (xdc_Char)0x70,  /* [1331] */
    (xdc_Char)0x65,  /* [1332] */
    (xdc_Char)0x3a,  /* [1333] */
    (xdc_Char)0x20,  /* [1334] */
    (xdc_Char)0x43,  /* [1335] */
    (xdc_Char)0x61,  /* [1336] */
    (xdc_Char)0x6e,  /* [1337] */
    (xdc_Char)0x6e,  /* [1338] */
    (xdc_Char)0x6f,  /* [1339] */
    (xdc_Char)0x74,  /* [1340] */
    (xdc_Char)0x20,  /* [1341] */
    (xdc_Char)0x63,  /* [1342] */
    (xdc_Char)0x72,  /* [1343] */
    (xdc_Char)0x65,  /* [1344] */
    (xdc_Char)0x61,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x2f,  /* [1348] */
    (xdc_Char)0x64,  /* [1349] */
    (xdc_Char)0x65,  /* [1350] */
    (xdc_Char)0x6c,  /* [1351] */
    (xdc_Char)0x65,  /* [1352] */
    (xdc_Char)0x74,  /* [1353] */
    (xdc_Char)0x65,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x61,  /* [1356] */
    (xdc_Char)0x20,  /* [1357] */
    (xdc_Char)0x74,  /* [1358] */
    (xdc_Char)0x61,  /* [1359] */
    (xdc_Char)0x73,  /* [1360] */
    (xdc_Char)0x6b,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x66,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x6d,  /* [1366] */
    (xdc_Char)0x20,  /* [1367] */
    (xdc_Char)0x48,  /* [1368] */
    (xdc_Char)0x77,  /* [1369] */
    (xdc_Char)0x69,  /* [1370] */
    (xdc_Char)0x20,  /* [1371] */
    (xdc_Char)0x6f,  /* [1372] */
    (xdc_Char)0x72,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x53,  /* [1375] */
    (xdc_Char)0x77,  /* [1376] */
    (xdc_Char)0x69,  /* [1377] */
    (xdc_Char)0x20,  /* [1378] */
    (xdc_Char)0x74,  /* [1379] */
    (xdc_Char)0x68,  /* [1380] */
    (xdc_Char)0x72,  /* [1381] */
    (xdc_Char)0x65,  /* [1382] */
    (xdc_Char)0x61,  /* [1383] */
    (xdc_Char)0x64,  /* [1384] */
    (xdc_Char)0x2e,  /* [1385] */
    (xdc_Char)0x0,  /* [1386] */
    (xdc_Char)0x41,  /* [1387] */
    (xdc_Char)0x5f,  /* [1388] */
    (xdc_Char)0x62,  /* [1389] */
    (xdc_Char)0x61,  /* [1390] */
    (xdc_Char)0x64,  /* [1391] */
    (xdc_Char)0x54,  /* [1392] */
    (xdc_Char)0x61,  /* [1393] */
    (xdc_Char)0x73,  /* [1394] */
    (xdc_Char)0x6b,  /* [1395] */
    (xdc_Char)0x53,  /* [1396] */
    (xdc_Char)0x74,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x74,  /* [1399] */
    (xdc_Char)0x65,  /* [1400] */
    (xdc_Char)0x3a,  /* [1401] */
    (xdc_Char)0x20,  /* [1402] */
    (xdc_Char)0x43,  /* [1403] */
    (xdc_Char)0x61,  /* [1404] */
    (xdc_Char)0x6e,  /* [1405] */
    (xdc_Char)0x27,  /* [1406] */
    (xdc_Char)0x74,  /* [1407] */
    (xdc_Char)0x20,  /* [1408] */
    (xdc_Char)0x64,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x6c,  /* [1411] */
    (xdc_Char)0x65,  /* [1412] */
    (xdc_Char)0x74,  /* [1413] */
    (xdc_Char)0x65,  /* [1414] */
    (xdc_Char)0x20,  /* [1415] */
    (xdc_Char)0x61,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x61,  /* [1419] */
    (xdc_Char)0x73,  /* [1420] */
    (xdc_Char)0x6b,  /* [1421] */
    (xdc_Char)0x20,  /* [1422] */
    (xdc_Char)0x69,  /* [1423] */
    (xdc_Char)0x6e,  /* [1424] */
    (xdc_Char)0x20,  /* [1425] */
    (xdc_Char)0x52,  /* [1426] */
    (xdc_Char)0x55,  /* [1427] */
    (xdc_Char)0x4e,  /* [1428] */
    (xdc_Char)0x4e,  /* [1429] */
    (xdc_Char)0x49,  /* [1430] */
    (xdc_Char)0x4e,  /* [1431] */
    (xdc_Char)0x47,  /* [1432] */
    (xdc_Char)0x20,  /* [1433] */
    (xdc_Char)0x73,  /* [1434] */
    (xdc_Char)0x74,  /* [1435] */
    (xdc_Char)0x61,  /* [1436] */
    (xdc_Char)0x74,  /* [1437] */
    (xdc_Char)0x65,  /* [1438] */
    (xdc_Char)0x2e,  /* [1439] */
    (xdc_Char)0x0,  /* [1440] */
    (xdc_Char)0x41,  /* [1441] */
    (xdc_Char)0x5f,  /* [1442] */
    (xdc_Char)0x6e,  /* [1443] */
    (xdc_Char)0x6f,  /* [1444] */
    (xdc_Char)0x50,  /* [1445] */
    (xdc_Char)0x65,  /* [1446] */
    (xdc_Char)0x6e,  /* [1447] */
    (xdc_Char)0x64,  /* [1448] */
    (xdc_Char)0x45,  /* [1449] */
    (xdc_Char)0x6c,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x6d,  /* [1452] */
    (xdc_Char)0x3a,  /* [1453] */
    (xdc_Char)0x20,  /* [1454] */
    (xdc_Char)0x4e,  /* [1455] */
    (xdc_Char)0x6f,  /* [1456] */
    (xdc_Char)0x74,  /* [1457] */
    (xdc_Char)0x20,  /* [1458] */
    (xdc_Char)0x65,  /* [1459] */
    (xdc_Char)0x6e,  /* [1460] */
    (xdc_Char)0x6f,  /* [1461] */
    (xdc_Char)0x75,  /* [1462] */
    (xdc_Char)0x67,  /* [1463] */
    (xdc_Char)0x68,  /* [1464] */
    (xdc_Char)0x20,  /* [1465] */
    (xdc_Char)0x69,  /* [1466] */
    (xdc_Char)0x6e,  /* [1467] */
    (xdc_Char)0x66,  /* [1468] */
    (xdc_Char)0x6f,  /* [1469] */
    (xdc_Char)0x20,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x6f,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x64,  /* [1474] */
    (xdc_Char)0x65,  /* [1475] */
    (xdc_Char)0x6c,  /* [1476] */
    (xdc_Char)0x65,  /* [1477] */
    (xdc_Char)0x74,  /* [1478] */
    (xdc_Char)0x65,  /* [1479] */
    (xdc_Char)0x20,  /* [1480] */
    (xdc_Char)0x42,  /* [1481] */
    (xdc_Char)0x4c,  /* [1482] */
    (xdc_Char)0x4f,  /* [1483] */
    (xdc_Char)0x43,  /* [1484] */
    (xdc_Char)0x4b,  /* [1485] */
    (xdc_Char)0x45,  /* [1486] */
    (xdc_Char)0x44,  /* [1487] */
    (xdc_Char)0x20,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x61,  /* [1490] */
    (xdc_Char)0x73,  /* [1491] */
    (xdc_Char)0x6b,  /* [1492] */
    (xdc_Char)0x2e,  /* [1493] */
    (xdc_Char)0x0,  /* [1494] */
    (xdc_Char)0x41,  /* [1495] */
    (xdc_Char)0x5f,  /* [1496] */
    (xdc_Char)0x74,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x73,  /* [1499] */
    (xdc_Char)0x6b,  /* [1500] */
    (xdc_Char)0x44,  /* [1501] */
    (xdc_Char)0x69,  /* [1502] */
    (xdc_Char)0x73,  /* [1503] */
    (xdc_Char)0x61,  /* [1504] */
    (xdc_Char)0x62,  /* [1505] */
    (xdc_Char)0x6c,  /* [1506] */
    (xdc_Char)0x65,  /* [1507] */
    (xdc_Char)0x64,  /* [1508] */
    (xdc_Char)0x3a,  /* [1509] */
    (xdc_Char)0x20,  /* [1510] */
    (xdc_Char)0x43,  /* [1511] */
    (xdc_Char)0x61,  /* [1512] */
    (xdc_Char)0x6e,  /* [1513] */
    (xdc_Char)0x6e,  /* [1514] */
    (xdc_Char)0x6f,  /* [1515] */
    (xdc_Char)0x74,  /* [1516] */
    (xdc_Char)0x20,  /* [1517] */
    (xdc_Char)0x63,  /* [1518] */
    (xdc_Char)0x72,  /* [1519] */
    (xdc_Char)0x65,  /* [1520] */
    (xdc_Char)0x61,  /* [1521] */
    (xdc_Char)0x74,  /* [1522] */
    (xdc_Char)0x65,  /* [1523] */
    (xdc_Char)0x20,  /* [1524] */
    (xdc_Char)0x61,  /* [1525] */
    (xdc_Char)0x20,  /* [1526] */
    (xdc_Char)0x74,  /* [1527] */
    (xdc_Char)0x61,  /* [1528] */
    (xdc_Char)0x73,  /* [1529] */
    (xdc_Char)0x6b,  /* [1530] */
    (xdc_Char)0x20,  /* [1531] */
    (xdc_Char)0x77,  /* [1532] */
    (xdc_Char)0x68,  /* [1533] */
    (xdc_Char)0x65,  /* [1534] */
    (xdc_Char)0x6e,  /* [1535] */
    (xdc_Char)0x20,  /* [1536] */
    (xdc_Char)0x74,  /* [1537] */
    (xdc_Char)0x61,  /* [1538] */
    (xdc_Char)0x73,  /* [1539] */
    (xdc_Char)0x6b,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x6e,  /* [1542] */
    (xdc_Char)0x67,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x69,  /* [1545] */
    (xdc_Char)0x73,  /* [1546] */
    (xdc_Char)0x20,  /* [1547] */
    (xdc_Char)0x64,  /* [1548] */
    (xdc_Char)0x69,  /* [1549] */
    (xdc_Char)0x73,  /* [1550] */
    (xdc_Char)0x61,  /* [1551] */
    (xdc_Char)0x62,  /* [1552] */
    (xdc_Char)0x6c,  /* [1553] */
    (xdc_Char)0x65,  /* [1554] */
    (xdc_Char)0x64,  /* [1555] */
    (xdc_Char)0x2e,  /* [1556] */
    (xdc_Char)0x0,  /* [1557] */
    (xdc_Char)0x41,  /* [1558] */
    (xdc_Char)0x5f,  /* [1559] */
    (xdc_Char)0x62,  /* [1560] */
    (xdc_Char)0x61,  /* [1561] */
    (xdc_Char)0x64,  /* [1562] */
    (xdc_Char)0x50,  /* [1563] */
    (xdc_Char)0x72,  /* [1564] */
    (xdc_Char)0x69,  /* [1565] */
    (xdc_Char)0x6f,  /* [1566] */
    (xdc_Char)0x72,  /* [1567] */
    (xdc_Char)0x69,  /* [1568] */
    (xdc_Char)0x74,  /* [1569] */
    (xdc_Char)0x79,  /* [1570] */
    (xdc_Char)0x3a,  /* [1571] */
    (xdc_Char)0x20,  /* [1572] */
    (xdc_Char)0x41,  /* [1573] */
    (xdc_Char)0x6e,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x69,  /* [1576] */
    (xdc_Char)0x6e,  /* [1577] */
    (xdc_Char)0x76,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x6c,  /* [1580] */
    (xdc_Char)0x69,  /* [1581] */
    (xdc_Char)0x64,  /* [1582] */
    (xdc_Char)0x20,  /* [1583] */
    (xdc_Char)0x74,  /* [1584] */
    (xdc_Char)0x61,  /* [1585] */
    (xdc_Char)0x73,  /* [1586] */
    (xdc_Char)0x6b,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x70,  /* [1589] */
    (xdc_Char)0x72,  /* [1590] */
    (xdc_Char)0x69,  /* [1591] */
    (xdc_Char)0x6f,  /* [1592] */
    (xdc_Char)0x72,  /* [1593] */
    (xdc_Char)0x69,  /* [1594] */
    (xdc_Char)0x74,  /* [1595] */
    (xdc_Char)0x79,  /* [1596] */
    (xdc_Char)0x20,  /* [1597] */
    (xdc_Char)0x77,  /* [1598] */
    (xdc_Char)0x61,  /* [1599] */
    (xdc_Char)0x73,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x75,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x65,  /* [1604] */
    (xdc_Char)0x64,  /* [1605] */
    (xdc_Char)0x2e,  /* [1606] */
    (xdc_Char)0x0,  /* [1607] */
    (xdc_Char)0x41,  /* [1608] */
    (xdc_Char)0x5f,  /* [1609] */
    (xdc_Char)0x62,  /* [1610] */
    (xdc_Char)0x61,  /* [1611] */
    (xdc_Char)0x64,  /* [1612] */
    (xdc_Char)0x54,  /* [1613] */
    (xdc_Char)0x69,  /* [1614] */
    (xdc_Char)0x6d,  /* [1615] */
    (xdc_Char)0x65,  /* [1616] */
    (xdc_Char)0x6f,  /* [1617] */
    (xdc_Char)0x75,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x3a,  /* [1620] */
    (xdc_Char)0x20,  /* [1621] */
    (xdc_Char)0x43,  /* [1622] */
    (xdc_Char)0x61,  /* [1623] */
    (xdc_Char)0x6e,  /* [1624] */
    (xdc_Char)0x27,  /* [1625] */
    (xdc_Char)0x74,  /* [1626] */
    (xdc_Char)0x20,  /* [1627] */
    (xdc_Char)0x73,  /* [1628] */
    (xdc_Char)0x6c,  /* [1629] */
    (xdc_Char)0x65,  /* [1630] */
    (xdc_Char)0x65,  /* [1631] */
    (xdc_Char)0x70,  /* [1632] */
    (xdc_Char)0x20,  /* [1633] */
    (xdc_Char)0x46,  /* [1634] */
    (xdc_Char)0x4f,  /* [1635] */
    (xdc_Char)0x52,  /* [1636] */
    (xdc_Char)0x45,  /* [1637] */
    (xdc_Char)0x56,  /* [1638] */
    (xdc_Char)0x45,  /* [1639] */
    (xdc_Char)0x52,  /* [1640] */
    (xdc_Char)0x2e,  /* [1641] */
    (xdc_Char)0x0,  /* [1642] */
    (xdc_Char)0x41,  /* [1643] */
    (xdc_Char)0x5f,  /* [1644] */
    (xdc_Char)0x62,  /* [1645] */
    (xdc_Char)0x61,  /* [1646] */
    (xdc_Char)0x64,  /* [1647] */
    (xdc_Char)0x41,  /* [1648] */
    (xdc_Char)0x66,  /* [1649] */
    (xdc_Char)0x66,  /* [1650] */
    (xdc_Char)0x69,  /* [1651] */
    (xdc_Char)0x6e,  /* [1652] */
    (xdc_Char)0x69,  /* [1653] */
    (xdc_Char)0x74,  /* [1654] */
    (xdc_Char)0x79,  /* [1655] */
    (xdc_Char)0x3a,  /* [1656] */
    (xdc_Char)0x20,  /* [1657] */
    (xdc_Char)0x49,  /* [1658] */
    (xdc_Char)0x6e,  /* [1659] */
    (xdc_Char)0x76,  /* [1660] */
    (xdc_Char)0x61,  /* [1661] */
    (xdc_Char)0x6c,  /* [1662] */
    (xdc_Char)0x69,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x20,  /* [1665] */
    (xdc_Char)0x61,  /* [1666] */
    (xdc_Char)0x66,  /* [1667] */
    (xdc_Char)0x66,  /* [1668] */
    (xdc_Char)0x69,  /* [1669] */
    (xdc_Char)0x6e,  /* [1670] */
    (xdc_Char)0x69,  /* [1671] */
    (xdc_Char)0x74,  /* [1672] */
    (xdc_Char)0x79,  /* [1673] */
    (xdc_Char)0x2e,  /* [1674] */
    (xdc_Char)0x0,  /* [1675] */
    (xdc_Char)0x41,  /* [1676] */
    (xdc_Char)0x5f,  /* [1677] */
    (xdc_Char)0x73,  /* [1678] */
    (xdc_Char)0x6c,  /* [1679] */
    (xdc_Char)0x65,  /* [1680] */
    (xdc_Char)0x65,  /* [1681] */
    (xdc_Char)0x70,  /* [1682] */
    (xdc_Char)0x54,  /* [1683] */
    (xdc_Char)0x61,  /* [1684] */
    (xdc_Char)0x73,  /* [1685] */
    (xdc_Char)0x6b,  /* [1686] */
    (xdc_Char)0x44,  /* [1687] */
    (xdc_Char)0x69,  /* [1688] */
    (xdc_Char)0x73,  /* [1689] */
    (xdc_Char)0x61,  /* [1690] */
    (xdc_Char)0x62,  /* [1691] */
    (xdc_Char)0x6c,  /* [1692] */
    (xdc_Char)0x65,  /* [1693] */
    (xdc_Char)0x64,  /* [1694] */
    (xdc_Char)0x3a,  /* [1695] */
    (xdc_Char)0x20,  /* [1696] */
    (xdc_Char)0x43,  /* [1697] */
    (xdc_Char)0x61,  /* [1698] */
    (xdc_Char)0x6e,  /* [1699] */
    (xdc_Char)0x6e,  /* [1700] */
    (xdc_Char)0x6f,  /* [1701] */
    (xdc_Char)0x74,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x63,  /* [1704] */
    (xdc_Char)0x61,  /* [1705] */
    (xdc_Char)0x6c,  /* [1706] */
    (xdc_Char)0x6c,  /* [1707] */
    (xdc_Char)0x20,  /* [1708] */
    (xdc_Char)0x54,  /* [1709] */
    (xdc_Char)0x61,  /* [1710] */
    (xdc_Char)0x73,  /* [1711] */
    (xdc_Char)0x6b,  /* [1712] */
    (xdc_Char)0x5f,  /* [1713] */
    (xdc_Char)0x73,  /* [1714] */
    (xdc_Char)0x6c,  /* [1715] */
    (xdc_Char)0x65,  /* [1716] */
    (xdc_Char)0x65,  /* [1717] */
    (xdc_Char)0x70,  /* [1718] */
    (xdc_Char)0x28,  /* [1719] */
    (xdc_Char)0x29,  /* [1720] */
    (xdc_Char)0x20,  /* [1721] */
    (xdc_Char)0x77,  /* [1722] */
    (xdc_Char)0x68,  /* [1723] */
    (xdc_Char)0x69,  /* [1724] */
    (xdc_Char)0x6c,  /* [1725] */
    (xdc_Char)0x65,  /* [1726] */
    (xdc_Char)0x20,  /* [1727] */
    (xdc_Char)0x74,  /* [1728] */
    (xdc_Char)0x68,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x20,  /* [1731] */
    (xdc_Char)0x54,  /* [1732] */
    (xdc_Char)0x61,  /* [1733] */
    (xdc_Char)0x73,  /* [1734] */
    (xdc_Char)0x6b,  /* [1735] */
    (xdc_Char)0x20,  /* [1736] */
    (xdc_Char)0x73,  /* [1737] */
    (xdc_Char)0x63,  /* [1738] */
    (xdc_Char)0x68,  /* [1739] */
    (xdc_Char)0x65,  /* [1740] */
    (xdc_Char)0x64,  /* [1741] */
    (xdc_Char)0x75,  /* [1742] */
    (xdc_Char)0x6c,  /* [1743] */
    (xdc_Char)0x65,  /* [1744] */
    (xdc_Char)0x72,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x69,  /* [1747] */
    (xdc_Char)0x73,  /* [1748] */
    (xdc_Char)0x20,  /* [1749] */
    (xdc_Char)0x64,  /* [1750] */
    (xdc_Char)0x69,  /* [1751] */
    (xdc_Char)0x73,  /* [1752] */
    (xdc_Char)0x61,  /* [1753] */
    (xdc_Char)0x62,  /* [1754] */
    (xdc_Char)0x6c,  /* [1755] */
    (xdc_Char)0x65,  /* [1756] */
    (xdc_Char)0x64,  /* [1757] */
    (xdc_Char)0x2e,  /* [1758] */
    (xdc_Char)0x0,  /* [1759] */
    (xdc_Char)0x41,  /* [1760] */
    (xdc_Char)0x5f,  /* [1761] */
    (xdc_Char)0x69,  /* [1762] */
    (xdc_Char)0x6e,  /* [1763] */
    (xdc_Char)0x76,  /* [1764] */
    (xdc_Char)0x61,  /* [1765] */
    (xdc_Char)0x6c,  /* [1766] */
    (xdc_Char)0x69,  /* [1767] */
    (xdc_Char)0x64,  /* [1768] */
    (xdc_Char)0x43,  /* [1769] */
    (xdc_Char)0x6f,  /* [1770] */
    (xdc_Char)0x72,  /* [1771] */
    (xdc_Char)0x65,  /* [1772] */
    (xdc_Char)0x49,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x3a,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x43,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x6e,  /* [1779] */
    (xdc_Char)0x6e,  /* [1780] */
    (xdc_Char)0x6f,  /* [1781] */
    (xdc_Char)0x74,  /* [1782] */
    (xdc_Char)0x20,  /* [1783] */
    (xdc_Char)0x70,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x73,  /* [1786] */
    (xdc_Char)0x73,  /* [1787] */
    (xdc_Char)0x20,  /* [1788] */
    (xdc_Char)0x61,  /* [1789] */
    (xdc_Char)0x20,  /* [1790] */
    (xdc_Char)0x6e,  /* [1791] */
    (xdc_Char)0x6f,  /* [1792] */
    (xdc_Char)0x6e,  /* [1793] */
    (xdc_Char)0x2d,  /* [1794] */
    (xdc_Char)0x7a,  /* [1795] */
    (xdc_Char)0x65,  /* [1796] */
    (xdc_Char)0x72,  /* [1797] */
    (xdc_Char)0x6f,  /* [1798] */
    (xdc_Char)0x20,  /* [1799] */
    (xdc_Char)0x43,  /* [1800] */
    (xdc_Char)0x6f,  /* [1801] */
    (xdc_Char)0x72,  /* [1802] */
    (xdc_Char)0x65,  /* [1803] */
    (xdc_Char)0x49,  /* [1804] */
    (xdc_Char)0x64,  /* [1805] */
    (xdc_Char)0x20,  /* [1806] */
    (xdc_Char)0x69,  /* [1807] */
    (xdc_Char)0x6e,  /* [1808] */
    (xdc_Char)0x20,  /* [1809] */
    (xdc_Char)0x61,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x6e,  /* [1812] */
    (xdc_Char)0x6f,  /* [1813] */
    (xdc_Char)0x6e,  /* [1814] */
    (xdc_Char)0x2d,  /* [1815] */
    (xdc_Char)0x53,  /* [1816] */
    (xdc_Char)0x4d,  /* [1817] */
    (xdc_Char)0x50,  /* [1818] */
    (xdc_Char)0x20,  /* [1819] */
    (xdc_Char)0x61,  /* [1820] */
    (xdc_Char)0x70,  /* [1821] */
    (xdc_Char)0x70,  /* [1822] */
    (xdc_Char)0x6c,  /* [1823] */
    (xdc_Char)0x69,  /* [1824] */
    (xdc_Char)0x63,  /* [1825] */
    (xdc_Char)0x61,  /* [1826] */
    (xdc_Char)0x74,  /* [1827] */
    (xdc_Char)0x69,  /* [1828] */
    (xdc_Char)0x6f,  /* [1829] */
    (xdc_Char)0x6e,  /* [1830] */
    (xdc_Char)0x2e,  /* [1831] */
    (xdc_Char)0x0,  /* [1832] */
    (xdc_Char)0x62,  /* [1833] */
    (xdc_Char)0x75,  /* [1834] */
    (xdc_Char)0x66,  /* [1835] */
    (xdc_Char)0x20,  /* [1836] */
    (xdc_Char)0x70,  /* [1837] */
    (xdc_Char)0x61,  /* [1838] */
    (xdc_Char)0x72,  /* [1839] */
    (xdc_Char)0x61,  /* [1840] */
    (xdc_Char)0x6d,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x74,  /* [1843] */
    (xdc_Char)0x65,  /* [1844] */
    (xdc_Char)0x72,  /* [1845] */
    (xdc_Char)0x20,  /* [1846] */
    (xdc_Char)0x63,  /* [1847] */
    (xdc_Char)0x61,  /* [1848] */
    (xdc_Char)0x6e,  /* [1849] */
    (xdc_Char)0x6e,  /* [1850] */
    (xdc_Char)0x6f,  /* [1851] */
    (xdc_Char)0x74,  /* [1852] */
    (xdc_Char)0x20,  /* [1853] */
    (xdc_Char)0x62,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x6e,  /* [1857] */
    (xdc_Char)0x75,  /* [1858] */
    (xdc_Char)0x6c,  /* [1859] */
    (xdc_Char)0x6c,  /* [1860] */
    (xdc_Char)0x0,  /* [1861] */
    (xdc_Char)0x62,  /* [1862] */
    (xdc_Char)0x75,  /* [1863] */
    (xdc_Char)0x66,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x6e,  /* [1866] */
    (xdc_Char)0x6f,  /* [1867] */
    (xdc_Char)0x74,  /* [1868] */
    (xdc_Char)0x20,  /* [1869] */
    (xdc_Char)0x70,  /* [1870] */
    (xdc_Char)0x72,  /* [1871] */
    (xdc_Char)0x6f,  /* [1872] */
    (xdc_Char)0x70,  /* [1873] */
    (xdc_Char)0x65,  /* [1874] */
    (xdc_Char)0x72,  /* [1875] */
    (xdc_Char)0x6c,  /* [1876] */
    (xdc_Char)0x79,  /* [1877] */
    (xdc_Char)0x20,  /* [1878] */
    (xdc_Char)0x61,  /* [1879] */
    (xdc_Char)0x6c,  /* [1880] */
    (xdc_Char)0x69,  /* [1881] */
    (xdc_Char)0x67,  /* [1882] */
    (xdc_Char)0x6e,  /* [1883] */
    (xdc_Char)0x65,  /* [1884] */
    (xdc_Char)0x64,  /* [1885] */
    (xdc_Char)0x0,  /* [1886] */
    (xdc_Char)0x61,  /* [1887] */
    (xdc_Char)0x6c,  /* [1888] */
    (xdc_Char)0x69,  /* [1889] */
    (xdc_Char)0x67,  /* [1890] */
    (xdc_Char)0x6e,  /* [1891] */
    (xdc_Char)0x20,  /* [1892] */
    (xdc_Char)0x70,  /* [1893] */
    (xdc_Char)0x61,  /* [1894] */
    (xdc_Char)0x72,  /* [1895] */
    (xdc_Char)0x61,  /* [1896] */
    (xdc_Char)0x6d,  /* [1897] */
    (xdc_Char)0x65,  /* [1898] */
    (xdc_Char)0x74,  /* [1899] */
    (xdc_Char)0x65,  /* [1900] */
    (xdc_Char)0x72,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x6d,  /* [1903] */
    (xdc_Char)0x75,  /* [1904] */
    (xdc_Char)0x73,  /* [1905] */
    (xdc_Char)0x74,  /* [1906] */
    (xdc_Char)0x20,  /* [1907] */
    (xdc_Char)0x62,  /* [1908] */
    (xdc_Char)0x65,  /* [1909] */
    (xdc_Char)0x20,  /* [1910] */
    (xdc_Char)0x30,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x6f,  /* [1913] */
    (xdc_Char)0x72,  /* [1914] */
    (xdc_Char)0x20,  /* [1915] */
    (xdc_Char)0x61,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x70,  /* [1918] */
    (xdc_Char)0x6f,  /* [1919] */
    (xdc_Char)0x77,  /* [1920] */
    (xdc_Char)0x65,  /* [1921] */
    (xdc_Char)0x72,  /* [1922] */
    (xdc_Char)0x20,  /* [1923] */
    (xdc_Char)0x6f,  /* [1924] */
    (xdc_Char)0x66,  /* [1925] */
    (xdc_Char)0x20,  /* [1926] */
    (xdc_Char)0x32,  /* [1927] */
    (xdc_Char)0x20,  /* [1928] */
    (xdc_Char)0x3e,  /* [1929] */
    (xdc_Char)0x3d,  /* [1930] */
    (xdc_Char)0x20,  /* [1931] */
    (xdc_Char)0x74,  /* [1932] */
    (xdc_Char)0x68,  /* [1933] */
    (xdc_Char)0x65,  /* [1934] */
    (xdc_Char)0x20,  /* [1935] */
    (xdc_Char)0x76,  /* [1936] */
    (xdc_Char)0x61,  /* [1937] */
    (xdc_Char)0x6c,  /* [1938] */
    (xdc_Char)0x75,  /* [1939] */
    (xdc_Char)0x65,  /* [1940] */
    (xdc_Char)0x20,  /* [1941] */
    (xdc_Char)0x6f,  /* [1942] */
    (xdc_Char)0x66,  /* [1943] */
    (xdc_Char)0x20,  /* [1944] */
    (xdc_Char)0x4d,  /* [1945] */
    (xdc_Char)0x65,  /* [1946] */
    (xdc_Char)0x6d,  /* [1947] */
    (xdc_Char)0x6f,  /* [1948] */
    (xdc_Char)0x72,  /* [1949] */
    (xdc_Char)0x79,  /* [1950] */
    (xdc_Char)0x5f,  /* [1951] */
    (xdc_Char)0x67,  /* [1952] */
    (xdc_Char)0x65,  /* [1953] */
    (xdc_Char)0x74,  /* [1954] */
    (xdc_Char)0x4d,  /* [1955] */
    (xdc_Char)0x61,  /* [1956] */
    (xdc_Char)0x78,  /* [1957] */
    (xdc_Char)0x44,  /* [1958] */
    (xdc_Char)0x65,  /* [1959] */
    (xdc_Char)0x66,  /* [1960] */
    (xdc_Char)0x61,  /* [1961] */
    (xdc_Char)0x75,  /* [1962] */
    (xdc_Char)0x6c,  /* [1963] */
    (xdc_Char)0x74,  /* [1964] */
    (xdc_Char)0x54,  /* [1965] */
    (xdc_Char)0x79,  /* [1966] */
    (xdc_Char)0x70,  /* [1967] */
    (xdc_Char)0x65,  /* [1968] */
    (xdc_Char)0x41,  /* [1969] */
    (xdc_Char)0x6c,  /* [1970] */
    (xdc_Char)0x69,  /* [1971] */
    (xdc_Char)0x67,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x28,  /* [1974] */
    (xdc_Char)0x29,  /* [1975] */
    (xdc_Char)0x0,  /* [1976] */
    (xdc_Char)0x61,  /* [1977] */
    (xdc_Char)0x6c,  /* [1978] */
    (xdc_Char)0x69,  /* [1979] */
    (xdc_Char)0x67,  /* [1980] */
    (xdc_Char)0x6e,  /* [1981] */
    (xdc_Char)0x20,  /* [1982] */
    (xdc_Char)0x70,  /* [1983] */
    (xdc_Char)0x61,  /* [1984] */
    (xdc_Char)0x72,  /* [1985] */
    (xdc_Char)0x61,  /* [1986] */
    (xdc_Char)0x6d,  /* [1987] */
    (xdc_Char)0x65,  /* [1988] */
    (xdc_Char)0x74,  /* [1989] */
    (xdc_Char)0x65,  /* [1990] */
    (xdc_Char)0x72,  /* [1991] */
    (xdc_Char)0x20,  /* [1992] */
    (xdc_Char)0x31,  /* [1993] */
    (xdc_Char)0x29,  /* [1994] */
    (xdc_Char)0x20,  /* [1995] */
    (xdc_Char)0x6d,  /* [1996] */
    (xdc_Char)0x75,  /* [1997] */
    (xdc_Char)0x73,  /* [1998] */
    (xdc_Char)0x74,  /* [1999] */
    (xdc_Char)0x20,  /* [2000] */
    (xdc_Char)0x62,  /* [2001] */
    (xdc_Char)0x65,  /* [2002] */
    (xdc_Char)0x20,  /* [2003] */
    (xdc_Char)0x30,  /* [2004] */
    (xdc_Char)0x20,  /* [2005] */
    (xdc_Char)0x6f,  /* [2006] */
    (xdc_Char)0x72,  /* [2007] */
    (xdc_Char)0x20,  /* [2008] */
    (xdc_Char)0x61,  /* [2009] */
    (xdc_Char)0x20,  /* [2010] */
    (xdc_Char)0x70,  /* [2011] */
    (xdc_Char)0x6f,  /* [2012] */
    (xdc_Char)0x77,  /* [2013] */
    (xdc_Char)0x65,  /* [2014] */
    (xdc_Char)0x72,  /* [2015] */
    (xdc_Char)0x20,  /* [2016] */
    (xdc_Char)0x6f,  /* [2017] */
    (xdc_Char)0x66,  /* [2018] */
    (xdc_Char)0x20,  /* [2019] */
    (xdc_Char)0x32,  /* [2020] */
    (xdc_Char)0x20,  /* [2021] */
    (xdc_Char)0x61,  /* [2022] */
    (xdc_Char)0x6e,  /* [2023] */
    (xdc_Char)0x64,  /* [2024] */
    (xdc_Char)0x20,  /* [2025] */
    (xdc_Char)0x32,  /* [2026] */
    (xdc_Char)0x29,  /* [2027] */
    (xdc_Char)0x20,  /* [2028] */
    (xdc_Char)0x6e,  /* [2029] */
    (xdc_Char)0x6f,  /* [2030] */
    (xdc_Char)0x74,  /* [2031] */
    (xdc_Char)0x20,  /* [2032] */
    (xdc_Char)0x67,  /* [2033] */
    (xdc_Char)0x72,  /* [2034] */
    (xdc_Char)0x65,  /* [2035] */
    (xdc_Char)0x61,  /* [2036] */
    (xdc_Char)0x74,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x72,  /* [2039] */
    (xdc_Char)0x20,  /* [2040] */
    (xdc_Char)0x74,  /* [2041] */
    (xdc_Char)0x68,  /* [2042] */
    (xdc_Char)0x61,  /* [2043] */
    (xdc_Char)0x6e,  /* [2044] */
    (xdc_Char)0x20,  /* [2045] */
    (xdc_Char)0x74,  /* [2046] */
    (xdc_Char)0x68,  /* [2047] */
    (xdc_Char)0x65,  /* [2048] */
    (xdc_Char)0x20,  /* [2049] */
    (xdc_Char)0x68,  /* [2050] */
    (xdc_Char)0x65,  /* [2051] */
    (xdc_Char)0x61,  /* [2052] */
    (xdc_Char)0x70,  /* [2053] */
    (xdc_Char)0x73,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x61,  /* [2056] */
    (xdc_Char)0x6c,  /* [2057] */
    (xdc_Char)0x69,  /* [2058] */
    (xdc_Char)0x67,  /* [2059] */
    (xdc_Char)0x6e,  /* [2060] */
    (xdc_Char)0x6d,  /* [2061] */
    (xdc_Char)0x65,  /* [2062] */
    (xdc_Char)0x6e,  /* [2063] */
    (xdc_Char)0x74,  /* [2064] */
    (xdc_Char)0x0,  /* [2065] */
    (xdc_Char)0x62,  /* [2066] */
    (xdc_Char)0x6c,  /* [2067] */
    (xdc_Char)0x6f,  /* [2068] */
    (xdc_Char)0x63,  /* [2069] */
    (xdc_Char)0x6b,  /* [2070] */
    (xdc_Char)0x53,  /* [2071] */
    (xdc_Char)0x69,  /* [2072] */
    (xdc_Char)0x7a,  /* [2073] */
    (xdc_Char)0x65,  /* [2074] */
    (xdc_Char)0x20,  /* [2075] */
    (xdc_Char)0x63,  /* [2076] */
    (xdc_Char)0x61,  /* [2077] */
    (xdc_Char)0x6e,  /* [2078] */
    (xdc_Char)0x6e,  /* [2079] */
    (xdc_Char)0x6f,  /* [2080] */
    (xdc_Char)0x74,  /* [2081] */
    (xdc_Char)0x20,  /* [2082] */
    (xdc_Char)0x62,  /* [2083] */
    (xdc_Char)0x65,  /* [2084] */
    (xdc_Char)0x20,  /* [2085] */
    (xdc_Char)0x7a,  /* [2086] */
    (xdc_Char)0x65,  /* [2087] */
    (xdc_Char)0x72,  /* [2088] */
    (xdc_Char)0x6f,  /* [2089] */
    (xdc_Char)0x0,  /* [2090] */
    (xdc_Char)0x6e,  /* [2091] */
    (xdc_Char)0x75,  /* [2092] */
    (xdc_Char)0x6d,  /* [2093] */
    (xdc_Char)0x42,  /* [2094] */
    (xdc_Char)0x6c,  /* [2095] */
    (xdc_Char)0x6f,  /* [2096] */
    (xdc_Char)0x63,  /* [2097] */
    (xdc_Char)0x6b,  /* [2098] */
    (xdc_Char)0x73,  /* [2099] */
    (xdc_Char)0x20,  /* [2100] */
    (xdc_Char)0x63,  /* [2101] */
    (xdc_Char)0x61,  /* [2102] */
    (xdc_Char)0x6e,  /* [2103] */
    (xdc_Char)0x6e,  /* [2104] */
    (xdc_Char)0x6f,  /* [2105] */
    (xdc_Char)0x74,  /* [2106] */
    (xdc_Char)0x20,  /* [2107] */
    (xdc_Char)0x62,  /* [2108] */
    (xdc_Char)0x65,  /* [2109] */
    (xdc_Char)0x20,  /* [2110] */
    (xdc_Char)0x7a,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x72,  /* [2113] */
    (xdc_Char)0x6f,  /* [2114] */
    (xdc_Char)0x0,  /* [2115] */
    (xdc_Char)0x62,  /* [2116] */
    (xdc_Char)0x75,  /* [2117] */
    (xdc_Char)0x66,  /* [2118] */
    (xdc_Char)0x53,  /* [2119] */
    (xdc_Char)0x69,  /* [2120] */
    (xdc_Char)0x7a,  /* [2121] */
    (xdc_Char)0x65,  /* [2122] */
    (xdc_Char)0x20,  /* [2123] */
    (xdc_Char)0x63,  /* [2124] */
    (xdc_Char)0x61,  /* [2125] */
    (xdc_Char)0x6e,  /* [2126] */
    (xdc_Char)0x6e,  /* [2127] */
    (xdc_Char)0x6f,  /* [2128] */
    (xdc_Char)0x74,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x62,  /* [2131] */
    (xdc_Char)0x65,  /* [2132] */
    (xdc_Char)0x20,  /* [2133] */
    (xdc_Char)0x7a,  /* [2134] */
    (xdc_Char)0x65,  /* [2135] */
    (xdc_Char)0x72,  /* [2136] */
    (xdc_Char)0x6f,  /* [2137] */
    (xdc_Char)0x0,  /* [2138] */
    (xdc_Char)0x48,  /* [2139] */
    (xdc_Char)0x65,  /* [2140] */
    (xdc_Char)0x61,  /* [2141] */
    (xdc_Char)0x70,  /* [2142] */
    (xdc_Char)0x42,  /* [2143] */
    (xdc_Char)0x75,  /* [2144] */
    (xdc_Char)0x66,  /* [2145] */
    (xdc_Char)0x5f,  /* [2146] */
    (xdc_Char)0x63,  /* [2147] */
    (xdc_Char)0x72,  /* [2148] */
    (xdc_Char)0x65,  /* [2149] */
    (xdc_Char)0x61,  /* [2150] */
    (xdc_Char)0x74,  /* [2151] */
    (xdc_Char)0x65,  /* [2152] */
    (xdc_Char)0x27,  /* [2153] */
    (xdc_Char)0x73,  /* [2154] */
    (xdc_Char)0x20,  /* [2155] */
    (xdc_Char)0x62,  /* [2156] */
    (xdc_Char)0x75,  /* [2157] */
    (xdc_Char)0x66,  /* [2158] */
    (xdc_Char)0x53,  /* [2159] */
    (xdc_Char)0x69,  /* [2160] */
    (xdc_Char)0x7a,  /* [2161] */
    (xdc_Char)0x65,  /* [2162] */
    (xdc_Char)0x20,  /* [2163] */
    (xdc_Char)0x70,  /* [2164] */
    (xdc_Char)0x61,  /* [2165] */
    (xdc_Char)0x72,  /* [2166] */
    (xdc_Char)0x61,  /* [2167] */
    (xdc_Char)0x6d,  /* [2168] */
    (xdc_Char)0x65,  /* [2169] */
    (xdc_Char)0x74,  /* [2170] */
    (xdc_Char)0x65,  /* [2171] */
    (xdc_Char)0x72,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x69,  /* [2174] */
    (xdc_Char)0x73,  /* [2175] */
    (xdc_Char)0x20,  /* [2176] */
    (xdc_Char)0x69,  /* [2177] */
    (xdc_Char)0x6e,  /* [2178] */
    (xdc_Char)0x76,  /* [2179] */
    (xdc_Char)0x61,  /* [2180] */
    (xdc_Char)0x6c,  /* [2181] */
    (xdc_Char)0x69,  /* [2182] */
    (xdc_Char)0x64,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x28,  /* [2185] */
    (xdc_Char)0x74,  /* [2186] */
    (xdc_Char)0x6f,  /* [2187] */
    (xdc_Char)0x6f,  /* [2188] */
    (xdc_Char)0x20,  /* [2189] */
    (xdc_Char)0x73,  /* [2190] */
    (xdc_Char)0x6d,  /* [2191] */
    (xdc_Char)0x61,  /* [2192] */
    (xdc_Char)0x6c,  /* [2193] */
    (xdc_Char)0x6c,  /* [2194] */
    (xdc_Char)0x29,  /* [2195] */
    (xdc_Char)0x0,  /* [2196] */
    (xdc_Char)0x43,  /* [2197] */
    (xdc_Char)0x61,  /* [2198] */
    (xdc_Char)0x6e,  /* [2199] */
    (xdc_Char)0x6e,  /* [2200] */
    (xdc_Char)0x6f,  /* [2201] */
    (xdc_Char)0x74,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x63,  /* [2204] */
    (xdc_Char)0x61,  /* [2205] */
    (xdc_Char)0x6c,  /* [2206] */
    (xdc_Char)0x6c,  /* [2207] */
    (xdc_Char)0x20,  /* [2208] */
    (xdc_Char)0x48,  /* [2209] */
    (xdc_Char)0x65,  /* [2210] */
    (xdc_Char)0x61,  /* [2211] */
    (xdc_Char)0x70,  /* [2212] */
    (xdc_Char)0x42,  /* [2213] */
    (xdc_Char)0x75,  /* [2214] */
    (xdc_Char)0x66,  /* [2215] */
    (xdc_Char)0x5f,  /* [2216] */
    (xdc_Char)0x66,  /* [2217] */
    (xdc_Char)0x72,  /* [2218] */
    (xdc_Char)0x65,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x77,  /* [2222] */
    (xdc_Char)0x68,  /* [2223] */
    (xdc_Char)0x65,  /* [2224] */
    (xdc_Char)0x6e,  /* [2225] */
    (xdc_Char)0x20,  /* [2226] */
    (xdc_Char)0x6e,  /* [2227] */
    (xdc_Char)0x6f,  /* [2228] */
    (xdc_Char)0x20,  /* [2229] */
    (xdc_Char)0x62,  /* [2230] */
    (xdc_Char)0x6c,  /* [2231] */
    (xdc_Char)0x6f,  /* [2232] */
    (xdc_Char)0x63,  /* [2233] */
    (xdc_Char)0x6b,  /* [2234] */
    (xdc_Char)0x73,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x68,  /* [2237] */
    (xdc_Char)0x61,  /* [2238] */
    (xdc_Char)0x76,  /* [2239] */
    (xdc_Char)0x65,  /* [2240] */
    (xdc_Char)0x20,  /* [2241] */
    (xdc_Char)0x62,  /* [2242] */
    (xdc_Char)0x65,  /* [2243] */
    (xdc_Char)0x65,  /* [2244] */
    (xdc_Char)0x6e,  /* [2245] */
    (xdc_Char)0x20,  /* [2246] */
    (xdc_Char)0x61,  /* [2247] */
    (xdc_Char)0x6c,  /* [2248] */
    (xdc_Char)0x6c,  /* [2249] */
    (xdc_Char)0x6f,  /* [2250] */
    (xdc_Char)0x63,  /* [2251] */
    (xdc_Char)0x61,  /* [2252] */
    (xdc_Char)0x74,  /* [2253] */
    (xdc_Char)0x65,  /* [2254] */
    (xdc_Char)0x64,  /* [2255] */
    (xdc_Char)0x0,  /* [2256] */
    (xdc_Char)0x41,  /* [2257] */
    (xdc_Char)0x5f,  /* [2258] */
    (xdc_Char)0x69,  /* [2259] */
    (xdc_Char)0x6e,  /* [2260] */
    (xdc_Char)0x76,  /* [2261] */
    (xdc_Char)0x61,  /* [2262] */
    (xdc_Char)0x6c,  /* [2263] */
    (xdc_Char)0x69,  /* [2264] */
    (xdc_Char)0x64,  /* [2265] */
    (xdc_Char)0x46,  /* [2266] */
    (xdc_Char)0x72,  /* [2267] */
    (xdc_Char)0x65,  /* [2268] */
    (xdc_Char)0x65,  /* [2269] */
    (xdc_Char)0x3a,  /* [2270] */
    (xdc_Char)0x20,  /* [2271] */
    (xdc_Char)0x49,  /* [2272] */
    (xdc_Char)0x6e,  /* [2273] */
    (xdc_Char)0x76,  /* [2274] */
    (xdc_Char)0x61,  /* [2275] */
    (xdc_Char)0x6c,  /* [2276] */
    (xdc_Char)0x69,  /* [2277] */
    (xdc_Char)0x64,  /* [2278] */
    (xdc_Char)0x20,  /* [2279] */
    (xdc_Char)0x66,  /* [2280] */
    (xdc_Char)0x72,  /* [2281] */
    (xdc_Char)0x65,  /* [2282] */
    (xdc_Char)0x65,  /* [2283] */
    (xdc_Char)0x0,  /* [2284] */
    (xdc_Char)0x41,  /* [2285] */
    (xdc_Char)0x5f,  /* [2286] */
    (xdc_Char)0x7a,  /* [2287] */
    (xdc_Char)0x65,  /* [2288] */
    (xdc_Char)0x72,  /* [2289] */
    (xdc_Char)0x6f,  /* [2290] */
    (xdc_Char)0x42,  /* [2291] */
    (xdc_Char)0x6c,  /* [2292] */
    (xdc_Char)0x6f,  /* [2293] */
    (xdc_Char)0x63,  /* [2294] */
    (xdc_Char)0x6b,  /* [2295] */
    (xdc_Char)0x3a,  /* [2296] */
    (xdc_Char)0x20,  /* [2297] */
    (xdc_Char)0x43,  /* [2298] */
    (xdc_Char)0x61,  /* [2299] */
    (xdc_Char)0x6e,  /* [2300] */
    (xdc_Char)0x6e,  /* [2301] */
    (xdc_Char)0x6f,  /* [2302] */
    (xdc_Char)0x74,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x61,  /* [2305] */
    (xdc_Char)0x6c,  /* [2306] */
    (xdc_Char)0x6c,  /* [2307] */
    (xdc_Char)0x6f,  /* [2308] */
    (xdc_Char)0x63,  /* [2309] */
    (xdc_Char)0x61,  /* [2310] */
    (xdc_Char)0x74,  /* [2311] */
    (xdc_Char)0x65,  /* [2312] */
    (xdc_Char)0x20,  /* [2313] */
    (xdc_Char)0x73,  /* [2314] */
    (xdc_Char)0x69,  /* [2315] */
    (xdc_Char)0x7a,  /* [2316] */
    (xdc_Char)0x65,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x30,  /* [2319] */
    (xdc_Char)0x0,  /* [2320] */
    (xdc_Char)0x41,  /* [2321] */
    (xdc_Char)0x5f,  /* [2322] */
    (xdc_Char)0x68,  /* [2323] */
    (xdc_Char)0x65,  /* [2324] */
    (xdc_Char)0x61,  /* [2325] */
    (xdc_Char)0x70,  /* [2326] */
    (xdc_Char)0x53,  /* [2327] */
    (xdc_Char)0x69,  /* [2328] */
    (xdc_Char)0x7a,  /* [2329] */
    (xdc_Char)0x65,  /* [2330] */
    (xdc_Char)0x3a,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x52,  /* [2333] */
    (xdc_Char)0x65,  /* [2334] */
    (xdc_Char)0x71,  /* [2335] */
    (xdc_Char)0x75,  /* [2336] */
    (xdc_Char)0x65,  /* [2337] */
    (xdc_Char)0x73,  /* [2338] */
    (xdc_Char)0x74,  /* [2339] */
    (xdc_Char)0x65,  /* [2340] */
    (xdc_Char)0x64,  /* [2341] */
    (xdc_Char)0x20,  /* [2342] */
    (xdc_Char)0x68,  /* [2343] */
    (xdc_Char)0x65,  /* [2344] */
    (xdc_Char)0x61,  /* [2345] */
    (xdc_Char)0x70,  /* [2346] */
    (xdc_Char)0x20,  /* [2347] */
    (xdc_Char)0x73,  /* [2348] */
    (xdc_Char)0x69,  /* [2349] */
    (xdc_Char)0x7a,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x20,  /* [2352] */
    (xdc_Char)0x69,  /* [2353] */
    (xdc_Char)0x73,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x74,  /* [2356] */
    (xdc_Char)0x6f,  /* [2357] */
    (xdc_Char)0x6f,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x73,  /* [2360] */
    (xdc_Char)0x6d,  /* [2361] */
    (xdc_Char)0x61,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x6c,  /* [2364] */
    (xdc_Char)0x0,  /* [2365] */
    (xdc_Char)0x41,  /* [2366] */
    (xdc_Char)0x5f,  /* [2367] */
    (xdc_Char)0x61,  /* [2368] */
    (xdc_Char)0x6c,  /* [2369] */
    (xdc_Char)0x69,  /* [2370] */
    (xdc_Char)0x67,  /* [2371] */
    (xdc_Char)0x6e,  /* [2372] */
    (xdc_Char)0x3a,  /* [2373] */
    (xdc_Char)0x20,  /* [2374] */
    (xdc_Char)0x52,  /* [2375] */
    (xdc_Char)0x65,  /* [2376] */
    (xdc_Char)0x71,  /* [2377] */
    (xdc_Char)0x75,  /* [2378] */
    (xdc_Char)0x65,  /* [2379] */
    (xdc_Char)0x73,  /* [2380] */
    (xdc_Char)0x74,  /* [2381] */
    (xdc_Char)0x65,  /* [2382] */
    (xdc_Char)0x64,  /* [2383] */
    (xdc_Char)0x20,  /* [2384] */
    (xdc_Char)0x61,  /* [2385] */
    (xdc_Char)0x6c,  /* [2386] */
    (xdc_Char)0x69,  /* [2387] */
    (xdc_Char)0x67,  /* [2388] */
    (xdc_Char)0x6e,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x69,  /* [2391] */
    (xdc_Char)0x73,  /* [2392] */
    (xdc_Char)0x20,  /* [2393] */
    (xdc_Char)0x6e,  /* [2394] */
    (xdc_Char)0x6f,  /* [2395] */
    (xdc_Char)0x74,  /* [2396] */
    (xdc_Char)0x20,  /* [2397] */
    (xdc_Char)0x61,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x70,  /* [2400] */
    (xdc_Char)0x6f,  /* [2401] */
    (xdc_Char)0x77,  /* [2402] */
    (xdc_Char)0x65,  /* [2403] */
    (xdc_Char)0x72,  /* [2404] */
    (xdc_Char)0x20,  /* [2405] */
    (xdc_Char)0x6f,  /* [2406] */
    (xdc_Char)0x66,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x32,  /* [2409] */
    (xdc_Char)0x0,  /* [2410] */
    (xdc_Char)0x49,  /* [2411] */
    (xdc_Char)0x6e,  /* [2412] */
    (xdc_Char)0x76,  /* [2413] */
    (xdc_Char)0x61,  /* [2414] */
    (xdc_Char)0x6c,  /* [2415] */
    (xdc_Char)0x69,  /* [2416] */
    (xdc_Char)0x64,  /* [2417] */
    (xdc_Char)0x20,  /* [2418] */
    (xdc_Char)0x62,  /* [2419] */
    (xdc_Char)0x6c,  /* [2420] */
    (xdc_Char)0x6f,  /* [2421] */
    (xdc_Char)0x63,  /* [2422] */
    (xdc_Char)0x6b,  /* [2423] */
    (xdc_Char)0x20,  /* [2424] */
    (xdc_Char)0x61,  /* [2425] */
    (xdc_Char)0x64,  /* [2426] */
    (xdc_Char)0x64,  /* [2427] */
    (xdc_Char)0x72,  /* [2428] */
    (xdc_Char)0x65,  /* [2429] */
    (xdc_Char)0x73,  /* [2430] */
    (xdc_Char)0x73,  /* [2431] */
    (xdc_Char)0x20,  /* [2432] */
    (xdc_Char)0x6f,  /* [2433] */
    (xdc_Char)0x6e,  /* [2434] */
    (xdc_Char)0x20,  /* [2435] */
    (xdc_Char)0x74,  /* [2436] */
    (xdc_Char)0x68,  /* [2437] */
    (xdc_Char)0x65,  /* [2438] */
    (xdc_Char)0x20,  /* [2439] */
    (xdc_Char)0x66,  /* [2440] */
    (xdc_Char)0x72,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x65,  /* [2443] */
    (xdc_Char)0x2e,  /* [2444] */
    (xdc_Char)0x20,  /* [2445] */
    (xdc_Char)0x46,  /* [2446] */
    (xdc_Char)0x61,  /* [2447] */
    (xdc_Char)0x69,  /* [2448] */
    (xdc_Char)0x6c,  /* [2449] */
    (xdc_Char)0x65,  /* [2450] */
    (xdc_Char)0x64,  /* [2451] */
    (xdc_Char)0x20,  /* [2452] */
    (xdc_Char)0x74,  /* [2453] */
    (xdc_Char)0x6f,  /* [2454] */
    (xdc_Char)0x20,  /* [2455] */
    (xdc_Char)0x66,  /* [2456] */
    (xdc_Char)0x72,  /* [2457] */
    (xdc_Char)0x65,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x20,  /* [2460] */
    (xdc_Char)0x62,  /* [2461] */
    (xdc_Char)0x6c,  /* [2462] */
    (xdc_Char)0x6f,  /* [2463] */
    (xdc_Char)0x63,  /* [2464] */
    (xdc_Char)0x6b,  /* [2465] */
    (xdc_Char)0x20,  /* [2466] */
    (xdc_Char)0x62,  /* [2467] */
    (xdc_Char)0x61,  /* [2468] */
    (xdc_Char)0x63,  /* [2469] */
    (xdc_Char)0x6b,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x74,  /* [2472] */
    (xdc_Char)0x6f,  /* [2473] */
    (xdc_Char)0x20,  /* [2474] */
    (xdc_Char)0x68,  /* [2475] */
    (xdc_Char)0x65,  /* [2476] */
    (xdc_Char)0x61,  /* [2477] */
    (xdc_Char)0x70,  /* [2478] */
    (xdc_Char)0x2e,  /* [2479] */
    (xdc_Char)0x0,  /* [2480] */
    (xdc_Char)0x41,  /* [2481] */
    (xdc_Char)0x5f,  /* [2482] */
    (xdc_Char)0x64,  /* [2483] */
    (xdc_Char)0x6f,  /* [2484] */
    (xdc_Char)0x75,  /* [2485] */
    (xdc_Char)0x62,  /* [2486] */
    (xdc_Char)0x6c,  /* [2487] */
    (xdc_Char)0x65,  /* [2488] */
    (xdc_Char)0x46,  /* [2489] */
    (xdc_Char)0x72,  /* [2490] */
    (xdc_Char)0x65,  /* [2491] */
    (xdc_Char)0x65,  /* [2492] */
    (xdc_Char)0x3a,  /* [2493] */
    (xdc_Char)0x20,  /* [2494] */
    (xdc_Char)0x42,  /* [2495] */
    (xdc_Char)0x75,  /* [2496] */
    (xdc_Char)0x66,  /* [2497] */
    (xdc_Char)0x66,  /* [2498] */
    (xdc_Char)0x65,  /* [2499] */
    (xdc_Char)0x72,  /* [2500] */
    (xdc_Char)0x20,  /* [2501] */
    (xdc_Char)0x61,  /* [2502] */
    (xdc_Char)0x6c,  /* [2503] */
    (xdc_Char)0x72,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x61,  /* [2506] */
    (xdc_Char)0x64,  /* [2507] */
    (xdc_Char)0x79,  /* [2508] */
    (xdc_Char)0x20,  /* [2509] */
    (xdc_Char)0x66,  /* [2510] */
    (xdc_Char)0x72,  /* [2511] */
    (xdc_Char)0x65,  /* [2512] */
    (xdc_Char)0x65,  /* [2513] */
    (xdc_Char)0x0,  /* [2514] */
    (xdc_Char)0x41,  /* [2515] */
    (xdc_Char)0x5f,  /* [2516] */
    (xdc_Char)0x62,  /* [2517] */
    (xdc_Char)0x75,  /* [2518] */
    (xdc_Char)0x66,  /* [2519] */
    (xdc_Char)0x4f,  /* [2520] */
    (xdc_Char)0x76,  /* [2521] */
    (xdc_Char)0x65,  /* [2522] */
    (xdc_Char)0x72,  /* [2523] */
    (xdc_Char)0x66,  /* [2524] */
    (xdc_Char)0x6c,  /* [2525] */
    (xdc_Char)0x6f,  /* [2526] */
    (xdc_Char)0x77,  /* [2527] */
    (xdc_Char)0x3a,  /* [2528] */
    (xdc_Char)0x20,  /* [2529] */
    (xdc_Char)0x42,  /* [2530] */
    (xdc_Char)0x75,  /* [2531] */
    (xdc_Char)0x66,  /* [2532] */
    (xdc_Char)0x66,  /* [2533] */
    (xdc_Char)0x65,  /* [2534] */
    (xdc_Char)0x72,  /* [2535] */
    (xdc_Char)0x20,  /* [2536] */
    (xdc_Char)0x6f,  /* [2537] */
    (xdc_Char)0x76,  /* [2538] */
    (xdc_Char)0x65,  /* [2539] */
    (xdc_Char)0x72,  /* [2540] */
    (xdc_Char)0x66,  /* [2541] */
    (xdc_Char)0x6c,  /* [2542] */
    (xdc_Char)0x6f,  /* [2543] */
    (xdc_Char)0x77,  /* [2544] */
    (xdc_Char)0x0,  /* [2545] */
    (xdc_Char)0x41,  /* [2546] */
    (xdc_Char)0x5f,  /* [2547] */
    (xdc_Char)0x6e,  /* [2548] */
    (xdc_Char)0x6f,  /* [2549] */
    (xdc_Char)0x74,  /* [2550] */
    (xdc_Char)0x45,  /* [2551] */
    (xdc_Char)0x6d,  /* [2552] */
    (xdc_Char)0x70,  /* [2553] */
    (xdc_Char)0x74,  /* [2554] */
    (xdc_Char)0x79,  /* [2555] */
    (xdc_Char)0x3a,  /* [2556] */
    (xdc_Char)0x20,  /* [2557] */
    (xdc_Char)0x48,  /* [2558] */
    (xdc_Char)0x65,  /* [2559] */
    (xdc_Char)0x61,  /* [2560] */
    (xdc_Char)0x70,  /* [2561] */
    (xdc_Char)0x20,  /* [2562] */
    (xdc_Char)0x6e,  /* [2563] */
    (xdc_Char)0x6f,  /* [2564] */
    (xdc_Char)0x74,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x65,  /* [2567] */
    (xdc_Char)0x6d,  /* [2568] */
    (xdc_Char)0x70,  /* [2569] */
    (xdc_Char)0x74,  /* [2570] */
    (xdc_Char)0x79,  /* [2571] */
    (xdc_Char)0x0,  /* [2572] */
    (xdc_Char)0x41,  /* [2573] */
    (xdc_Char)0x5f,  /* [2574] */
    (xdc_Char)0x6e,  /* [2575] */
    (xdc_Char)0x75,  /* [2576] */
    (xdc_Char)0x6c,  /* [2577] */
    (xdc_Char)0x6c,  /* [2578] */
    (xdc_Char)0x4f,  /* [2579] */
    (xdc_Char)0x62,  /* [2580] */
    (xdc_Char)0x6a,  /* [2581] */
    (xdc_Char)0x65,  /* [2582] */
    (xdc_Char)0x63,  /* [2583] */
    (xdc_Char)0x74,  /* [2584] */
    (xdc_Char)0x3a,  /* [2585] */
    (xdc_Char)0x20,  /* [2586] */
    (xdc_Char)0x48,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x61,  /* [2589] */
    (xdc_Char)0x70,  /* [2590] */
    (xdc_Char)0x54,  /* [2591] */
    (xdc_Char)0x72,  /* [2592] */
    (xdc_Char)0x61,  /* [2593] */
    (xdc_Char)0x63,  /* [2594] */
    (xdc_Char)0x6b,  /* [2595] */
    (xdc_Char)0x5f,  /* [2596] */
    (xdc_Char)0x70,  /* [2597] */
    (xdc_Char)0x72,  /* [2598] */
    (xdc_Char)0x69,  /* [2599] */
    (xdc_Char)0x6e,  /* [2600] */
    (xdc_Char)0x74,  /* [2601] */
    (xdc_Char)0x48,  /* [2602] */
    (xdc_Char)0x65,  /* [2603] */
    (xdc_Char)0x61,  /* [2604] */
    (xdc_Char)0x70,  /* [2605] */
    (xdc_Char)0x20,  /* [2606] */
    (xdc_Char)0x63,  /* [2607] */
    (xdc_Char)0x61,  /* [2608] */
    (xdc_Char)0x6c,  /* [2609] */
    (xdc_Char)0x6c,  /* [2610] */
    (xdc_Char)0x65,  /* [2611] */
    (xdc_Char)0x64,  /* [2612] */
    (xdc_Char)0x20,  /* [2613] */
    (xdc_Char)0x77,  /* [2614] */
    (xdc_Char)0x69,  /* [2615] */
    (xdc_Char)0x74,  /* [2616] */
    (xdc_Char)0x68,  /* [2617] */
    (xdc_Char)0x20,  /* [2618] */
    (xdc_Char)0x6e,  /* [2619] */
    (xdc_Char)0x75,  /* [2620] */
    (xdc_Char)0x6c,  /* [2621] */
    (xdc_Char)0x6c,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x6f,  /* [2624] */
    (xdc_Char)0x62,  /* [2625] */
    (xdc_Char)0x6a,  /* [2626] */
    (xdc_Char)0x0,  /* [2627] */
    (xdc_Char)0x41,  /* [2628] */
    (xdc_Char)0x5f,  /* [2629] */
    (xdc_Char)0x69,  /* [2630] */
    (xdc_Char)0x70,  /* [2631] */
    (xdc_Char)0x63,  /* [2632] */
    (xdc_Char)0x46,  /* [2633] */
    (xdc_Char)0x61,  /* [2634] */
    (xdc_Char)0x69,  /* [2635] */
    (xdc_Char)0x6c,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x64,  /* [2638] */
    (xdc_Char)0x3a,  /* [2639] */
    (xdc_Char)0x20,  /* [2640] */
    (xdc_Char)0x55,  /* [2641] */
    (xdc_Char)0x6e,  /* [2642] */
    (xdc_Char)0x65,  /* [2643] */
    (xdc_Char)0x78,  /* [2644] */
    (xdc_Char)0x70,  /* [2645] */
    (xdc_Char)0x65,  /* [2646] */
    (xdc_Char)0x63,  /* [2647] */
    (xdc_Char)0x74,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x64,  /* [2650] */
    (xdc_Char)0x20,  /* [2651] */
    (xdc_Char)0x4d,  /* [2652] */
    (xdc_Char)0x65,  /* [2653] */
    (xdc_Char)0x73,  /* [2654] */
    (xdc_Char)0x73,  /* [2655] */
    (xdc_Char)0x61,  /* [2656] */
    (xdc_Char)0x67,  /* [2657] */
    (xdc_Char)0x65,  /* [2658] */
    (xdc_Char)0x51,  /* [2659] */
    (xdc_Char)0x20,  /* [2660] */
    (xdc_Char)0x66,  /* [2661] */
    (xdc_Char)0x61,  /* [2662] */
    (xdc_Char)0x69,  /* [2663] */
    (xdc_Char)0x6c,  /* [2664] */
    (xdc_Char)0x65,  /* [2665] */
    (xdc_Char)0x64,  /* [2666] */
    (xdc_Char)0x0,  /* [2667] */
    (xdc_Char)0x41,  /* [2668] */
    (xdc_Char)0x5f,  /* [2669] */
    (xdc_Char)0x69,  /* [2670] */
    (xdc_Char)0x6e,  /* [2671] */
    (xdc_Char)0x76,  /* [2672] */
    (xdc_Char)0x61,  /* [2673] */
    (xdc_Char)0x6c,  /* [2674] */
    (xdc_Char)0x69,  /* [2675] */
    (xdc_Char)0x64,  /* [2676] */
    (xdc_Char)0x48,  /* [2677] */
    (xdc_Char)0x64,  /* [2678] */
    (xdc_Char)0x72,  /* [2679] */
    (xdc_Char)0x54,  /* [2680] */
    (xdc_Char)0x79,  /* [2681] */
    (xdc_Char)0x70,  /* [2682] */
    (xdc_Char)0x65,  /* [2683] */
    (xdc_Char)0x3a,  /* [2684] */
    (xdc_Char)0x20,  /* [2685] */
    (xdc_Char)0x49,  /* [2686] */
    (xdc_Char)0x6e,  /* [2687] */
    (xdc_Char)0x76,  /* [2688] */
    (xdc_Char)0x61,  /* [2689] */
    (xdc_Char)0x6c,  /* [2690] */
    (xdc_Char)0x69,  /* [2691] */
    (xdc_Char)0x64,  /* [2692] */
    (xdc_Char)0x20,  /* [2693] */
    (xdc_Char)0x48,  /* [2694] */
    (xdc_Char)0x64,  /* [2695] */
    (xdc_Char)0x72,  /* [2696] */
    (xdc_Char)0x54,  /* [2697] */
    (xdc_Char)0x79,  /* [2698] */
    (xdc_Char)0x70,  /* [2699] */
    (xdc_Char)0x65,  /* [2700] */
    (xdc_Char)0x20,  /* [2701] */
    (xdc_Char)0x73,  /* [2702] */
    (xdc_Char)0x70,  /* [2703] */
    (xdc_Char)0x65,  /* [2704] */
    (xdc_Char)0x63,  /* [2705] */
    (xdc_Char)0x69,  /* [2706] */
    (xdc_Char)0x66,  /* [2707] */
    (xdc_Char)0x69,  /* [2708] */
    (xdc_Char)0x65,  /* [2709] */
    (xdc_Char)0x64,  /* [2710] */
    (xdc_Char)0x0,  /* [2711] */
    (xdc_Char)0x41,  /* [2712] */
    (xdc_Char)0x5f,  /* [2713] */
    (xdc_Char)0x69,  /* [2714] */
    (xdc_Char)0x6e,  /* [2715] */
    (xdc_Char)0x76,  /* [2716] */
    (xdc_Char)0x61,  /* [2717] */
    (xdc_Char)0x6c,  /* [2718] */
    (xdc_Char)0x69,  /* [2719] */
    (xdc_Char)0x64,  /* [2720] */
    (xdc_Char)0x53,  /* [2721] */
    (xdc_Char)0x65,  /* [2722] */
    (xdc_Char)0x72,  /* [2723] */
    (xdc_Char)0x76,  /* [2724] */
    (xdc_Char)0x69,  /* [2725] */
    (xdc_Char)0x63,  /* [2726] */
    (xdc_Char)0x65,  /* [2727] */
    (xdc_Char)0x49,  /* [2728] */
    (xdc_Char)0x64,  /* [2729] */
    (xdc_Char)0x3a,  /* [2730] */
    (xdc_Char)0x20,  /* [2731] */
    (xdc_Char)0x53,  /* [2732] */
    (xdc_Char)0x65,  /* [2733] */
    (xdc_Char)0x72,  /* [2734] */
    (xdc_Char)0x76,  /* [2735] */
    (xdc_Char)0x69,  /* [2736] */
    (xdc_Char)0x63,  /* [2737] */
    (xdc_Char)0x65,  /* [2738] */
    (xdc_Char)0x49,  /* [2739] */
    (xdc_Char)0x64,  /* [2740] */
    (xdc_Char)0x20,  /* [2741] */
    (xdc_Char)0x6f,  /* [2742] */
    (xdc_Char)0x75,  /* [2743] */
    (xdc_Char)0x74,  /* [2744] */
    (xdc_Char)0x20,  /* [2745] */
    (xdc_Char)0x6f,  /* [2746] */
    (xdc_Char)0x66,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x72,  /* [2749] */
    (xdc_Char)0x61,  /* [2750] */
    (xdc_Char)0x6e,  /* [2751] */
    (xdc_Char)0x67,  /* [2752] */
    (xdc_Char)0x65,  /* [2753] */
    (xdc_Char)0x0,  /* [2754] */
    (xdc_Char)0x41,  /* [2755] */
    (xdc_Char)0x5f,  /* [2756] */
    (xdc_Char)0x69,  /* [2757] */
    (xdc_Char)0x6e,  /* [2758] */
    (xdc_Char)0x76,  /* [2759] */
    (xdc_Char)0x61,  /* [2760] */
    (xdc_Char)0x6c,  /* [2761] */
    (xdc_Char)0x69,  /* [2762] */
    (xdc_Char)0x64,  /* [2763] */
    (xdc_Char)0x50,  /* [2764] */
    (xdc_Char)0x72,  /* [2765] */
    (xdc_Char)0x6f,  /* [2766] */
    (xdc_Char)0x63,  /* [2767] */
    (xdc_Char)0x65,  /* [2768] */
    (xdc_Char)0x73,  /* [2769] */
    (xdc_Char)0x73,  /* [2770] */
    (xdc_Char)0x43,  /* [2771] */
    (xdc_Char)0x61,  /* [2772] */
    (xdc_Char)0x6c,  /* [2773] */
    (xdc_Char)0x6c,  /* [2774] */
    (xdc_Char)0x62,  /* [2775] */
    (xdc_Char)0x61,  /* [2776] */
    (xdc_Char)0x63,  /* [2777] */
    (xdc_Char)0x6b,  /* [2778] */
    (xdc_Char)0x46,  /* [2779] */
    (xdc_Char)0x78,  /* [2780] */
    (xdc_Char)0x6e,  /* [2781] */
    (xdc_Char)0x3a,  /* [2782] */
    (xdc_Char)0x20,  /* [2783] */
    (xdc_Char)0x43,  /* [2784] */
    (xdc_Char)0x61,  /* [2785] */
    (xdc_Char)0x6c,  /* [2786] */
    (xdc_Char)0x6c,  /* [2787] */
    (xdc_Char)0x62,  /* [2788] */
    (xdc_Char)0x61,  /* [2789] */
    (xdc_Char)0x63,  /* [2790] */
    (xdc_Char)0x6b,  /* [2791] */
    (xdc_Char)0x20,  /* [2792] */
    (xdc_Char)0x63,  /* [2793] */
    (xdc_Char)0x61,  /* [2794] */
    (xdc_Char)0x6e,  /* [2795] */
    (xdc_Char)0x6e,  /* [2796] */
    (xdc_Char)0x6f,  /* [2797] */
    (xdc_Char)0x74,  /* [2798] */
    (xdc_Char)0x20,  /* [2799] */
    (xdc_Char)0x62,  /* [2800] */
    (xdc_Char)0x65,  /* [2801] */
    (xdc_Char)0x20,  /* [2802] */
    (xdc_Char)0x4e,  /* [2803] */
    (xdc_Char)0x55,  /* [2804] */
    (xdc_Char)0x4c,  /* [2805] */
    (xdc_Char)0x4c,  /* [2806] */
    (xdc_Char)0x0,  /* [2807] */
    (xdc_Char)0x41,  /* [2808] */
    (xdc_Char)0x5f,  /* [2809] */
    (xdc_Char)0x7a,  /* [2810] */
    (xdc_Char)0x65,  /* [2811] */
    (xdc_Char)0x72,  /* [2812] */
    (xdc_Char)0x6f,  /* [2813] */
    (xdc_Char)0x54,  /* [2814] */
    (xdc_Char)0x69,  /* [2815] */
    (xdc_Char)0x6d,  /* [2816] */
    (xdc_Char)0x65,  /* [2817] */
    (xdc_Char)0x6f,  /* [2818] */
    (xdc_Char)0x75,  /* [2819] */
    (xdc_Char)0x74,  /* [2820] */
    (xdc_Char)0x3a,  /* [2821] */
    (xdc_Char)0x20,  /* [2822] */
    (xdc_Char)0x54,  /* [2823] */
    (xdc_Char)0x69,  /* [2824] */
    (xdc_Char)0x6d,  /* [2825] */
    (xdc_Char)0x65,  /* [2826] */
    (xdc_Char)0x6f,  /* [2827] */
    (xdc_Char)0x75,  /* [2828] */
    (xdc_Char)0x74,  /* [2829] */
    (xdc_Char)0x20,  /* [2830] */
    (xdc_Char)0x76,  /* [2831] */
    (xdc_Char)0x61,  /* [2832] */
    (xdc_Char)0x6c,  /* [2833] */
    (xdc_Char)0x75,  /* [2834] */
    (xdc_Char)0x65,  /* [2835] */
    (xdc_Char)0x20,  /* [2836] */
    (xdc_Char)0x61,  /* [2837] */
    (xdc_Char)0x6e,  /* [2838] */
    (xdc_Char)0x6e,  /* [2839] */
    (xdc_Char)0x6f,  /* [2840] */
    (xdc_Char)0x74,  /* [2841] */
    (xdc_Char)0x20,  /* [2842] */
    (xdc_Char)0x62,  /* [2843] */
    (xdc_Char)0x65,  /* [2844] */
    (xdc_Char)0x20,  /* [2845] */
    (xdc_Char)0x7a,  /* [2846] */
    (xdc_Char)0x65,  /* [2847] */
    (xdc_Char)0x72,  /* [2848] */
    (xdc_Char)0x6f,  /* [2849] */
    (xdc_Char)0x0,  /* [2850] */
    (xdc_Char)0x41,  /* [2851] */
    (xdc_Char)0x5f,  /* [2852] */
    (xdc_Char)0x69,  /* [2853] */
    (xdc_Char)0x6e,  /* [2854] */
    (xdc_Char)0x76,  /* [2855] */
    (xdc_Char)0x61,  /* [2856] */
    (xdc_Char)0x6c,  /* [2857] */
    (xdc_Char)0x69,  /* [2858] */
    (xdc_Char)0x64,  /* [2859] */
    (xdc_Char)0x4b,  /* [2860] */
    (xdc_Char)0x65,  /* [2861] */
    (xdc_Char)0x79,  /* [2862] */
    (xdc_Char)0x3a,  /* [2863] */
    (xdc_Char)0x20,  /* [2864] */
    (xdc_Char)0x74,  /* [2865] */
    (xdc_Char)0x68,  /* [2866] */
    (xdc_Char)0x65,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x6b,  /* [2869] */
    (xdc_Char)0x65,  /* [2870] */
    (xdc_Char)0x79,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x6d,  /* [2873] */
    (xdc_Char)0x75,  /* [2874] */
    (xdc_Char)0x73,  /* [2875] */
    (xdc_Char)0x74,  /* [2876] */
    (xdc_Char)0x20,  /* [2877] */
    (xdc_Char)0x62,  /* [2878] */
    (xdc_Char)0x65,  /* [2879] */
    (xdc_Char)0x20,  /* [2880] */
    (xdc_Char)0x73,  /* [2881] */
    (xdc_Char)0x65,  /* [2882] */
    (xdc_Char)0x74,  /* [2883] */
    (xdc_Char)0x20,  /* [2884] */
    (xdc_Char)0x74,  /* [2885] */
    (xdc_Char)0x6f,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x61,  /* [2888] */
    (xdc_Char)0x20,  /* [2889] */
    (xdc_Char)0x6e,  /* [2890] */
    (xdc_Char)0x6f,  /* [2891] */
    (xdc_Char)0x6e,  /* [2892] */
    (xdc_Char)0x2d,  /* [2893] */
    (xdc_Char)0x64,  /* [2894] */
    (xdc_Char)0x65,  /* [2895] */
    (xdc_Char)0x66,  /* [2896] */
    (xdc_Char)0x61,  /* [2897] */
    (xdc_Char)0x75,  /* [2898] */
    (xdc_Char)0x6c,  /* [2899] */
    (xdc_Char)0x74,  /* [2900] */
    (xdc_Char)0x20,  /* [2901] */
    (xdc_Char)0x76,  /* [2902] */
    (xdc_Char)0x61,  /* [2903] */
    (xdc_Char)0x6c,  /* [2904] */
    (xdc_Char)0x75,  /* [2905] */
    (xdc_Char)0x65,  /* [2906] */
    (xdc_Char)0x0,  /* [2907] */
    (xdc_Char)0x41,  /* [2908] */
    (xdc_Char)0x5f,  /* [2909] */
    (xdc_Char)0x6e,  /* [2910] */
    (xdc_Char)0x75,  /* [2911] */
    (xdc_Char)0x6c,  /* [2912] */
    (xdc_Char)0x6c,  /* [2913] */
    (xdc_Char)0x48,  /* [2914] */
    (xdc_Char)0x61,  /* [2915] */
    (xdc_Char)0x6e,  /* [2916] */
    (xdc_Char)0x64,  /* [2917] */
    (xdc_Char)0x6c,  /* [2918] */
    (xdc_Char)0x65,  /* [2919] */
    (xdc_Char)0x3a,  /* [2920] */
    (xdc_Char)0x20,  /* [2921] */
    (xdc_Char)0x4e,  /* [2922] */
    (xdc_Char)0x75,  /* [2923] */
    (xdc_Char)0x6c,  /* [2924] */
    (xdc_Char)0x6c,  /* [2925] */
    (xdc_Char)0x20,  /* [2926] */
    (xdc_Char)0x68,  /* [2927] */
    (xdc_Char)0x61,  /* [2928] */
    (xdc_Char)0x6e,  /* [2929] */
    (xdc_Char)0x64,  /* [2930] */
    (xdc_Char)0x6c,  /* [2931] */
    (xdc_Char)0x65,  /* [2932] */
    (xdc_Char)0x20,  /* [2933] */
    (xdc_Char)0x70,  /* [2934] */
    (xdc_Char)0x61,  /* [2935] */
    (xdc_Char)0x73,  /* [2936] */
    (xdc_Char)0x73,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x64,  /* [2939] */
    (xdc_Char)0x20,  /* [2940] */
    (xdc_Char)0x74,  /* [2941] */
    (xdc_Char)0x6f,  /* [2942] */
    (xdc_Char)0x20,  /* [2943] */
    (xdc_Char)0x63,  /* [2944] */
    (xdc_Char)0x72,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x61,  /* [2947] */
    (xdc_Char)0x74,  /* [2948] */
    (xdc_Char)0x65,  /* [2949] */
    (xdc_Char)0x0,  /* [2950] */
    (xdc_Char)0x41,  /* [2951] */
    (xdc_Char)0x5f,  /* [2952] */
    (xdc_Char)0x49,  /* [2953] */
    (xdc_Char)0x70,  /* [2954] */
    (xdc_Char)0x63,  /* [2955] */
    (xdc_Char)0x4d,  /* [2956] */
    (xdc_Char)0x50,  /* [2957] */
    (xdc_Char)0x46,  /* [2958] */
    (xdc_Char)0x61,  /* [2959] */
    (xdc_Char)0x69,  /* [2960] */
    (xdc_Char)0x6c,  /* [2961] */
    (xdc_Char)0x75,  /* [2962] */
    (xdc_Char)0x72,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x3a,  /* [2965] */
    (xdc_Char)0x20,  /* [2966] */
    (xdc_Char)0x55,  /* [2967] */
    (xdc_Char)0x6e,  /* [2968] */
    (xdc_Char)0x65,  /* [2969] */
    (xdc_Char)0x78,  /* [2970] */
    (xdc_Char)0x70,  /* [2971] */
    (xdc_Char)0x65,  /* [2972] */
    (xdc_Char)0x63,  /* [2973] */
    (xdc_Char)0x74,  /* [2974] */
    (xdc_Char)0x65,  /* [2975] */
    (xdc_Char)0x64,  /* [2976] */
    (xdc_Char)0x20,  /* [2977] */
    (xdc_Char)0x66,  /* [2978] */
    (xdc_Char)0x61,  /* [2979] */
    (xdc_Char)0x69,  /* [2980] */
    (xdc_Char)0x6c,  /* [2981] */
    (xdc_Char)0x75,  /* [2982] */
    (xdc_Char)0x72,  /* [2983] */
    (xdc_Char)0x65,  /* [2984] */
    (xdc_Char)0x20,  /* [2985] */
    (xdc_Char)0x77,  /* [2986] */
    (xdc_Char)0x69,  /* [2987] */
    (xdc_Char)0x74,  /* [2988] */
    (xdc_Char)0x68,  /* [2989] */
    (xdc_Char)0x20,  /* [2990] */
    (xdc_Char)0x74,  /* [2991] */
    (xdc_Char)0x68,  /* [2992] */
    (xdc_Char)0x65,  /* [2993] */
    (xdc_Char)0x20,  /* [2994] */
    (xdc_Char)0x49,  /* [2995] */
    (xdc_Char)0x70,  /* [2996] */
    (xdc_Char)0x63,  /* [2997] */
    (xdc_Char)0x4d,  /* [2998] */
    (xdc_Char)0x50,  /* [2999] */
    (xdc_Char)0x0,  /* [3000] */
    (xdc_Char)0x4c,  /* [3001] */
    (xdc_Char)0x6f,  /* [3002] */
    (xdc_Char)0x67,  /* [3003] */
    (xdc_Char)0x67,  /* [3004] */
    (xdc_Char)0x65,  /* [3005] */
    (xdc_Char)0x72,  /* [3006] */
    (xdc_Char)0x53,  /* [3007] */
    (xdc_Char)0x74,  /* [3008] */
    (xdc_Char)0x72,  /* [3009] */
    (xdc_Char)0x65,  /* [3010] */
    (xdc_Char)0x61,  /* [3011] */
    (xdc_Char)0x6d,  /* [3012] */
    (xdc_Char)0x65,  /* [3013] */
    (xdc_Char)0x72,  /* [3014] */
    (xdc_Char)0x32,  /* [3015] */
    (xdc_Char)0x5f,  /* [3016] */
    (xdc_Char)0x63,  /* [3017] */
    (xdc_Char)0x72,  /* [3018] */
    (xdc_Char)0x65,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x74,  /* [3021] */
    (xdc_Char)0x65,  /* [3022] */
    (xdc_Char)0x27,  /* [3023] */
    (xdc_Char)0x73,  /* [3024] */
    (xdc_Char)0x20,  /* [3025] */
    (xdc_Char)0x62,  /* [3026] */
    (xdc_Char)0x75,  /* [3027] */
    (xdc_Char)0x66,  /* [3028] */
    (xdc_Char)0x66,  /* [3029] */
    (xdc_Char)0x65,  /* [3030] */
    (xdc_Char)0x72,  /* [3031] */
    (xdc_Char)0x20,  /* [3032] */
    (xdc_Char)0x72,  /* [3033] */
    (xdc_Char)0x65,  /* [3034] */
    (xdc_Char)0x74,  /* [3035] */
    (xdc_Char)0x75,  /* [3036] */
    (xdc_Char)0x72,  /* [3037] */
    (xdc_Char)0x6e,  /* [3038] */
    (xdc_Char)0x65,  /* [3039] */
    (xdc_Char)0x64,  /* [3040] */
    (xdc_Char)0x20,  /* [3041] */
    (xdc_Char)0x62,  /* [3042] */
    (xdc_Char)0x79,  /* [3043] */
    (xdc_Char)0x20,  /* [3044] */
    (xdc_Char)0x70,  /* [3045] */
    (xdc_Char)0x72,  /* [3046] */
    (xdc_Char)0x69,  /* [3047] */
    (xdc_Char)0x6d,  /* [3048] */
    (xdc_Char)0x65,  /* [3049] */
    (xdc_Char)0x46,  /* [3050] */
    (xdc_Char)0x78,  /* [3051] */
    (xdc_Char)0x6e,  /* [3052] */
    (xdc_Char)0x20,  /* [3053] */
    (xdc_Char)0x69,  /* [3054] */
    (xdc_Char)0x73,  /* [3055] */
    (xdc_Char)0x20,  /* [3056] */
    (xdc_Char)0x4e,  /* [3057] */
    (xdc_Char)0x55,  /* [3058] */
    (xdc_Char)0x4c,  /* [3059] */
    (xdc_Char)0x4c,  /* [3060] */
    (xdc_Char)0x0,  /* [3061] */
    (xdc_Char)0x41,  /* [3062] */
    (xdc_Char)0x5f,  /* [3063] */
    (xdc_Char)0x62,  /* [3064] */
    (xdc_Char)0x61,  /* [3065] */
    (xdc_Char)0x64,  /* [3066] */
    (xdc_Char)0x43,  /* [3067] */
    (xdc_Char)0x6f,  /* [3068] */
    (xdc_Char)0x6e,  /* [3069] */
    (xdc_Char)0x74,  /* [3070] */
    (xdc_Char)0x65,  /* [3071] */
    (xdc_Char)0x78,  /* [3072] */
    (xdc_Char)0x74,  /* [3073] */
    (xdc_Char)0x3a,  /* [3074] */
    (xdc_Char)0x20,  /* [3075] */
    (xdc_Char)0x62,  /* [3076] */
    (xdc_Char)0x61,  /* [3077] */
    (xdc_Char)0x64,  /* [3078] */
    (xdc_Char)0x20,  /* [3079] */
    (xdc_Char)0x63,  /* [3080] */
    (xdc_Char)0x61,  /* [3081] */
    (xdc_Char)0x6c,  /* [3082] */
    (xdc_Char)0x6c,  /* [3083] */
    (xdc_Char)0x69,  /* [3084] */
    (xdc_Char)0x6e,  /* [3085] */
    (xdc_Char)0x67,  /* [3086] */
    (xdc_Char)0x20,  /* [3087] */
    (xdc_Char)0x63,  /* [3088] */
    (xdc_Char)0x6f,  /* [3089] */
    (xdc_Char)0x6e,  /* [3090] */
    (xdc_Char)0x74,  /* [3091] */
    (xdc_Char)0x65,  /* [3092] */
    (xdc_Char)0x78,  /* [3093] */
    (xdc_Char)0x74,  /* [3094] */
    (xdc_Char)0x2e,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x4d,  /* [3097] */
    (xdc_Char)0x61,  /* [3098] */
    (xdc_Char)0x79,  /* [3099] */
    (xdc_Char)0x20,  /* [3100] */
    (xdc_Char)0x6e,  /* [3101] */
    (xdc_Char)0x6f,  /* [3102] */
    (xdc_Char)0x74,  /* [3103] */
    (xdc_Char)0x20,  /* [3104] */
    (xdc_Char)0x62,  /* [3105] */
    (xdc_Char)0x65,  /* [3106] */
    (xdc_Char)0x20,  /* [3107] */
    (xdc_Char)0x65,  /* [3108] */
    (xdc_Char)0x6e,  /* [3109] */
    (xdc_Char)0x74,  /* [3110] */
    (xdc_Char)0x65,  /* [3111] */
    (xdc_Char)0x72,  /* [3112] */
    (xdc_Char)0x65,  /* [3113] */
    (xdc_Char)0x64,  /* [3114] */
    (xdc_Char)0x20,  /* [3115] */
    (xdc_Char)0x66,  /* [3116] */
    (xdc_Char)0x72,  /* [3117] */
    (xdc_Char)0x6f,  /* [3118] */
    (xdc_Char)0x6d,  /* [3119] */
    (xdc_Char)0x20,  /* [3120] */
    (xdc_Char)0x61,  /* [3121] */
    (xdc_Char)0x20,  /* [3122] */
    (xdc_Char)0x68,  /* [3123] */
    (xdc_Char)0x61,  /* [3124] */
    (xdc_Char)0x72,  /* [3125] */
    (xdc_Char)0x64,  /* [3126] */
    (xdc_Char)0x77,  /* [3127] */
    (xdc_Char)0x61,  /* [3128] */
    (xdc_Char)0x72,  /* [3129] */
    (xdc_Char)0x65,  /* [3130] */
    (xdc_Char)0x20,  /* [3131] */
    (xdc_Char)0x69,  /* [3132] */
    (xdc_Char)0x6e,  /* [3133] */
    (xdc_Char)0x74,  /* [3134] */
    (xdc_Char)0x65,  /* [3135] */
    (xdc_Char)0x72,  /* [3136] */
    (xdc_Char)0x72,  /* [3137] */
    (xdc_Char)0x75,  /* [3138] */
    (xdc_Char)0x70,  /* [3139] */
    (xdc_Char)0x74,  /* [3140] */
    (xdc_Char)0x20,  /* [3141] */
    (xdc_Char)0x74,  /* [3142] */
    (xdc_Char)0x68,  /* [3143] */
    (xdc_Char)0x72,  /* [3144] */
    (xdc_Char)0x65,  /* [3145] */
    (xdc_Char)0x61,  /* [3146] */
    (xdc_Char)0x64,  /* [3147] */
    (xdc_Char)0x2e,  /* [3148] */
    (xdc_Char)0x0,  /* [3149] */
    (xdc_Char)0x41,  /* [3150] */
    (xdc_Char)0x5f,  /* [3151] */
    (xdc_Char)0x62,  /* [3152] */
    (xdc_Char)0x61,  /* [3153] */
    (xdc_Char)0x64,  /* [3154] */
    (xdc_Char)0x43,  /* [3155] */
    (xdc_Char)0x6f,  /* [3156] */
    (xdc_Char)0x6e,  /* [3157] */
    (xdc_Char)0x74,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x78,  /* [3160] */
    (xdc_Char)0x74,  /* [3161] */
    (xdc_Char)0x3a,  /* [3162] */
    (xdc_Char)0x20,  /* [3163] */
    (xdc_Char)0x62,  /* [3164] */
    (xdc_Char)0x61,  /* [3165] */
    (xdc_Char)0x64,  /* [3166] */
    (xdc_Char)0x20,  /* [3167] */
    (xdc_Char)0x63,  /* [3168] */
    (xdc_Char)0x61,  /* [3169] */
    (xdc_Char)0x6c,  /* [3170] */
    (xdc_Char)0x6c,  /* [3171] */
    (xdc_Char)0x69,  /* [3172] */
    (xdc_Char)0x6e,  /* [3173] */
    (xdc_Char)0x67,  /* [3174] */
    (xdc_Char)0x20,  /* [3175] */
    (xdc_Char)0x63,  /* [3176] */
    (xdc_Char)0x6f,  /* [3177] */
    (xdc_Char)0x6e,  /* [3178] */
    (xdc_Char)0x74,  /* [3179] */
    (xdc_Char)0x65,  /* [3180] */
    (xdc_Char)0x78,  /* [3181] */
    (xdc_Char)0x74,  /* [3182] */
    (xdc_Char)0x2e,  /* [3183] */
    (xdc_Char)0x20,  /* [3184] */
    (xdc_Char)0x4d,  /* [3185] */
    (xdc_Char)0x61,  /* [3186] */
    (xdc_Char)0x79,  /* [3187] */
    (xdc_Char)0x20,  /* [3188] */
    (xdc_Char)0x6e,  /* [3189] */
    (xdc_Char)0x6f,  /* [3190] */
    (xdc_Char)0x74,  /* [3191] */
    (xdc_Char)0x20,  /* [3192] */
    (xdc_Char)0x62,  /* [3193] */
    (xdc_Char)0x65,  /* [3194] */
    (xdc_Char)0x20,  /* [3195] */
    (xdc_Char)0x65,  /* [3196] */
    (xdc_Char)0x6e,  /* [3197] */
    (xdc_Char)0x74,  /* [3198] */
    (xdc_Char)0x65,  /* [3199] */
    (xdc_Char)0x72,  /* [3200] */
    (xdc_Char)0x65,  /* [3201] */
    (xdc_Char)0x64,  /* [3202] */
    (xdc_Char)0x20,  /* [3203] */
    (xdc_Char)0x66,  /* [3204] */
    (xdc_Char)0x72,  /* [3205] */
    (xdc_Char)0x6f,  /* [3206] */
    (xdc_Char)0x6d,  /* [3207] */
    (xdc_Char)0x20,  /* [3208] */
    (xdc_Char)0x61,  /* [3209] */
    (xdc_Char)0x20,  /* [3210] */
    (xdc_Char)0x73,  /* [3211] */
    (xdc_Char)0x6f,  /* [3212] */
    (xdc_Char)0x66,  /* [3213] */
    (xdc_Char)0x74,  /* [3214] */
    (xdc_Char)0x77,  /* [3215] */
    (xdc_Char)0x61,  /* [3216] */
    (xdc_Char)0x72,  /* [3217] */
    (xdc_Char)0x65,  /* [3218] */
    (xdc_Char)0x20,  /* [3219] */
    (xdc_Char)0x6f,  /* [3220] */
    (xdc_Char)0x72,  /* [3221] */
    (xdc_Char)0x20,  /* [3222] */
    (xdc_Char)0x68,  /* [3223] */
    (xdc_Char)0x61,  /* [3224] */
    (xdc_Char)0x72,  /* [3225] */
    (xdc_Char)0x64,  /* [3226] */
    (xdc_Char)0x77,  /* [3227] */
    (xdc_Char)0x61,  /* [3228] */
    (xdc_Char)0x72,  /* [3229] */
    (xdc_Char)0x65,  /* [3230] */
    (xdc_Char)0x20,  /* [3231] */
    (xdc_Char)0x69,  /* [3232] */
    (xdc_Char)0x6e,  /* [3233] */
    (xdc_Char)0x74,  /* [3234] */
    (xdc_Char)0x65,  /* [3235] */
    (xdc_Char)0x72,  /* [3236] */
    (xdc_Char)0x72,  /* [3237] */
    (xdc_Char)0x75,  /* [3238] */
    (xdc_Char)0x70,  /* [3239] */
    (xdc_Char)0x74,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x74,  /* [3242] */
    (xdc_Char)0x68,  /* [3243] */
    (xdc_Char)0x72,  /* [3244] */
    (xdc_Char)0x65,  /* [3245] */
    (xdc_Char)0x61,  /* [3246] */
    (xdc_Char)0x64,  /* [3247] */
    (xdc_Char)0x2e,  /* [3248] */
    (xdc_Char)0x0,  /* [3249] */
    (xdc_Char)0x41,  /* [3250] */
    (xdc_Char)0x5f,  /* [3251] */
    (xdc_Char)0x62,  /* [3252] */
    (xdc_Char)0x61,  /* [3253] */
    (xdc_Char)0x64,  /* [3254] */
    (xdc_Char)0x43,  /* [3255] */
    (xdc_Char)0x6f,  /* [3256] */
    (xdc_Char)0x6e,  /* [3257] */
    (xdc_Char)0x74,  /* [3258] */
    (xdc_Char)0x65,  /* [3259] */
    (xdc_Char)0x78,  /* [3260] */
    (xdc_Char)0x74,  /* [3261] */
    (xdc_Char)0x3a,  /* [3262] */
    (xdc_Char)0x20,  /* [3263] */
    (xdc_Char)0x62,  /* [3264] */
    (xdc_Char)0x61,  /* [3265] */
    (xdc_Char)0x64,  /* [3266] */
    (xdc_Char)0x20,  /* [3267] */
    (xdc_Char)0x63,  /* [3268] */
    (xdc_Char)0x61,  /* [3269] */
    (xdc_Char)0x6c,  /* [3270] */
    (xdc_Char)0x6c,  /* [3271] */
    (xdc_Char)0x69,  /* [3272] */
    (xdc_Char)0x6e,  /* [3273] */
    (xdc_Char)0x67,  /* [3274] */
    (xdc_Char)0x20,  /* [3275] */
    (xdc_Char)0x63,  /* [3276] */
    (xdc_Char)0x6f,  /* [3277] */
    (xdc_Char)0x6e,  /* [3278] */
    (xdc_Char)0x74,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x78,  /* [3281] */
    (xdc_Char)0x74,  /* [3282] */
    (xdc_Char)0x2e,  /* [3283] */
    (xdc_Char)0x20,  /* [3284] */
    (xdc_Char)0x53,  /* [3285] */
    (xdc_Char)0x65,  /* [3286] */
    (xdc_Char)0x65,  /* [3287] */
    (xdc_Char)0x20,  /* [3288] */
    (xdc_Char)0x47,  /* [3289] */
    (xdc_Char)0x61,  /* [3290] */
    (xdc_Char)0x74,  /* [3291] */
    (xdc_Char)0x65,  /* [3292] */
    (xdc_Char)0x4d,  /* [3293] */
    (xdc_Char)0x75,  /* [3294] */
    (xdc_Char)0x74,  /* [3295] */
    (xdc_Char)0x65,  /* [3296] */
    (xdc_Char)0x78,  /* [3297] */
    (xdc_Char)0x50,  /* [3298] */
    (xdc_Char)0x72,  /* [3299] */
    (xdc_Char)0x69,  /* [3300] */
    (xdc_Char)0x20,  /* [3301] */
    (xdc_Char)0x41,  /* [3302] */
    (xdc_Char)0x50,  /* [3303] */
    (xdc_Char)0x49,  /* [3304] */
    (xdc_Char)0x20,  /* [3305] */
    (xdc_Char)0x64,  /* [3306] */
    (xdc_Char)0x6f,  /* [3307] */
    (xdc_Char)0x63,  /* [3308] */
    (xdc_Char)0x20,  /* [3309] */
    (xdc_Char)0x66,  /* [3310] */
    (xdc_Char)0x6f,  /* [3311] */
    (xdc_Char)0x72,  /* [3312] */
    (xdc_Char)0x20,  /* [3313] */
    (xdc_Char)0x64,  /* [3314] */
    (xdc_Char)0x65,  /* [3315] */
    (xdc_Char)0x74,  /* [3316] */
    (xdc_Char)0x61,  /* [3317] */
    (xdc_Char)0x69,  /* [3318] */
    (xdc_Char)0x6c,  /* [3319] */
    (xdc_Char)0x73,  /* [3320] */
    (xdc_Char)0x2e,  /* [3321] */
    (xdc_Char)0x0,  /* [3322] */
    (xdc_Char)0x41,  /* [3323] */
    (xdc_Char)0x5f,  /* [3324] */
    (xdc_Char)0x65,  /* [3325] */
    (xdc_Char)0x6e,  /* [3326] */
    (xdc_Char)0x74,  /* [3327] */
    (xdc_Char)0x65,  /* [3328] */
    (xdc_Char)0x72,  /* [3329] */
    (xdc_Char)0x54,  /* [3330] */
    (xdc_Char)0x61,  /* [3331] */
    (xdc_Char)0x73,  /* [3332] */
    (xdc_Char)0x6b,  /* [3333] */
    (xdc_Char)0x44,  /* [3334] */
    (xdc_Char)0x69,  /* [3335] */
    (xdc_Char)0x73,  /* [3336] */
    (xdc_Char)0x61,  /* [3337] */
    (xdc_Char)0x62,  /* [3338] */
    (xdc_Char)0x6c,  /* [3339] */
    (xdc_Char)0x65,  /* [3340] */
    (xdc_Char)0x64,  /* [3341] */
    (xdc_Char)0x3a,  /* [3342] */
    (xdc_Char)0x20,  /* [3343] */
    (xdc_Char)0x43,  /* [3344] */
    (xdc_Char)0x61,  /* [3345] */
    (xdc_Char)0x6e,  /* [3346] */
    (xdc_Char)0x6e,  /* [3347] */
    (xdc_Char)0x6f,  /* [3348] */
    (xdc_Char)0x74,  /* [3349] */
    (xdc_Char)0x20,  /* [3350] */
    (xdc_Char)0x63,  /* [3351] */
    (xdc_Char)0x61,  /* [3352] */
    (xdc_Char)0x6c,  /* [3353] */
    (xdc_Char)0x6c,  /* [3354] */
    (xdc_Char)0x20,  /* [3355] */
    (xdc_Char)0x47,  /* [3356] */
    (xdc_Char)0x61,  /* [3357] */
    (xdc_Char)0x74,  /* [3358] */
    (xdc_Char)0x65,  /* [3359] */
    (xdc_Char)0x4d,  /* [3360] */
    (xdc_Char)0x75,  /* [3361] */
    (xdc_Char)0x74,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x78,  /* [3364] */
    (xdc_Char)0x50,  /* [3365] */
    (xdc_Char)0x72,  /* [3366] */
    (xdc_Char)0x69,  /* [3367] */
    (xdc_Char)0x5f,  /* [3368] */
    (xdc_Char)0x65,  /* [3369] */
    (xdc_Char)0x6e,  /* [3370] */
    (xdc_Char)0x74,  /* [3371] */
    (xdc_Char)0x65,  /* [3372] */
    (xdc_Char)0x72,  /* [3373] */
    (xdc_Char)0x28,  /* [3374] */
    (xdc_Char)0x29,  /* [3375] */
    (xdc_Char)0x20,  /* [3376] */
    (xdc_Char)0x77,  /* [3377] */
    (xdc_Char)0x68,  /* [3378] */
    (xdc_Char)0x69,  /* [3379] */
    (xdc_Char)0x6c,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x74,  /* [3383] */
    (xdc_Char)0x68,  /* [3384] */
    (xdc_Char)0x65,  /* [3385] */
    (xdc_Char)0x20,  /* [3386] */
    (xdc_Char)0x54,  /* [3387] */
    (xdc_Char)0x61,  /* [3388] */
    (xdc_Char)0x73,  /* [3389] */
    (xdc_Char)0x6b,  /* [3390] */
    (xdc_Char)0x20,  /* [3391] */
    (xdc_Char)0x6f,  /* [3392] */
    (xdc_Char)0x72,  /* [3393] */
    (xdc_Char)0x20,  /* [3394] */
    (xdc_Char)0x53,  /* [3395] */
    (xdc_Char)0x77,  /* [3396] */
    (xdc_Char)0x69,  /* [3397] */
    (xdc_Char)0x20,  /* [3398] */
    (xdc_Char)0x73,  /* [3399] */
    (xdc_Char)0x63,  /* [3400] */
    (xdc_Char)0x68,  /* [3401] */
    (xdc_Char)0x65,  /* [3402] */
    (xdc_Char)0x64,  /* [3403] */
    (xdc_Char)0x75,  /* [3404] */
    (xdc_Char)0x6c,  /* [3405] */
    (xdc_Char)0x65,  /* [3406] */
    (xdc_Char)0x72,  /* [3407] */
    (xdc_Char)0x20,  /* [3408] */
    (xdc_Char)0x69,  /* [3409] */
    (xdc_Char)0x73,  /* [3410] */
    (xdc_Char)0x20,  /* [3411] */
    (xdc_Char)0x64,  /* [3412] */
    (xdc_Char)0x69,  /* [3413] */
    (xdc_Char)0x73,  /* [3414] */
    (xdc_Char)0x61,  /* [3415] */
    (xdc_Char)0x62,  /* [3416] */
    (xdc_Char)0x6c,  /* [3417] */
    (xdc_Char)0x65,  /* [3418] */
    (xdc_Char)0x64,  /* [3419] */
    (xdc_Char)0x2e,  /* [3420] */
    (xdc_Char)0x0,  /* [3421] */
    (xdc_Char)0x41,  /* [3422] */
    (xdc_Char)0x5f,  /* [3423] */
    (xdc_Char)0x62,  /* [3424] */
    (xdc_Char)0x61,  /* [3425] */
    (xdc_Char)0x64,  /* [3426] */
    (xdc_Char)0x43,  /* [3427] */
    (xdc_Char)0x6f,  /* [3428] */
    (xdc_Char)0x6e,  /* [3429] */
    (xdc_Char)0x74,  /* [3430] */
    (xdc_Char)0x65,  /* [3431] */
    (xdc_Char)0x78,  /* [3432] */
    (xdc_Char)0x74,  /* [3433] */
    (xdc_Char)0x3a,  /* [3434] */
    (xdc_Char)0x20,  /* [3435] */
    (xdc_Char)0x62,  /* [3436] */
    (xdc_Char)0x61,  /* [3437] */
    (xdc_Char)0x64,  /* [3438] */
    (xdc_Char)0x20,  /* [3439] */
    (xdc_Char)0x63,  /* [3440] */
    (xdc_Char)0x61,  /* [3441] */
    (xdc_Char)0x6c,  /* [3442] */
    (xdc_Char)0x6c,  /* [3443] */
    (xdc_Char)0x69,  /* [3444] */
    (xdc_Char)0x6e,  /* [3445] */
    (xdc_Char)0x67,  /* [3446] */
    (xdc_Char)0x20,  /* [3447] */
    (xdc_Char)0x63,  /* [3448] */
    (xdc_Char)0x6f,  /* [3449] */
    (xdc_Char)0x6e,  /* [3450] */
    (xdc_Char)0x74,  /* [3451] */
    (xdc_Char)0x65,  /* [3452] */
    (xdc_Char)0x78,  /* [3453] */
    (xdc_Char)0x74,  /* [3454] */
    (xdc_Char)0x2e,  /* [3455] */
    (xdc_Char)0x20,  /* [3456] */
    (xdc_Char)0x53,  /* [3457] */
    (xdc_Char)0x65,  /* [3458] */
    (xdc_Char)0x65,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x47,  /* [3461] */
    (xdc_Char)0x61,  /* [3462] */
    (xdc_Char)0x74,  /* [3463] */
    (xdc_Char)0x65,  /* [3464] */
    (xdc_Char)0x4d,  /* [3465] */
    (xdc_Char)0x75,  /* [3466] */
    (xdc_Char)0x74,  /* [3467] */
    (xdc_Char)0x65,  /* [3468] */
    (xdc_Char)0x78,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x41,  /* [3471] */
    (xdc_Char)0x50,  /* [3472] */
    (xdc_Char)0x49,  /* [3473] */
    (xdc_Char)0x20,  /* [3474] */
    (xdc_Char)0x64,  /* [3475] */
    (xdc_Char)0x6f,  /* [3476] */
    (xdc_Char)0x63,  /* [3477] */
    (xdc_Char)0x20,  /* [3478] */
    (xdc_Char)0x66,  /* [3479] */
    (xdc_Char)0x6f,  /* [3480] */
    (xdc_Char)0x72,  /* [3481] */
    (xdc_Char)0x20,  /* [3482] */
    (xdc_Char)0x64,  /* [3483] */
    (xdc_Char)0x65,  /* [3484] */
    (xdc_Char)0x74,  /* [3485] */
    (xdc_Char)0x61,  /* [3486] */
    (xdc_Char)0x69,  /* [3487] */
    (xdc_Char)0x6c,  /* [3488] */
    (xdc_Char)0x73,  /* [3489] */
    (xdc_Char)0x2e,  /* [3490] */
    (xdc_Char)0x0,  /* [3491] */
    (xdc_Char)0x41,  /* [3492] */
    (xdc_Char)0x5f,  /* [3493] */
    (xdc_Char)0x62,  /* [3494] */
    (xdc_Char)0x61,  /* [3495] */
    (xdc_Char)0x64,  /* [3496] */
    (xdc_Char)0x43,  /* [3497] */
    (xdc_Char)0x6f,  /* [3498] */
    (xdc_Char)0x6e,  /* [3499] */
    (xdc_Char)0x74,  /* [3500] */
    (xdc_Char)0x65,  /* [3501] */
    (xdc_Char)0x78,  /* [3502] */
    (xdc_Char)0x74,  /* [3503] */
    (xdc_Char)0x3a,  /* [3504] */
    (xdc_Char)0x20,  /* [3505] */
    (xdc_Char)0x62,  /* [3506] */
    (xdc_Char)0x61,  /* [3507] */
    (xdc_Char)0x64,  /* [3508] */
    (xdc_Char)0x20,  /* [3509] */
    (xdc_Char)0x63,  /* [3510] */
    (xdc_Char)0x61,  /* [3511] */
    (xdc_Char)0x6c,  /* [3512] */
    (xdc_Char)0x6c,  /* [3513] */
    (xdc_Char)0x69,  /* [3514] */
    (xdc_Char)0x6e,  /* [3515] */
    (xdc_Char)0x67,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x63,  /* [3518] */
    (xdc_Char)0x6f,  /* [3519] */
    (xdc_Char)0x6e,  /* [3520] */
    (xdc_Char)0x74,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x78,  /* [3523] */
    (xdc_Char)0x74,  /* [3524] */
    (xdc_Char)0x2e,  /* [3525] */
    (xdc_Char)0x20,  /* [3526] */
    (xdc_Char)0x53,  /* [3527] */
    (xdc_Char)0x65,  /* [3528] */
    (xdc_Char)0x65,  /* [3529] */
    (xdc_Char)0x20,  /* [3530] */
    (xdc_Char)0x47,  /* [3531] */
    (xdc_Char)0x61,  /* [3532] */
    (xdc_Char)0x74,  /* [3533] */
    (xdc_Char)0x65,  /* [3534] */
    (xdc_Char)0x53,  /* [3535] */
    (xdc_Char)0x70,  /* [3536] */
    (xdc_Char)0x69,  /* [3537] */
    (xdc_Char)0x6e,  /* [3538] */
    (xdc_Char)0x6c,  /* [3539] */
    (xdc_Char)0x6f,  /* [3540] */
    (xdc_Char)0x63,  /* [3541] */
    (xdc_Char)0x6b,  /* [3542] */
    (xdc_Char)0x20,  /* [3543] */
    (xdc_Char)0x41,  /* [3544] */
    (xdc_Char)0x50,  /* [3545] */
    (xdc_Char)0x49,  /* [3546] */
    (xdc_Char)0x20,  /* [3547] */
    (xdc_Char)0x64,  /* [3548] */
    (xdc_Char)0x6f,  /* [3549] */
    (xdc_Char)0x63,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x66,  /* [3552] */
    (xdc_Char)0x6f,  /* [3553] */
    (xdc_Char)0x72,  /* [3554] */
    (xdc_Char)0x20,  /* [3555] */
    (xdc_Char)0x64,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x74,  /* [3558] */
    (xdc_Char)0x61,  /* [3559] */
    (xdc_Char)0x69,  /* [3560] */
    (xdc_Char)0x6c,  /* [3561] */
    (xdc_Char)0x73,  /* [3562] */
    (xdc_Char)0x2e,  /* [3563] */
    (xdc_Char)0x0,  /* [3564] */
    (xdc_Char)0x41,  /* [3565] */
    (xdc_Char)0x5f,  /* [3566] */
    (xdc_Char)0x69,  /* [3567] */
    (xdc_Char)0x6e,  /* [3568] */
    (xdc_Char)0x76,  /* [3569] */
    (xdc_Char)0x61,  /* [3570] */
    (xdc_Char)0x6c,  /* [3571] */
    (xdc_Char)0x69,  /* [3572] */
    (xdc_Char)0x64,  /* [3573] */
    (xdc_Char)0x51,  /* [3574] */
    (xdc_Char)0x75,  /* [3575] */
    (xdc_Char)0x61,  /* [3576] */
    (xdc_Char)0x6c,  /* [3577] */
    (xdc_Char)0x69,  /* [3578] */
    (xdc_Char)0x74,  /* [3579] */
    (xdc_Char)0x79,  /* [3580] */
    (xdc_Char)0x3a,  /* [3581] */
    (xdc_Char)0x20,  /* [3582] */
    (xdc_Char)0x53,  /* [3583] */
    (xdc_Char)0x65,  /* [3584] */
    (xdc_Char)0x65,  /* [3585] */
    (xdc_Char)0x20,  /* [3586] */
    (xdc_Char)0x47,  /* [3587] */
    (xdc_Char)0x61,  /* [3588] */
    (xdc_Char)0x74,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x53,  /* [3591] */
    (xdc_Char)0x70,  /* [3592] */
    (xdc_Char)0x69,  /* [3593] */
    (xdc_Char)0x6e,  /* [3594] */
    (xdc_Char)0x6c,  /* [3595] */
    (xdc_Char)0x6f,  /* [3596] */
    (xdc_Char)0x63,  /* [3597] */
    (xdc_Char)0x6b,  /* [3598] */
    (xdc_Char)0x20,  /* [3599] */
    (xdc_Char)0x41,  /* [3600] */
    (xdc_Char)0x50,  /* [3601] */
    (xdc_Char)0x49,  /* [3602] */
    (xdc_Char)0x20,  /* [3603] */
    (xdc_Char)0x64,  /* [3604] */
    (xdc_Char)0x6f,  /* [3605] */
    (xdc_Char)0x63,  /* [3606] */
    (xdc_Char)0x20,  /* [3607] */
    (xdc_Char)0x66,  /* [3608] */
    (xdc_Char)0x6f,  /* [3609] */
    (xdc_Char)0x72,  /* [3610] */
    (xdc_Char)0x20,  /* [3611] */
    (xdc_Char)0x64,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x74,  /* [3614] */
    (xdc_Char)0x61,  /* [3615] */
    (xdc_Char)0x69,  /* [3616] */
    (xdc_Char)0x6c,  /* [3617] */
    (xdc_Char)0x73,  /* [3618] */
    (xdc_Char)0x2e,  /* [3619] */
    (xdc_Char)0x0,  /* [3620] */
    (xdc_Char)0x61,  /* [3621] */
    (xdc_Char)0x73,  /* [3622] */
    (xdc_Char)0x73,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x72,  /* [3625] */
    (xdc_Char)0x74,  /* [3626] */
    (xdc_Char)0x69,  /* [3627] */
    (xdc_Char)0x6f,  /* [3628] */
    (xdc_Char)0x6e,  /* [3629] */
    (xdc_Char)0x20,  /* [3630] */
    (xdc_Char)0x66,  /* [3631] */
    (xdc_Char)0x61,  /* [3632] */
    (xdc_Char)0x69,  /* [3633] */
    (xdc_Char)0x6c,  /* [3634] */
    (xdc_Char)0x75,  /* [3635] */
    (xdc_Char)0x72,  /* [3636] */
    (xdc_Char)0x65,  /* [3637] */
    (xdc_Char)0x25,  /* [3638] */
    (xdc_Char)0x73,  /* [3639] */
    (xdc_Char)0x25,  /* [3640] */
    (xdc_Char)0x73,  /* [3641] */
    (xdc_Char)0x0,  /* [3642] */
    (xdc_Char)0x25,  /* [3643] */
    (xdc_Char)0x24,  /* [3644] */
    (xdc_Char)0x53,  /* [3645] */
    (xdc_Char)0x0,  /* [3646] */
    (xdc_Char)0x6f,  /* [3647] */
    (xdc_Char)0x75,  /* [3648] */
    (xdc_Char)0x74,  /* [3649] */
    (xdc_Char)0x20,  /* [3650] */
    (xdc_Char)0x6f,  /* [3651] */
    (xdc_Char)0x66,  /* [3652] */
    (xdc_Char)0x20,  /* [3653] */
    (xdc_Char)0x6d,  /* [3654] */
    (xdc_Char)0x65,  /* [3655] */
    (xdc_Char)0x6d,  /* [3656] */
    (xdc_Char)0x6f,  /* [3657] */
    (xdc_Char)0x72,  /* [3658] */
    (xdc_Char)0x79,  /* [3659] */
    (xdc_Char)0x3a,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x68,  /* [3662] */
    (xdc_Char)0x65,  /* [3663] */
    (xdc_Char)0x61,  /* [3664] */
    (xdc_Char)0x70,  /* [3665] */
    (xdc_Char)0x3d,  /* [3666] */
    (xdc_Char)0x30,  /* [3667] */
    (xdc_Char)0x78,  /* [3668] */
    (xdc_Char)0x25,  /* [3669] */
    (xdc_Char)0x78,  /* [3670] */
    (xdc_Char)0x2c,  /* [3671] */
    (xdc_Char)0x20,  /* [3672] */
    (xdc_Char)0x73,  /* [3673] */
    (xdc_Char)0x69,  /* [3674] */
    (xdc_Char)0x7a,  /* [3675] */
    (xdc_Char)0x65,  /* [3676] */
    (xdc_Char)0x3d,  /* [3677] */
    (xdc_Char)0x25,  /* [3678] */
    (xdc_Char)0x75,  /* [3679] */
    (xdc_Char)0x0,  /* [3680] */
    (xdc_Char)0x25,  /* [3681] */
    (xdc_Char)0x73,  /* [3682] */
    (xdc_Char)0x20,  /* [3683] */
    (xdc_Char)0x30,  /* [3684] */
    (xdc_Char)0x78,  /* [3685] */
    (xdc_Char)0x25,  /* [3686] */
    (xdc_Char)0x78,  /* [3687] */
    (xdc_Char)0x0,  /* [3688] */
    (xdc_Char)0x45,  /* [3689] */
    (xdc_Char)0x5f,  /* [3690] */
    (xdc_Char)0x62,  /* [3691] */
    (xdc_Char)0x61,  /* [3692] */
    (xdc_Char)0x64,  /* [3693] */
    (xdc_Char)0x4c,  /* [3694] */
    (xdc_Char)0x65,  /* [3695] */
    (xdc_Char)0x76,  /* [3696] */
    (xdc_Char)0x65,  /* [3697] */
    (xdc_Char)0x6c,  /* [3698] */
    (xdc_Char)0x3a,  /* [3699] */
    (xdc_Char)0x20,  /* [3700] */
    (xdc_Char)0x42,  /* [3701] */
    (xdc_Char)0x61,  /* [3702] */
    (xdc_Char)0x64,  /* [3703] */
    (xdc_Char)0x20,  /* [3704] */
    (xdc_Char)0x66,  /* [3705] */
    (xdc_Char)0x69,  /* [3706] */
    (xdc_Char)0x6c,  /* [3707] */
    (xdc_Char)0x74,  /* [3708] */
    (xdc_Char)0x65,  /* [3709] */
    (xdc_Char)0x72,  /* [3710] */
    (xdc_Char)0x20,  /* [3711] */
    (xdc_Char)0x6c,  /* [3712] */
    (xdc_Char)0x65,  /* [3713] */
    (xdc_Char)0x76,  /* [3714] */
    (xdc_Char)0x65,  /* [3715] */
    (xdc_Char)0x6c,  /* [3716] */
    (xdc_Char)0x20,  /* [3717] */
    (xdc_Char)0x76,  /* [3718] */
    (xdc_Char)0x61,  /* [3719] */
    (xdc_Char)0x6c,  /* [3720] */
    (xdc_Char)0x75,  /* [3721] */
    (xdc_Char)0x65,  /* [3722] */
    (xdc_Char)0x3a,  /* [3723] */
    (xdc_Char)0x20,  /* [3724] */
    (xdc_Char)0x25,  /* [3725] */
    (xdc_Char)0x64,  /* [3726] */
    (xdc_Char)0x0,  /* [3727] */
    (xdc_Char)0x66,  /* [3728] */
    (xdc_Char)0x72,  /* [3729] */
    (xdc_Char)0x65,  /* [3730] */
    (xdc_Char)0x65,  /* [3731] */
    (xdc_Char)0x28,  /* [3732] */
    (xdc_Char)0x29,  /* [3733] */
    (xdc_Char)0x20,  /* [3734] */
    (xdc_Char)0x69,  /* [3735] */
    (xdc_Char)0x6e,  /* [3736] */
    (xdc_Char)0x76,  /* [3737] */
    (xdc_Char)0x61,  /* [3738] */
    (xdc_Char)0x6c,  /* [3739] */
    (xdc_Char)0x69,  /* [3740] */
    (xdc_Char)0x64,  /* [3741] */
    (xdc_Char)0x20,  /* [3742] */
    (xdc_Char)0x69,  /* [3743] */
    (xdc_Char)0x6e,  /* [3744] */
    (xdc_Char)0x20,  /* [3745] */
    (xdc_Char)0x67,  /* [3746] */
    (xdc_Char)0x72,  /* [3747] */
    (xdc_Char)0x6f,  /* [3748] */
    (xdc_Char)0x77,  /* [3749] */
    (xdc_Char)0x74,  /* [3750] */
    (xdc_Char)0x68,  /* [3751] */
    (xdc_Char)0x2d,  /* [3752] */
    (xdc_Char)0x6f,  /* [3753] */
    (xdc_Char)0x6e,  /* [3754] */
    (xdc_Char)0x6c,  /* [3755] */
    (xdc_Char)0x79,  /* [3756] */
    (xdc_Char)0x20,  /* [3757] */
    (xdc_Char)0x48,  /* [3758] */
    (xdc_Char)0x65,  /* [3759] */
    (xdc_Char)0x61,  /* [3760] */
    (xdc_Char)0x70,  /* [3761] */
    (xdc_Char)0x4d,  /* [3762] */
    (xdc_Char)0x69,  /* [3763] */
    (xdc_Char)0x6e,  /* [3764] */
    (xdc_Char)0x0,  /* [3765] */
    (xdc_Char)0x54,  /* [3766] */
    (xdc_Char)0x68,  /* [3767] */
    (xdc_Char)0x65,  /* [3768] */
    (xdc_Char)0x20,  /* [3769] */
    (xdc_Char)0x52,  /* [3770] */
    (xdc_Char)0x54,  /* [3771] */
    (xdc_Char)0x53,  /* [3772] */
    (xdc_Char)0x20,  /* [3773] */
    (xdc_Char)0x68,  /* [3774] */
    (xdc_Char)0x65,  /* [3775] */
    (xdc_Char)0x61,  /* [3776] */
    (xdc_Char)0x70,  /* [3777] */
    (xdc_Char)0x20,  /* [3778] */
    (xdc_Char)0x69,  /* [3779] */
    (xdc_Char)0x73,  /* [3780] */
    (xdc_Char)0x20,  /* [3781] */
    (xdc_Char)0x75,  /* [3782] */
    (xdc_Char)0x73,  /* [3783] */
    (xdc_Char)0x65,  /* [3784] */
    (xdc_Char)0x64,  /* [3785] */
    (xdc_Char)0x20,  /* [3786] */
    (xdc_Char)0x75,  /* [3787] */
    (xdc_Char)0x70,  /* [3788] */
    (xdc_Char)0x2e,  /* [3789] */
    (xdc_Char)0x20,  /* [3790] */
    (xdc_Char)0x45,  /* [3791] */
    (xdc_Char)0x78,  /* [3792] */
    (xdc_Char)0x61,  /* [3793] */
    (xdc_Char)0x6d,  /* [3794] */
    (xdc_Char)0x69,  /* [3795] */
    (xdc_Char)0x6e,  /* [3796] */
    (xdc_Char)0x65,  /* [3797] */
    (xdc_Char)0x20,  /* [3798] */
    (xdc_Char)0x50,  /* [3799] */
    (xdc_Char)0x72,  /* [3800] */
    (xdc_Char)0x6f,  /* [3801] */
    (xdc_Char)0x67,  /* [3802] */
    (xdc_Char)0x72,  /* [3803] */
    (xdc_Char)0x61,  /* [3804] */
    (xdc_Char)0x6d,  /* [3805] */
    (xdc_Char)0x2e,  /* [3806] */
    (xdc_Char)0x68,  /* [3807] */
    (xdc_Char)0x65,  /* [3808] */
    (xdc_Char)0x61,  /* [3809] */
    (xdc_Char)0x70,  /* [3810] */
    (xdc_Char)0x2e,  /* [3811] */
    (xdc_Char)0x0,  /* [3812] */
    (xdc_Char)0x45,  /* [3813] */
    (xdc_Char)0x5f,  /* [3814] */
    (xdc_Char)0x62,  /* [3815] */
    (xdc_Char)0x61,  /* [3816] */
    (xdc_Char)0x64,  /* [3817] */
    (xdc_Char)0x43,  /* [3818] */
    (xdc_Char)0x6f,  /* [3819] */
    (xdc_Char)0x6d,  /* [3820] */
    (xdc_Char)0x6d,  /* [3821] */
    (xdc_Char)0x61,  /* [3822] */
    (xdc_Char)0x6e,  /* [3823] */
    (xdc_Char)0x64,  /* [3824] */
    (xdc_Char)0x3a,  /* [3825] */
    (xdc_Char)0x20,  /* [3826] */
    (xdc_Char)0x52,  /* [3827] */
    (xdc_Char)0x65,  /* [3828] */
    (xdc_Char)0x63,  /* [3829] */
    (xdc_Char)0x65,  /* [3830] */
    (xdc_Char)0x69,  /* [3831] */
    (xdc_Char)0x76,  /* [3832] */
    (xdc_Char)0x65,  /* [3833] */
    (xdc_Char)0x64,  /* [3834] */
    (xdc_Char)0x20,  /* [3835] */
    (xdc_Char)0x69,  /* [3836] */
    (xdc_Char)0x6e,  /* [3837] */
    (xdc_Char)0x76,  /* [3838] */
    (xdc_Char)0x61,  /* [3839] */
    (xdc_Char)0x6c,  /* [3840] */
    (xdc_Char)0x69,  /* [3841] */
    (xdc_Char)0x64,  /* [3842] */
    (xdc_Char)0x20,  /* [3843] */
    (xdc_Char)0x63,  /* [3844] */
    (xdc_Char)0x6f,  /* [3845] */
    (xdc_Char)0x6d,  /* [3846] */
    (xdc_Char)0x6d,  /* [3847] */
    (xdc_Char)0x61,  /* [3848] */
    (xdc_Char)0x6e,  /* [3849] */
    (xdc_Char)0x64,  /* [3850] */
    (xdc_Char)0x2c,  /* [3851] */
    (xdc_Char)0x20,  /* [3852] */
    (xdc_Char)0x69,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x3a,  /* [3855] */
    (xdc_Char)0x20,  /* [3856] */
    (xdc_Char)0x25,  /* [3857] */
    (xdc_Char)0x64,  /* [3858] */
    (xdc_Char)0x2e,  /* [3859] */
    (xdc_Char)0x0,  /* [3860] */
    (xdc_Char)0x45,  /* [3861] */
    (xdc_Char)0x5f,  /* [3862] */
    (xdc_Char)0x61,  /* [3863] */
    (xdc_Char)0x6c,  /* [3864] */
    (xdc_Char)0x72,  /* [3865] */
    (xdc_Char)0x65,  /* [3866] */
    (xdc_Char)0x61,  /* [3867] */
    (xdc_Char)0x64,  /* [3868] */
    (xdc_Char)0x79,  /* [3869] */
    (xdc_Char)0x44,  /* [3870] */
    (xdc_Char)0x65,  /* [3871] */
    (xdc_Char)0x66,  /* [3872] */
    (xdc_Char)0x69,  /* [3873] */
    (xdc_Char)0x6e,  /* [3874] */
    (xdc_Char)0x65,  /* [3875] */
    (xdc_Char)0x64,  /* [3876] */
    (xdc_Char)0x3a,  /* [3877] */
    (xdc_Char)0x20,  /* [3878] */
    (xdc_Char)0x48,  /* [3879] */
    (xdc_Char)0x77,  /* [3880] */
    (xdc_Char)0x69,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x61,  /* [3883] */
    (xdc_Char)0x6c,  /* [3884] */
    (xdc_Char)0x72,  /* [3885] */
    (xdc_Char)0x65,  /* [3886] */
    (xdc_Char)0x61,  /* [3887] */
    (xdc_Char)0x64,  /* [3888] */
    (xdc_Char)0x79,  /* [3889] */
    (xdc_Char)0x20,  /* [3890] */
    (xdc_Char)0x64,  /* [3891] */
    (xdc_Char)0x65,  /* [3892] */
    (xdc_Char)0x66,  /* [3893] */
    (xdc_Char)0x69,  /* [3894] */
    (xdc_Char)0x6e,  /* [3895] */
    (xdc_Char)0x65,  /* [3896] */
    (xdc_Char)0x64,  /* [3897] */
    (xdc_Char)0x3a,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x69,  /* [3900] */
    (xdc_Char)0x6e,  /* [3901] */
    (xdc_Char)0x74,  /* [3902] */
    (xdc_Char)0x72,  /* [3903] */
    (xdc_Char)0x23,  /* [3904] */
    (xdc_Char)0x20,  /* [3905] */
    (xdc_Char)0x25,  /* [3906] */
    (xdc_Char)0x64,  /* [3907] */
    (xdc_Char)0x0,  /* [3908] */
    (xdc_Char)0x45,  /* [3909] */
    (xdc_Char)0x5f,  /* [3910] */
    (xdc_Char)0x6e,  /* [3911] */
    (xdc_Char)0x6f,  /* [3912] */
    (xdc_Char)0x74,  /* [3913] */
    (xdc_Char)0x49,  /* [3914] */
    (xdc_Char)0x6d,  /* [3915] */
    (xdc_Char)0x70,  /* [3916] */
    (xdc_Char)0x6c,  /* [3917] */
    (xdc_Char)0x65,  /* [3918] */
    (xdc_Char)0x6d,  /* [3919] */
    (xdc_Char)0x65,  /* [3920] */
    (xdc_Char)0x6e,  /* [3921] */
    (xdc_Char)0x74,  /* [3922] */
    (xdc_Char)0x65,  /* [3923] */
    (xdc_Char)0x64,  /* [3924] */
    (xdc_Char)0x3a,  /* [3925] */
    (xdc_Char)0x20,  /* [3926] */
    (xdc_Char)0x46,  /* [3927] */
    (xdc_Char)0x75,  /* [3928] */
    (xdc_Char)0x6e,  /* [3929] */
    (xdc_Char)0x63,  /* [3930] */
    (xdc_Char)0x74,  /* [3931] */
    (xdc_Char)0x69,  /* [3932] */
    (xdc_Char)0x6f,  /* [3933] */
    (xdc_Char)0x6e,  /* [3934] */
    (xdc_Char)0x20,  /* [3935] */
    (xdc_Char)0x6e,  /* [3936] */
    (xdc_Char)0x6f,  /* [3937] */
    (xdc_Char)0x74,  /* [3938] */
    (xdc_Char)0x20,  /* [3939] */
    (xdc_Char)0x69,  /* [3940] */
    (xdc_Char)0x6d,  /* [3941] */
    (xdc_Char)0x70,  /* [3942] */
    (xdc_Char)0x6c,  /* [3943] */
    (xdc_Char)0x65,  /* [3944] */
    (xdc_Char)0x6d,  /* [3945] */
    (xdc_Char)0x65,  /* [3946] */
    (xdc_Char)0x6e,  /* [3947] */
    (xdc_Char)0x74,  /* [3948] */
    (xdc_Char)0x65,  /* [3949] */
    (xdc_Char)0x64,  /* [3950] */
    (xdc_Char)0x3a,  /* [3951] */
    (xdc_Char)0x20,  /* [3952] */
    (xdc_Char)0x25,  /* [3953] */
    (xdc_Char)0x73,  /* [3954] */
    (xdc_Char)0x0,  /* [3955] */
    (xdc_Char)0x45,  /* [3956] */
    (xdc_Char)0x5f,  /* [3957] */
    (xdc_Char)0x69,  /* [3958] */
    (xdc_Char)0x6e,  /* [3959] */
    (xdc_Char)0x76,  /* [3960] */
    (xdc_Char)0x61,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x69,  /* [3963] */
    (xdc_Char)0x64,  /* [3964] */
    (xdc_Char)0x54,  /* [3965] */
    (xdc_Char)0x69,  /* [3966] */
    (xdc_Char)0x6d,  /* [3967] */
    (xdc_Char)0x65,  /* [3968] */
    (xdc_Char)0x72,  /* [3969] */
    (xdc_Char)0x3a,  /* [3970] */
    (xdc_Char)0x20,  /* [3971] */
    (xdc_Char)0x49,  /* [3972] */
    (xdc_Char)0x6e,  /* [3973] */
    (xdc_Char)0x76,  /* [3974] */
    (xdc_Char)0x61,  /* [3975] */
    (xdc_Char)0x6c,  /* [3976] */
    (xdc_Char)0x69,  /* [3977] */
    (xdc_Char)0x64,  /* [3978] */
    (xdc_Char)0x20,  /* [3979] */
    (xdc_Char)0x54,  /* [3980] */
    (xdc_Char)0x69,  /* [3981] */
    (xdc_Char)0x6d,  /* [3982] */
    (xdc_Char)0x65,  /* [3983] */
    (xdc_Char)0x72,  /* [3984] */
    (xdc_Char)0x20,  /* [3985] */
    (xdc_Char)0x49,  /* [3986] */
    (xdc_Char)0x64,  /* [3987] */
    (xdc_Char)0x20,  /* [3988] */
    (xdc_Char)0x25,  /* [3989] */
    (xdc_Char)0x64,  /* [3990] */
    (xdc_Char)0x0,  /* [3991] */
    (xdc_Char)0x45,  /* [3992] */
    (xdc_Char)0x5f,  /* [3993] */
    (xdc_Char)0x6e,  /* [3994] */
    (xdc_Char)0x6f,  /* [3995] */
    (xdc_Char)0x74,  /* [3996] */
    (xdc_Char)0x41,  /* [3997] */
    (xdc_Char)0x76,  /* [3998] */
    (xdc_Char)0x61,  /* [3999] */
    (xdc_Char)0x69,  /* [4000] */
    (xdc_Char)0x6c,  /* [4001] */
    (xdc_Char)0x61,  /* [4002] */
    (xdc_Char)0x62,  /* [4003] */
    (xdc_Char)0x6c,  /* [4004] */
    (xdc_Char)0x65,  /* [4005] */
    (xdc_Char)0x3a,  /* [4006] */
    (xdc_Char)0x20,  /* [4007] */
    (xdc_Char)0x54,  /* [4008] */
    (xdc_Char)0x69,  /* [4009] */
    (xdc_Char)0x6d,  /* [4010] */
    (xdc_Char)0x65,  /* [4011] */
    (xdc_Char)0x72,  /* [4012] */
    (xdc_Char)0x20,  /* [4013] */
    (xdc_Char)0x6e,  /* [4014] */
    (xdc_Char)0x6f,  /* [4015] */
    (xdc_Char)0x74,  /* [4016] */
    (xdc_Char)0x20,  /* [4017] */
    (xdc_Char)0x61,  /* [4018] */
    (xdc_Char)0x76,  /* [4019] */
    (xdc_Char)0x61,  /* [4020] */
    (xdc_Char)0x69,  /* [4021] */
    (xdc_Char)0x6c,  /* [4022] */
    (xdc_Char)0x61,  /* [4023] */
    (xdc_Char)0x62,  /* [4024] */
    (xdc_Char)0x6c,  /* [4025] */
    (xdc_Char)0x65,  /* [4026] */
    (xdc_Char)0x20,  /* [4027] */
    (xdc_Char)0x25,  /* [4028] */
    (xdc_Char)0x64,  /* [4029] */
    (xdc_Char)0x0,  /* [4030] */
    (xdc_Char)0x45,  /* [4031] */
    (xdc_Char)0x5f,  /* [4032] */
    (xdc_Char)0x63,  /* [4033] */
    (xdc_Char)0x61,  /* [4034] */
    (xdc_Char)0x6e,  /* [4035] */
    (xdc_Char)0x6e,  /* [4036] */
    (xdc_Char)0x6f,  /* [4037] */
    (xdc_Char)0x74,  /* [4038] */
    (xdc_Char)0x53,  /* [4039] */
    (xdc_Char)0x75,  /* [4040] */
    (xdc_Char)0x70,  /* [4041] */
    (xdc_Char)0x70,  /* [4042] */
    (xdc_Char)0x6f,  /* [4043] */
    (xdc_Char)0x72,  /* [4044] */
    (xdc_Char)0x74,  /* [4045] */
    (xdc_Char)0x3a,  /* [4046] */
    (xdc_Char)0x20,  /* [4047] */
    (xdc_Char)0x54,  /* [4048] */
    (xdc_Char)0x69,  /* [4049] */
    (xdc_Char)0x6d,  /* [4050] */
    (xdc_Char)0x65,  /* [4051] */
    (xdc_Char)0x72,  /* [4052] */
    (xdc_Char)0x20,  /* [4053] */
    (xdc_Char)0x63,  /* [4054] */
    (xdc_Char)0x61,  /* [4055] */
    (xdc_Char)0x6e,  /* [4056] */
    (xdc_Char)0x6e,  /* [4057] */
    (xdc_Char)0x6f,  /* [4058] */
    (xdc_Char)0x74,  /* [4059] */
    (xdc_Char)0x20,  /* [4060] */
    (xdc_Char)0x73,  /* [4061] */
    (xdc_Char)0x75,  /* [4062] */
    (xdc_Char)0x70,  /* [4063] */
    (xdc_Char)0x70,  /* [4064] */
    (xdc_Char)0x6f,  /* [4065] */
    (xdc_Char)0x72,  /* [4066] */
    (xdc_Char)0x74,  /* [4067] */
    (xdc_Char)0x20,  /* [4068] */
    (xdc_Char)0x72,  /* [4069] */
    (xdc_Char)0x65,  /* [4070] */
    (xdc_Char)0x71,  /* [4071] */
    (xdc_Char)0x75,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x73,  /* [4074] */
    (xdc_Char)0x74,  /* [4075] */
    (xdc_Char)0x65,  /* [4076] */
    (xdc_Char)0x64,  /* [4077] */
    (xdc_Char)0x20,  /* [4078] */
    (xdc_Char)0x70,  /* [4079] */
    (xdc_Char)0x65,  /* [4080] */
    (xdc_Char)0x72,  /* [4081] */
    (xdc_Char)0x69,  /* [4082] */
    (xdc_Char)0x6f,  /* [4083] */
    (xdc_Char)0x64,  /* [4084] */
    (xdc_Char)0x20,  /* [4085] */
    (xdc_Char)0x25,  /* [4086] */
    (xdc_Char)0x64,  /* [4087] */
    (xdc_Char)0x0,  /* [4088] */
    (xdc_Char)0x45,  /* [4089] */
    (xdc_Char)0x5f,  /* [4090] */
    (xdc_Char)0x72,  /* [4091] */
    (xdc_Char)0x75,  /* [4092] */
    (xdc_Char)0x6e,  /* [4093] */
    (xdc_Char)0x74,  /* [4094] */
    (xdc_Char)0x69,  /* [4095] */
    (xdc_Char)0x6d,  /* [4096] */
    (xdc_Char)0x65,  /* [4097] */
    (xdc_Char)0x43,  /* [4098] */
    (xdc_Char)0x72,  /* [4099] */
    (xdc_Char)0x65,  /* [4100] */
    (xdc_Char)0x61,  /* [4101] */
    (xdc_Char)0x74,  /* [4102] */
    (xdc_Char)0x65,  /* [4103] */
    (xdc_Char)0x3a,  /* [4104] */
    (xdc_Char)0x20,  /* [4105] */
    (xdc_Char)0x52,  /* [4106] */
    (xdc_Char)0x75,  /* [4107] */
    (xdc_Char)0x6e,  /* [4108] */
    (xdc_Char)0x74,  /* [4109] */
    (xdc_Char)0x69,  /* [4110] */
    (xdc_Char)0x6d,  /* [4111] */
    (xdc_Char)0x65,  /* [4112] */
    (xdc_Char)0x20,  /* [4113] */
    (xdc_Char)0x54,  /* [4114] */
    (xdc_Char)0x69,  /* [4115] */
    (xdc_Char)0x6d,  /* [4116] */
    (xdc_Char)0x65,  /* [4117] */
    (xdc_Char)0x72,  /* [4118] */
    (xdc_Char)0x20,  /* [4119] */
    (xdc_Char)0x63,  /* [4120] */
    (xdc_Char)0x72,  /* [4121] */
    (xdc_Char)0x65,  /* [4122] */
    (xdc_Char)0x61,  /* [4123] */
    (xdc_Char)0x74,  /* [4124] */
    (xdc_Char)0x65,  /* [4125] */
    (xdc_Char)0x20,  /* [4126] */
    (xdc_Char)0x69,  /* [4127] */
    (xdc_Char)0x73,  /* [4128] */
    (xdc_Char)0x20,  /* [4129] */
    (xdc_Char)0x6e,  /* [4130] */
    (xdc_Char)0x6f,  /* [4131] */
    (xdc_Char)0x74,  /* [4132] */
    (xdc_Char)0x20,  /* [4133] */
    (xdc_Char)0x73,  /* [4134] */
    (xdc_Char)0x75,  /* [4135] */
    (xdc_Char)0x70,  /* [4136] */
    (xdc_Char)0x70,  /* [4137] */
    (xdc_Char)0x6f,  /* [4138] */
    (xdc_Char)0x72,  /* [4139] */
    (xdc_Char)0x74,  /* [4140] */
    (xdc_Char)0x65,  /* [4141] */
    (xdc_Char)0x64,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x25,  /* [4144] */
    (xdc_Char)0x64,  /* [4145] */
    (xdc_Char)0x0,  /* [4146] */
    (xdc_Char)0x45,  /* [4147] */
    (xdc_Char)0x5f,  /* [4148] */
    (xdc_Char)0x64,  /* [4149] */
    (xdc_Char)0x79,  /* [4150] */
    (xdc_Char)0x6e,  /* [4151] */
    (xdc_Char)0x61,  /* [4152] */
    (xdc_Char)0x6d,  /* [4153] */
    (xdc_Char)0x69,  /* [4154] */
    (xdc_Char)0x63,  /* [4155] */
    (xdc_Char)0x4d,  /* [4156] */
    (xdc_Char)0x6f,  /* [4157] */
    (xdc_Char)0x64,  /* [4158] */
    (xdc_Char)0x65,  /* [4159] */
    (xdc_Char)0x4e,  /* [4160] */
    (xdc_Char)0x6f,  /* [4161] */
    (xdc_Char)0x74,  /* [4162] */
    (xdc_Char)0x41,  /* [4163] */
    (xdc_Char)0x6c,  /* [4164] */
    (xdc_Char)0x6c,  /* [4165] */
    (xdc_Char)0x6f,  /* [4166] */
    (xdc_Char)0x77,  /* [4167] */
    (xdc_Char)0x65,  /* [4168] */
    (xdc_Char)0x64,  /* [4169] */
    (xdc_Char)0x3a,  /* [4170] */
    (xdc_Char)0x20,  /* [4171] */
    (xdc_Char)0x44,  /* [4172] */
    (xdc_Char)0x79,  /* [4173] */
    (xdc_Char)0x6e,  /* [4174] */
    (xdc_Char)0x61,  /* [4175] */
    (xdc_Char)0x6d,  /* [4176] */
    (xdc_Char)0x69,  /* [4177] */
    (xdc_Char)0x63,  /* [4178] */
    (xdc_Char)0x20,  /* [4179] */
    (xdc_Char)0x6d,  /* [4180] */
    (xdc_Char)0x6f,  /* [4181] */
    (xdc_Char)0x64,  /* [4182] */
    (xdc_Char)0x65,  /* [4183] */
    (xdc_Char)0x20,  /* [4184] */
    (xdc_Char)0x69,  /* [4185] */
    (xdc_Char)0x73,  /* [4186] */
    (xdc_Char)0x20,  /* [4187] */
    (xdc_Char)0x6e,  /* [4188] */
    (xdc_Char)0x6f,  /* [4189] */
    (xdc_Char)0x74,  /* [4190] */
    (xdc_Char)0x20,  /* [4191] */
    (xdc_Char)0x65,  /* [4192] */
    (xdc_Char)0x6e,  /* [4193] */
    (xdc_Char)0x61,  /* [4194] */
    (xdc_Char)0x62,  /* [4195] */
    (xdc_Char)0x6c,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x64,  /* [4198] */
    (xdc_Char)0x20,  /* [4199] */
    (xdc_Char)0x28,  /* [4200] */
    (xdc_Char)0x61,  /* [4201] */
    (xdc_Char)0x6c,  /* [4202] */
    (xdc_Char)0x6c,  /* [4203] */
    (xdc_Char)0x6f,  /* [4204] */
    (xdc_Char)0x77,  /* [4205] */
    (xdc_Char)0x44,  /* [4206] */
    (xdc_Char)0x79,  /* [4207] */
    (xdc_Char)0x6e,  /* [4208] */
    (xdc_Char)0x61,  /* [4209] */
    (xdc_Char)0x6d,  /* [4210] */
    (xdc_Char)0x69,  /* [4211] */
    (xdc_Char)0x63,  /* [4212] */
    (xdc_Char)0x4d,  /* [4213] */
    (xdc_Char)0x6f,  /* [4214] */
    (xdc_Char)0x64,  /* [4215] */
    (xdc_Char)0x65,  /* [4216] */
    (xdc_Char)0x3d,  /* [4217] */
    (xdc_Char)0x66,  /* [4218] */
    (xdc_Char)0x61,  /* [4219] */
    (xdc_Char)0x6c,  /* [4220] */
    (xdc_Char)0x73,  /* [4221] */
    (xdc_Char)0x65,  /* [4222] */
    (xdc_Char)0x29,  /* [4223] */
    (xdc_Char)0x0,  /* [4224] */
    (xdc_Char)0x45,  /* [4225] */
    (xdc_Char)0x5f,  /* [4226] */
    (xdc_Char)0x73,  /* [4227] */
    (xdc_Char)0x74,  /* [4228] */
    (xdc_Char)0x61,  /* [4229] */
    (xdc_Char)0x63,  /* [4230] */
    (xdc_Char)0x6b,  /* [4231] */
    (xdc_Char)0x4f,  /* [4232] */
    (xdc_Char)0x76,  /* [4233] */
    (xdc_Char)0x65,  /* [4234] */
    (xdc_Char)0x72,  /* [4235] */
    (xdc_Char)0x66,  /* [4236] */
    (xdc_Char)0x6c,  /* [4237] */
    (xdc_Char)0x6f,  /* [4238] */
    (xdc_Char)0x77,  /* [4239] */
    (xdc_Char)0x3a,  /* [4240] */
    (xdc_Char)0x20,  /* [4241] */
    (xdc_Char)0x54,  /* [4242] */
    (xdc_Char)0x61,  /* [4243] */
    (xdc_Char)0x73,  /* [4244] */
    (xdc_Char)0x6b,  /* [4245] */
    (xdc_Char)0x20,  /* [4246] */
    (xdc_Char)0x30,  /* [4247] */
    (xdc_Char)0x78,  /* [4248] */
    (xdc_Char)0x25,  /* [4249] */
    (xdc_Char)0x78,  /* [4250] */
    (xdc_Char)0x20,  /* [4251] */
    (xdc_Char)0x73,  /* [4252] */
    (xdc_Char)0x74,  /* [4253] */
    (xdc_Char)0x61,  /* [4254] */
    (xdc_Char)0x63,  /* [4255] */
    (xdc_Char)0x6b,  /* [4256] */
    (xdc_Char)0x20,  /* [4257] */
    (xdc_Char)0x6f,  /* [4258] */
    (xdc_Char)0x76,  /* [4259] */
    (xdc_Char)0x65,  /* [4260] */
    (xdc_Char)0x72,  /* [4261] */
    (xdc_Char)0x66,  /* [4262] */
    (xdc_Char)0x6c,  /* [4263] */
    (xdc_Char)0x6f,  /* [4264] */
    (xdc_Char)0x77,  /* [4265] */
    (xdc_Char)0x2e,  /* [4266] */
    (xdc_Char)0x0,  /* [4267] */
    (xdc_Char)0x45,  /* [4268] */
    (xdc_Char)0x5f,  /* [4269] */
    (xdc_Char)0x73,  /* [4270] */
    (xdc_Char)0x70,  /* [4271] */
    (xdc_Char)0x4f,  /* [4272] */
    (xdc_Char)0x75,  /* [4273] */
    (xdc_Char)0x74,  /* [4274] */
    (xdc_Char)0x4f,  /* [4275] */
    (xdc_Char)0x66,  /* [4276] */
    (xdc_Char)0x42,  /* [4277] */
    (xdc_Char)0x6f,  /* [4278] */
    (xdc_Char)0x75,  /* [4279] */
    (xdc_Char)0x6e,  /* [4280] */
    (xdc_Char)0x64,  /* [4281] */
    (xdc_Char)0x73,  /* [4282] */
    (xdc_Char)0x3a,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x54,  /* [4285] */
    (xdc_Char)0x61,  /* [4286] */
    (xdc_Char)0x73,  /* [4287] */
    (xdc_Char)0x6b,  /* [4288] */
    (xdc_Char)0x20,  /* [4289] */
    (xdc_Char)0x30,  /* [4290] */
    (xdc_Char)0x78,  /* [4291] */
    (xdc_Char)0x25,  /* [4292] */
    (xdc_Char)0x78,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x73,  /* [4295] */
    (xdc_Char)0x74,  /* [4296] */
    (xdc_Char)0x61,  /* [4297] */
    (xdc_Char)0x63,  /* [4298] */
    (xdc_Char)0x6b,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x65,  /* [4301] */
    (xdc_Char)0x72,  /* [4302] */
    (xdc_Char)0x72,  /* [4303] */
    (xdc_Char)0x6f,  /* [4304] */
    (xdc_Char)0x72,  /* [4305] */
    (xdc_Char)0x2c,  /* [4306] */
    (xdc_Char)0x20,  /* [4307] */
    (xdc_Char)0x53,  /* [4308] */
    (xdc_Char)0x50,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x3d,  /* [4311] */
    (xdc_Char)0x20,  /* [4312] */
    (xdc_Char)0x30,  /* [4313] */
    (xdc_Char)0x78,  /* [4314] */
    (xdc_Char)0x25,  /* [4315] */
    (xdc_Char)0x78,  /* [4316] */
    (xdc_Char)0x2e,  /* [4317] */
    (xdc_Char)0x0,  /* [4318] */
    (xdc_Char)0x45,  /* [4319] */
    (xdc_Char)0x5f,  /* [4320] */
    (xdc_Char)0x64,  /* [4321] */
    (xdc_Char)0x65,  /* [4322] */
    (xdc_Char)0x6c,  /* [4323] */
    (xdc_Char)0x65,  /* [4324] */
    (xdc_Char)0x74,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x4e,  /* [4327] */
    (xdc_Char)0x6f,  /* [4328] */
    (xdc_Char)0x74,  /* [4329] */
    (xdc_Char)0x41,  /* [4330] */
    (xdc_Char)0x6c,  /* [4331] */
    (xdc_Char)0x6c,  /* [4332] */
    (xdc_Char)0x6f,  /* [4333] */
    (xdc_Char)0x77,  /* [4334] */
    (xdc_Char)0x65,  /* [4335] */
    (xdc_Char)0x64,  /* [4336] */
    (xdc_Char)0x3a,  /* [4337] */
    (xdc_Char)0x20,  /* [4338] */
    (xdc_Char)0x54,  /* [4339] */
    (xdc_Char)0x61,  /* [4340] */
    (xdc_Char)0x73,  /* [4341] */
    (xdc_Char)0x6b,  /* [4342] */
    (xdc_Char)0x20,  /* [4343] */
    (xdc_Char)0x30,  /* [4344] */
    (xdc_Char)0x78,  /* [4345] */
    (xdc_Char)0x25,  /* [4346] */
    (xdc_Char)0x78,  /* [4347] */
    (xdc_Char)0x2e,  /* [4348] */
    (xdc_Char)0x0,  /* [4349] */
    (xdc_Char)0x45,  /* [4350] */
    (xdc_Char)0x5f,  /* [4351] */
    (xdc_Char)0x73,  /* [4352] */
    (xdc_Char)0x74,  /* [4353] */
    (xdc_Char)0x61,  /* [4354] */
    (xdc_Char)0x63,  /* [4355] */
    (xdc_Char)0x6b,  /* [4356] */
    (xdc_Char)0x4f,  /* [4357] */
    (xdc_Char)0x76,  /* [4358] */
    (xdc_Char)0x65,  /* [4359] */
    (xdc_Char)0x72,  /* [4360] */
    (xdc_Char)0x66,  /* [4361] */
    (xdc_Char)0x6c,  /* [4362] */
    (xdc_Char)0x6f,  /* [4363] */
    (xdc_Char)0x77,  /* [4364] */
    (xdc_Char)0x3a,  /* [4365] */
    (xdc_Char)0x20,  /* [4366] */
    (xdc_Char)0x49,  /* [4367] */
    (xdc_Char)0x53,  /* [4368] */
    (xdc_Char)0x52,  /* [4369] */
    (xdc_Char)0x20,  /* [4370] */
    (xdc_Char)0x73,  /* [4371] */
    (xdc_Char)0x74,  /* [4372] */
    (xdc_Char)0x61,  /* [4373] */
    (xdc_Char)0x63,  /* [4374] */
    (xdc_Char)0x6b,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x6f,  /* [4377] */
    (xdc_Char)0x76,  /* [4378] */
    (xdc_Char)0x65,  /* [4379] */
    (xdc_Char)0x72,  /* [4380] */
    (xdc_Char)0x66,  /* [4381] */
    (xdc_Char)0x6c,  /* [4382] */
    (xdc_Char)0x6f,  /* [4383] */
    (xdc_Char)0x77,  /* [4384] */
    (xdc_Char)0x2e,  /* [4385] */
    (xdc_Char)0x0,  /* [4386] */
    (xdc_Char)0x72,  /* [4387] */
    (xdc_Char)0x65,  /* [4388] */
    (xdc_Char)0x71,  /* [4389] */
    (xdc_Char)0x75,  /* [4390] */
    (xdc_Char)0x65,  /* [4391] */
    (xdc_Char)0x73,  /* [4392] */
    (xdc_Char)0x74,  /* [4393] */
    (xdc_Char)0x65,  /* [4394] */
    (xdc_Char)0x64,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x73,  /* [4397] */
    (xdc_Char)0x69,  /* [4398] */
    (xdc_Char)0x7a,  /* [4399] */
    (xdc_Char)0x65,  /* [4400] */
    (xdc_Char)0x20,  /* [4401] */
    (xdc_Char)0x69,  /* [4402] */
    (xdc_Char)0x73,  /* [4403] */
    (xdc_Char)0x20,  /* [4404] */
    (xdc_Char)0x74,  /* [4405] */
    (xdc_Char)0x6f,  /* [4406] */
    (xdc_Char)0x6f,  /* [4407] */
    (xdc_Char)0x20,  /* [4408] */
    (xdc_Char)0x62,  /* [4409] */
    (xdc_Char)0x69,  /* [4410] */
    (xdc_Char)0x67,  /* [4411] */
    (xdc_Char)0x3a,  /* [4412] */
    (xdc_Char)0x20,  /* [4413] */
    (xdc_Char)0x68,  /* [4414] */
    (xdc_Char)0x61,  /* [4415] */
    (xdc_Char)0x6e,  /* [4416] */
    (xdc_Char)0x64,  /* [4417] */
    (xdc_Char)0x6c,  /* [4418] */
    (xdc_Char)0x65,  /* [4419] */
    (xdc_Char)0x3d,  /* [4420] */
    (xdc_Char)0x30,  /* [4421] */
    (xdc_Char)0x78,  /* [4422] */
    (xdc_Char)0x25,  /* [4423] */
    (xdc_Char)0x78,  /* [4424] */
    (xdc_Char)0x2c,  /* [4425] */
    (xdc_Char)0x20,  /* [4426] */
    (xdc_Char)0x73,  /* [4427] */
    (xdc_Char)0x69,  /* [4428] */
    (xdc_Char)0x7a,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x3d,  /* [4431] */
    (xdc_Char)0x25,  /* [4432] */
    (xdc_Char)0x75,  /* [4433] */
    (xdc_Char)0x0,  /* [4434] */
    (xdc_Char)0x6f,  /* [4435] */
    (xdc_Char)0x75,  /* [4436] */
    (xdc_Char)0x74,  /* [4437] */
    (xdc_Char)0x20,  /* [4438] */
    (xdc_Char)0x6f,  /* [4439] */
    (xdc_Char)0x66,  /* [4440] */
    (xdc_Char)0x20,  /* [4441] */
    (xdc_Char)0x6d,  /* [4442] */
    (xdc_Char)0x65,  /* [4443] */
    (xdc_Char)0x6d,  /* [4444] */
    (xdc_Char)0x6f,  /* [4445] */
    (xdc_Char)0x72,  /* [4446] */
    (xdc_Char)0x79,  /* [4447] */
    (xdc_Char)0x3a,  /* [4448] */
    (xdc_Char)0x20,  /* [4449] */
    (xdc_Char)0x68,  /* [4450] */
    (xdc_Char)0x61,  /* [4451] */
    (xdc_Char)0x6e,  /* [4452] */
    (xdc_Char)0x64,  /* [4453] */
    (xdc_Char)0x6c,  /* [4454] */
    (xdc_Char)0x65,  /* [4455] */
    (xdc_Char)0x3d,  /* [4456] */
    (xdc_Char)0x30,  /* [4457] */
    (xdc_Char)0x78,  /* [4458] */
    (xdc_Char)0x25,  /* [4459] */
    (xdc_Char)0x78,  /* [4460] */
    (xdc_Char)0x2c,  /* [4461] */
    (xdc_Char)0x20,  /* [4462] */
    (xdc_Char)0x73,  /* [4463] */
    (xdc_Char)0x69,  /* [4464] */
    (xdc_Char)0x7a,  /* [4465] */
    (xdc_Char)0x65,  /* [4466] */
    (xdc_Char)0x3d,  /* [4467] */
    (xdc_Char)0x25,  /* [4468] */
    (xdc_Char)0x75,  /* [4469] */
    (xdc_Char)0x0,  /* [4470] */
    (xdc_Char)0x45,  /* [4471] */
    (xdc_Char)0x5f,  /* [4472] */
    (xdc_Char)0x70,  /* [4473] */
    (xdc_Char)0x72,  /* [4474] */
    (xdc_Char)0x69,  /* [4475] */
    (xdc_Char)0x6f,  /* [4476] */
    (xdc_Char)0x72,  /* [4477] */
    (xdc_Char)0x69,  /* [4478] */
    (xdc_Char)0x74,  /* [4479] */
    (xdc_Char)0x79,  /* [4480] */
    (xdc_Char)0x3a,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x54,  /* [4483] */
    (xdc_Char)0x68,  /* [4484] */
    (xdc_Char)0x72,  /* [4485] */
    (xdc_Char)0x65,  /* [4486] */
    (xdc_Char)0x61,  /* [4487] */
    (xdc_Char)0x64,  /* [4488] */
    (xdc_Char)0x20,  /* [4489] */
    (xdc_Char)0x70,  /* [4490] */
    (xdc_Char)0x72,  /* [4491] */
    (xdc_Char)0x69,  /* [4492] */
    (xdc_Char)0x6f,  /* [4493] */
    (xdc_Char)0x72,  /* [4494] */
    (xdc_Char)0x69,  /* [4495] */
    (xdc_Char)0x74,  /* [4496] */
    (xdc_Char)0x79,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x69,  /* [4499] */
    (xdc_Char)0x73,  /* [4500] */
    (xdc_Char)0x20,  /* [4501] */
    (xdc_Char)0x69,  /* [4502] */
    (xdc_Char)0x6e,  /* [4503] */
    (xdc_Char)0x76,  /* [4504] */
    (xdc_Char)0x61,  /* [4505] */
    (xdc_Char)0x6c,  /* [4506] */
    (xdc_Char)0x69,  /* [4507] */
    (xdc_Char)0x64,  /* [4508] */
    (xdc_Char)0x20,  /* [4509] */
    (xdc_Char)0x25,  /* [4510] */
    (xdc_Char)0x64,  /* [4511] */
    (xdc_Char)0x0,  /* [4512] */
    (xdc_Char)0x3c,  /* [4513] */
    (xdc_Char)0x2d,  /* [4514] */
    (xdc_Char)0x2d,  /* [4515] */
    (xdc_Char)0x20,  /* [4516] */
    (xdc_Char)0x63,  /* [4517] */
    (xdc_Char)0x6f,  /* [4518] */
    (xdc_Char)0x6e,  /* [4519] */
    (xdc_Char)0x73,  /* [4520] */
    (xdc_Char)0x74,  /* [4521] */
    (xdc_Char)0x72,  /* [4522] */
    (xdc_Char)0x75,  /* [4523] */
    (xdc_Char)0x63,  /* [4524] */
    (xdc_Char)0x74,  /* [4525] */
    (xdc_Char)0x3a,  /* [4526] */
    (xdc_Char)0x20,  /* [4527] */
    (xdc_Char)0x25,  /* [4528] */
    (xdc_Char)0x70,  /* [4529] */
    (xdc_Char)0x28,  /* [4530] */
    (xdc_Char)0x27,  /* [4531] */
    (xdc_Char)0x25,  /* [4532] */
    (xdc_Char)0x73,  /* [4533] */
    (xdc_Char)0x27,  /* [4534] */
    (xdc_Char)0x29,  /* [4535] */
    (xdc_Char)0x0,  /* [4536] */
    (xdc_Char)0x3c,  /* [4537] */
    (xdc_Char)0x2d,  /* [4538] */
    (xdc_Char)0x2d,  /* [4539] */
    (xdc_Char)0x20,  /* [4540] */
    (xdc_Char)0x63,  /* [4541] */
    (xdc_Char)0x72,  /* [4542] */
    (xdc_Char)0x65,  /* [4543] */
    (xdc_Char)0x61,  /* [4544] */
    (xdc_Char)0x74,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x3a,  /* [4547] */
    (xdc_Char)0x20,  /* [4548] */
    (xdc_Char)0x25,  /* [4549] */
    (xdc_Char)0x70,  /* [4550] */
    (xdc_Char)0x28,  /* [4551] */
    (xdc_Char)0x27,  /* [4552] */
    (xdc_Char)0x25,  /* [4553] */
    (xdc_Char)0x73,  /* [4554] */
    (xdc_Char)0x27,  /* [4555] */
    (xdc_Char)0x29,  /* [4556] */
    (xdc_Char)0x0,  /* [4557] */
    (xdc_Char)0x2d,  /* [4558] */
    (xdc_Char)0x2d,  /* [4559] */
    (xdc_Char)0x3e,  /* [4560] */
    (xdc_Char)0x20,  /* [4561] */
    (xdc_Char)0x64,  /* [4562] */
    (xdc_Char)0x65,  /* [4563] */
    (xdc_Char)0x73,  /* [4564] */
    (xdc_Char)0x74,  /* [4565] */
    (xdc_Char)0x72,  /* [4566] */
    (xdc_Char)0x75,  /* [4567] */
    (xdc_Char)0x63,  /* [4568] */
    (xdc_Char)0x74,  /* [4569] */
    (xdc_Char)0x3a,  /* [4570] */
    (xdc_Char)0x20,  /* [4571] */
    (xdc_Char)0x28,  /* [4572] */
    (xdc_Char)0x25,  /* [4573] */
    (xdc_Char)0x70,  /* [4574] */
    (xdc_Char)0x29,  /* [4575] */
    (xdc_Char)0x0,  /* [4576] */
    (xdc_Char)0x2d,  /* [4577] */
    (xdc_Char)0x2d,  /* [4578] */
    (xdc_Char)0x3e,  /* [4579] */
    (xdc_Char)0x20,  /* [4580] */
    (xdc_Char)0x64,  /* [4581] */
    (xdc_Char)0x65,  /* [4582] */
    (xdc_Char)0x6c,  /* [4583] */
    (xdc_Char)0x65,  /* [4584] */
    (xdc_Char)0x74,  /* [4585] */
    (xdc_Char)0x65,  /* [4586] */
    (xdc_Char)0x3a,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x28,  /* [4589] */
    (xdc_Char)0x25,  /* [4590] */
    (xdc_Char)0x70,  /* [4591] */
    (xdc_Char)0x29,  /* [4592] */
    (xdc_Char)0x0,  /* [4593] */
    (xdc_Char)0x45,  /* [4594] */
    (xdc_Char)0x52,  /* [4595] */
    (xdc_Char)0x52,  /* [4596] */
    (xdc_Char)0x4f,  /* [4597] */
    (xdc_Char)0x52,  /* [4598] */
    (xdc_Char)0x3a,  /* [4599] */
    (xdc_Char)0x20,  /* [4600] */
    (xdc_Char)0x25,  /* [4601] */
    (xdc_Char)0x24,  /* [4602] */
    (xdc_Char)0x46,  /* [4603] */
    (xdc_Char)0x25,  /* [4604] */
    (xdc_Char)0x24,  /* [4605] */
    (xdc_Char)0x53,  /* [4606] */
    (xdc_Char)0x0,  /* [4607] */
    (xdc_Char)0x57,  /* [4608] */
    (xdc_Char)0x41,  /* [4609] */
    (xdc_Char)0x52,  /* [4610] */
    (xdc_Char)0x4e,  /* [4611] */
    (xdc_Char)0x49,  /* [4612] */
    (xdc_Char)0x4e,  /* [4613] */
    (xdc_Char)0x47,  /* [4614] */
    (xdc_Char)0x3a,  /* [4615] */
    (xdc_Char)0x20,  /* [4616] */
    (xdc_Char)0x25,  /* [4617] */
    (xdc_Char)0x24,  /* [4618] */
    (xdc_Char)0x46,  /* [4619] */
    (xdc_Char)0x25,  /* [4620] */
    (xdc_Char)0x24,  /* [4621] */
    (xdc_Char)0x53,  /* [4622] */
    (xdc_Char)0x0,  /* [4623] */
    (xdc_Char)0x25,  /* [4624] */
    (xdc_Char)0x24,  /* [4625] */
    (xdc_Char)0x46,  /* [4626] */
    (xdc_Char)0x25,  /* [4627] */
    (xdc_Char)0x24,  /* [4628] */
    (xdc_Char)0x53,  /* [4629] */
    (xdc_Char)0x0,  /* [4630] */
    (xdc_Char)0x53,  /* [4631] */
    (xdc_Char)0x74,  /* [4632] */
    (xdc_Char)0x61,  /* [4633] */
    (xdc_Char)0x72,  /* [4634] */
    (xdc_Char)0x74,  /* [4635] */
    (xdc_Char)0x3a,  /* [4636] */
    (xdc_Char)0x20,  /* [4637] */
    (xdc_Char)0x25,  /* [4638] */
    (xdc_Char)0x24,  /* [4639] */
    (xdc_Char)0x53,  /* [4640] */
    (xdc_Char)0x0,  /* [4641] */
    (xdc_Char)0x53,  /* [4642] */
    (xdc_Char)0x74,  /* [4643] */
    (xdc_Char)0x6f,  /* [4644] */
    (xdc_Char)0x70,  /* [4645] */
    (xdc_Char)0x3a,  /* [4646] */
    (xdc_Char)0x20,  /* [4647] */
    (xdc_Char)0x25,  /* [4648] */
    (xdc_Char)0x24,  /* [4649] */
    (xdc_Char)0x53,  /* [4650] */
    (xdc_Char)0x0,  /* [4651] */
    (xdc_Char)0x53,  /* [4652] */
    (xdc_Char)0x74,  /* [4653] */
    (xdc_Char)0x61,  /* [4654] */
    (xdc_Char)0x72,  /* [4655] */
    (xdc_Char)0x74,  /* [4656] */
    (xdc_Char)0x49,  /* [4657] */
    (xdc_Char)0x6e,  /* [4658] */
    (xdc_Char)0x73,  /* [4659] */
    (xdc_Char)0x74,  /* [4660] */
    (xdc_Char)0x61,  /* [4661] */
    (xdc_Char)0x6e,  /* [4662] */
    (xdc_Char)0x63,  /* [4663] */
    (xdc_Char)0x65,  /* [4664] */
    (xdc_Char)0x3a,  /* [4665] */
    (xdc_Char)0x20,  /* [4666] */
    (xdc_Char)0x25,  /* [4667] */
    (xdc_Char)0x24,  /* [4668] */
    (xdc_Char)0x53,  /* [4669] */
    (xdc_Char)0x0,  /* [4670] */
    (xdc_Char)0x53,  /* [4671] */
    (xdc_Char)0x74,  /* [4672] */
    (xdc_Char)0x6f,  /* [4673] */
    (xdc_Char)0x70,  /* [4674] */
    (xdc_Char)0x49,  /* [4675] */
    (xdc_Char)0x6e,  /* [4676] */
    (xdc_Char)0x73,  /* [4677] */
    (xdc_Char)0x74,  /* [4678] */
    (xdc_Char)0x61,  /* [4679] */
    (xdc_Char)0x6e,  /* [4680] */
    (xdc_Char)0x63,  /* [4681] */
    (xdc_Char)0x65,  /* [4682] */
    (xdc_Char)0x3a,  /* [4683] */
    (xdc_Char)0x20,  /* [4684] */
    (xdc_Char)0x25,  /* [4685] */
    (xdc_Char)0x24,  /* [4686] */
    (xdc_Char)0x53,  /* [4687] */
    (xdc_Char)0x0,  /* [4688] */
    (xdc_Char)0x4c,  /* [4689] */
    (xdc_Char)0x4d,  /* [4690] */
    (xdc_Char)0x5f,  /* [4691] */
    (xdc_Char)0x62,  /* [4692] */
    (xdc_Char)0x65,  /* [4693] */
    (xdc_Char)0x67,  /* [4694] */
    (xdc_Char)0x69,  /* [4695] */
    (xdc_Char)0x6e,  /* [4696] */
    (xdc_Char)0x3a,  /* [4697] */
    (xdc_Char)0x20,  /* [4698] */
    (xdc_Char)0x68,  /* [4699] */
    (xdc_Char)0x77,  /* [4700] */
    (xdc_Char)0x69,  /* [4701] */
    (xdc_Char)0x3a,  /* [4702] */
    (xdc_Char)0x20,  /* [4703] */
    (xdc_Char)0x30,  /* [4704] */
    (xdc_Char)0x78,  /* [4705] */
    (xdc_Char)0x25,  /* [4706] */
    (xdc_Char)0x78,  /* [4707] */
    (xdc_Char)0x2c,  /* [4708] */
    (xdc_Char)0x20,  /* [4709] */
    (xdc_Char)0x66,  /* [4710] */
    (xdc_Char)0x75,  /* [4711] */
    (xdc_Char)0x6e,  /* [4712] */
    (xdc_Char)0x63,  /* [4713] */
    (xdc_Char)0x3a,  /* [4714] */
    (xdc_Char)0x20,  /* [4715] */
    (xdc_Char)0x30,  /* [4716] */
    (xdc_Char)0x78,  /* [4717] */
    (xdc_Char)0x25,  /* [4718] */
    (xdc_Char)0x78,  /* [4719] */
    (xdc_Char)0x2c,  /* [4720] */
    (xdc_Char)0x20,  /* [4721] */
    (xdc_Char)0x70,  /* [4722] */
    (xdc_Char)0x72,  /* [4723] */
    (xdc_Char)0x65,  /* [4724] */
    (xdc_Char)0x54,  /* [4725] */
    (xdc_Char)0x68,  /* [4726] */
    (xdc_Char)0x72,  /* [4727] */
    (xdc_Char)0x65,  /* [4728] */
    (xdc_Char)0x61,  /* [4729] */
    (xdc_Char)0x64,  /* [4730] */
    (xdc_Char)0x3a,  /* [4731] */
    (xdc_Char)0x20,  /* [4732] */
    (xdc_Char)0x25,  /* [4733] */
    (xdc_Char)0x64,  /* [4734] */
    (xdc_Char)0x2c,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x69,  /* [4737] */
    (xdc_Char)0x6e,  /* [4738] */
    (xdc_Char)0x74,  /* [4739] */
    (xdc_Char)0x4e,  /* [4740] */
    (xdc_Char)0x75,  /* [4741] */
    (xdc_Char)0x6d,  /* [4742] */
    (xdc_Char)0x3a,  /* [4743] */
    (xdc_Char)0x20,  /* [4744] */
    (xdc_Char)0x25,  /* [4745] */
    (xdc_Char)0x64,  /* [4746] */
    (xdc_Char)0x2c,  /* [4747] */
    (xdc_Char)0x20,  /* [4748] */
    (xdc_Char)0x69,  /* [4749] */
    (xdc_Char)0x72,  /* [4750] */
    (xdc_Char)0x70,  /* [4751] */
    (xdc_Char)0x3a,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x30,  /* [4754] */
    (xdc_Char)0x78,  /* [4755] */
    (xdc_Char)0x25,  /* [4756] */
    (xdc_Char)0x78,  /* [4757] */
    (xdc_Char)0x0,  /* [4758] */
    (xdc_Char)0x4c,  /* [4759] */
    (xdc_Char)0x44,  /* [4760] */
    (xdc_Char)0x5f,  /* [4761] */
    (xdc_Char)0x65,  /* [4762] */
    (xdc_Char)0x6e,  /* [4763] */
    (xdc_Char)0x64,  /* [4764] */
    (xdc_Char)0x3a,  /* [4765] */
    (xdc_Char)0x20,  /* [4766] */
    (xdc_Char)0x68,  /* [4767] */
    (xdc_Char)0x77,  /* [4768] */
    (xdc_Char)0x69,  /* [4769] */
    (xdc_Char)0x3a,  /* [4770] */
    (xdc_Char)0x20,  /* [4771] */
    (xdc_Char)0x30,  /* [4772] */
    (xdc_Char)0x78,  /* [4773] */
    (xdc_Char)0x25,  /* [4774] */
    (xdc_Char)0x78,  /* [4775] */
    (xdc_Char)0x0,  /* [4776] */
    (xdc_Char)0x4c,  /* [4777] */
    (xdc_Char)0x57,  /* [4778] */
    (xdc_Char)0x5f,  /* [4779] */
    (xdc_Char)0x64,  /* [4780] */
    (xdc_Char)0x65,  /* [4781] */
    (xdc_Char)0x6c,  /* [4782] */
    (xdc_Char)0x61,  /* [4783] */
    (xdc_Char)0x79,  /* [4784] */
    (xdc_Char)0x65,  /* [4785] */
    (xdc_Char)0x64,  /* [4786] */
    (xdc_Char)0x3a,  /* [4787] */
    (xdc_Char)0x20,  /* [4788] */
    (xdc_Char)0x64,  /* [4789] */
    (xdc_Char)0x65,  /* [4790] */
    (xdc_Char)0x6c,  /* [4791] */
    (xdc_Char)0x61,  /* [4792] */
    (xdc_Char)0x79,  /* [4793] */
    (xdc_Char)0x3a,  /* [4794] */
    (xdc_Char)0x20,  /* [4795] */
    (xdc_Char)0x25,  /* [4796] */
    (xdc_Char)0x64,  /* [4797] */
    (xdc_Char)0x0,  /* [4798] */
    (xdc_Char)0x4c,  /* [4799] */
    (xdc_Char)0x4d,  /* [4800] */
    (xdc_Char)0x5f,  /* [4801] */
    (xdc_Char)0x74,  /* [4802] */
    (xdc_Char)0x69,  /* [4803] */
    (xdc_Char)0x63,  /* [4804] */
    (xdc_Char)0x6b,  /* [4805] */
    (xdc_Char)0x3a,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x74,  /* [4808] */
    (xdc_Char)0x69,  /* [4809] */
    (xdc_Char)0x63,  /* [4810] */
    (xdc_Char)0x6b,  /* [4811] */
    (xdc_Char)0x3a,  /* [4812] */
    (xdc_Char)0x20,  /* [4813] */
    (xdc_Char)0x25,  /* [4814] */
    (xdc_Char)0x64,  /* [4815] */
    (xdc_Char)0x0,  /* [4816] */
    (xdc_Char)0x4c,  /* [4817] */
    (xdc_Char)0x4d,  /* [4818] */
    (xdc_Char)0x5f,  /* [4819] */
    (xdc_Char)0x62,  /* [4820] */
    (xdc_Char)0x65,  /* [4821] */
    (xdc_Char)0x67,  /* [4822] */
    (xdc_Char)0x69,  /* [4823] */
    (xdc_Char)0x6e,  /* [4824] */
    (xdc_Char)0x3a,  /* [4825] */
    (xdc_Char)0x20,  /* [4826] */
    (xdc_Char)0x63,  /* [4827] */
    (xdc_Char)0x6c,  /* [4828] */
    (xdc_Char)0x6b,  /* [4829] */
    (xdc_Char)0x3a,  /* [4830] */
    (xdc_Char)0x20,  /* [4831] */
    (xdc_Char)0x30,  /* [4832] */
    (xdc_Char)0x78,  /* [4833] */
    (xdc_Char)0x25,  /* [4834] */
    (xdc_Char)0x78,  /* [4835] */
    (xdc_Char)0x2c,  /* [4836] */
    (xdc_Char)0x20,  /* [4837] */
    (xdc_Char)0x66,  /* [4838] */
    (xdc_Char)0x75,  /* [4839] */
    (xdc_Char)0x6e,  /* [4840] */
    (xdc_Char)0x63,  /* [4841] */
    (xdc_Char)0x3a,  /* [4842] */
    (xdc_Char)0x20,  /* [4843] */
    (xdc_Char)0x30,  /* [4844] */
    (xdc_Char)0x78,  /* [4845] */
    (xdc_Char)0x25,  /* [4846] */
    (xdc_Char)0x78,  /* [4847] */
    (xdc_Char)0x0,  /* [4848] */
    (xdc_Char)0x4c,  /* [4849] */
    (xdc_Char)0x4d,  /* [4850] */
    (xdc_Char)0x5f,  /* [4851] */
    (xdc_Char)0x70,  /* [4852] */
    (xdc_Char)0x6f,  /* [4853] */
    (xdc_Char)0x73,  /* [4854] */
    (xdc_Char)0x74,  /* [4855] */
    (xdc_Char)0x3a,  /* [4856] */
    (xdc_Char)0x20,  /* [4857] */
    (xdc_Char)0x65,  /* [4858] */
    (xdc_Char)0x76,  /* [4859] */
    (xdc_Char)0x65,  /* [4860] */
    (xdc_Char)0x6e,  /* [4861] */
    (xdc_Char)0x74,  /* [4862] */
    (xdc_Char)0x3a,  /* [4863] */
    (xdc_Char)0x20,  /* [4864] */
    (xdc_Char)0x30,  /* [4865] */
    (xdc_Char)0x78,  /* [4866] */
    (xdc_Char)0x25,  /* [4867] */
    (xdc_Char)0x78,  /* [4868] */
    (xdc_Char)0x2c,  /* [4869] */
    (xdc_Char)0x20,  /* [4870] */
    (xdc_Char)0x63,  /* [4871] */
    (xdc_Char)0x75,  /* [4872] */
    (xdc_Char)0x72,  /* [4873] */
    (xdc_Char)0x72,  /* [4874] */
    (xdc_Char)0x45,  /* [4875] */
    (xdc_Char)0x76,  /* [4876] */
    (xdc_Char)0x65,  /* [4877] */
    (xdc_Char)0x6e,  /* [4878] */
    (xdc_Char)0x74,  /* [4879] */
    (xdc_Char)0x73,  /* [4880] */
    (xdc_Char)0x3a,  /* [4881] */
    (xdc_Char)0x20,  /* [4882] */
    (xdc_Char)0x30,  /* [4883] */
    (xdc_Char)0x78,  /* [4884] */
    (xdc_Char)0x25,  /* [4885] */
    (xdc_Char)0x78,  /* [4886] */
    (xdc_Char)0x2c,  /* [4887] */
    (xdc_Char)0x20,  /* [4888] */
    (xdc_Char)0x65,  /* [4889] */
    (xdc_Char)0x76,  /* [4890] */
    (xdc_Char)0x65,  /* [4891] */
    (xdc_Char)0x6e,  /* [4892] */
    (xdc_Char)0x74,  /* [4893] */
    (xdc_Char)0x49,  /* [4894] */
    (xdc_Char)0x64,  /* [4895] */
    (xdc_Char)0x3a,  /* [4896] */
    (xdc_Char)0x20,  /* [4897] */
    (xdc_Char)0x30,  /* [4898] */
    (xdc_Char)0x78,  /* [4899] */
    (xdc_Char)0x25,  /* [4900] */
    (xdc_Char)0x78,  /* [4901] */
    (xdc_Char)0x0,  /* [4902] */
    (xdc_Char)0x4c,  /* [4903] */
    (xdc_Char)0x4d,  /* [4904] */
    (xdc_Char)0x5f,  /* [4905] */
    (xdc_Char)0x70,  /* [4906] */
    (xdc_Char)0x65,  /* [4907] */
    (xdc_Char)0x6e,  /* [4908] */
    (xdc_Char)0x64,  /* [4909] */
    (xdc_Char)0x3a,  /* [4910] */
    (xdc_Char)0x20,  /* [4911] */
    (xdc_Char)0x65,  /* [4912] */
    (xdc_Char)0x76,  /* [4913] */
    (xdc_Char)0x65,  /* [4914] */
    (xdc_Char)0x6e,  /* [4915] */
    (xdc_Char)0x74,  /* [4916] */
    (xdc_Char)0x3a,  /* [4917] */
    (xdc_Char)0x20,  /* [4918] */
    (xdc_Char)0x30,  /* [4919] */
    (xdc_Char)0x78,  /* [4920] */
    (xdc_Char)0x25,  /* [4921] */
    (xdc_Char)0x78,  /* [4922] */
    (xdc_Char)0x2c,  /* [4923] */
    (xdc_Char)0x20,  /* [4924] */
    (xdc_Char)0x63,  /* [4925] */
    (xdc_Char)0x75,  /* [4926] */
    (xdc_Char)0x72,  /* [4927] */
    (xdc_Char)0x72,  /* [4928] */
    (xdc_Char)0x45,  /* [4929] */
    (xdc_Char)0x76,  /* [4930] */
    (xdc_Char)0x65,  /* [4931] */
    (xdc_Char)0x6e,  /* [4932] */
    (xdc_Char)0x74,  /* [4933] */
    (xdc_Char)0x73,  /* [4934] */
    (xdc_Char)0x3a,  /* [4935] */
    (xdc_Char)0x20,  /* [4936] */
    (xdc_Char)0x30,  /* [4937] */
    (xdc_Char)0x78,  /* [4938] */
    (xdc_Char)0x25,  /* [4939] */
    (xdc_Char)0x78,  /* [4940] */
    (xdc_Char)0x2c,  /* [4941] */
    (xdc_Char)0x20,  /* [4942] */
    (xdc_Char)0x61,  /* [4943] */
    (xdc_Char)0x6e,  /* [4944] */
    (xdc_Char)0x64,  /* [4945] */
    (xdc_Char)0x4d,  /* [4946] */
    (xdc_Char)0x61,  /* [4947] */
    (xdc_Char)0x73,  /* [4948] */
    (xdc_Char)0x6b,  /* [4949] */
    (xdc_Char)0x3a,  /* [4950] */
    (xdc_Char)0x20,  /* [4951] */
    (xdc_Char)0x30,  /* [4952] */
    (xdc_Char)0x78,  /* [4953] */
    (xdc_Char)0x25,  /* [4954] */
    (xdc_Char)0x78,  /* [4955] */
    (xdc_Char)0x2c,  /* [4956] */
    (xdc_Char)0x20,  /* [4957] */
    (xdc_Char)0x6f,  /* [4958] */
    (xdc_Char)0x72,  /* [4959] */
    (xdc_Char)0x4d,  /* [4960] */
    (xdc_Char)0x61,  /* [4961] */
    (xdc_Char)0x73,  /* [4962] */
    (xdc_Char)0x6b,  /* [4963] */
    (xdc_Char)0x3a,  /* [4964] */
    (xdc_Char)0x20,  /* [4965] */
    (xdc_Char)0x30,  /* [4966] */
    (xdc_Char)0x78,  /* [4967] */
    (xdc_Char)0x25,  /* [4968] */
    (xdc_Char)0x78,  /* [4969] */
    (xdc_Char)0x2c,  /* [4970] */
    (xdc_Char)0x20,  /* [4971] */
    (xdc_Char)0x74,  /* [4972] */
    (xdc_Char)0x69,  /* [4973] */
    (xdc_Char)0x6d,  /* [4974] */
    (xdc_Char)0x65,  /* [4975] */
    (xdc_Char)0x6f,  /* [4976] */
    (xdc_Char)0x75,  /* [4977] */
    (xdc_Char)0x74,  /* [4978] */
    (xdc_Char)0x3a,  /* [4979] */
    (xdc_Char)0x20,  /* [4980] */
    (xdc_Char)0x25,  /* [4981] */
    (xdc_Char)0x64,  /* [4982] */
    (xdc_Char)0x0,  /* [4983] */
    (xdc_Char)0x4c,  /* [4984] */
    (xdc_Char)0x4d,  /* [4985] */
    (xdc_Char)0x5f,  /* [4986] */
    (xdc_Char)0x70,  /* [4987] */
    (xdc_Char)0x6f,  /* [4988] */
    (xdc_Char)0x73,  /* [4989] */
    (xdc_Char)0x74,  /* [4990] */
    (xdc_Char)0x3a,  /* [4991] */
    (xdc_Char)0x20,  /* [4992] */
    (xdc_Char)0x73,  /* [4993] */
    (xdc_Char)0x65,  /* [4994] */
    (xdc_Char)0x6d,  /* [4995] */
    (xdc_Char)0x3a,  /* [4996] */
    (xdc_Char)0x20,  /* [4997] */
    (xdc_Char)0x30,  /* [4998] */
    (xdc_Char)0x78,  /* [4999] */
    (xdc_Char)0x25,  /* [5000] */
    (xdc_Char)0x78,  /* [5001] */
    (xdc_Char)0x2c,  /* [5002] */
    (xdc_Char)0x20,  /* [5003] */
    (xdc_Char)0x63,  /* [5004] */
    (xdc_Char)0x6f,  /* [5005] */
    (xdc_Char)0x75,  /* [5006] */
    (xdc_Char)0x6e,  /* [5007] */
    (xdc_Char)0x74,  /* [5008] */
    (xdc_Char)0x3a,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x25,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x4c,  /* [5014] */
    (xdc_Char)0x4d,  /* [5015] */
    (xdc_Char)0x5f,  /* [5016] */
    (xdc_Char)0x70,  /* [5017] */
    (xdc_Char)0x65,  /* [5018] */
    (xdc_Char)0x6e,  /* [5019] */
    (xdc_Char)0x64,  /* [5020] */
    (xdc_Char)0x3a,  /* [5021] */
    (xdc_Char)0x20,  /* [5022] */
    (xdc_Char)0x73,  /* [5023] */
    (xdc_Char)0x65,  /* [5024] */
    (xdc_Char)0x6d,  /* [5025] */
    (xdc_Char)0x3a,  /* [5026] */
    (xdc_Char)0x20,  /* [5027] */
    (xdc_Char)0x30,  /* [5028] */
    (xdc_Char)0x78,  /* [5029] */
    (xdc_Char)0x25,  /* [5030] */
    (xdc_Char)0x78,  /* [5031] */
    (xdc_Char)0x2c,  /* [5032] */
    (xdc_Char)0x20,  /* [5033] */
    (xdc_Char)0x63,  /* [5034] */
    (xdc_Char)0x6f,  /* [5035] */
    (xdc_Char)0x75,  /* [5036] */
    (xdc_Char)0x6e,  /* [5037] */
    (xdc_Char)0x74,  /* [5038] */
    (xdc_Char)0x3a,  /* [5039] */
    (xdc_Char)0x20,  /* [5040] */
    (xdc_Char)0x25,  /* [5041] */
    (xdc_Char)0x64,  /* [5042] */
    (xdc_Char)0x2c,  /* [5043] */
    (xdc_Char)0x20,  /* [5044] */
    (xdc_Char)0x74,  /* [5045] */
    (xdc_Char)0x69,  /* [5046] */
    (xdc_Char)0x6d,  /* [5047] */
    (xdc_Char)0x65,  /* [5048] */
    (xdc_Char)0x6f,  /* [5049] */
    (xdc_Char)0x75,  /* [5050] */
    (xdc_Char)0x74,  /* [5051] */
    (xdc_Char)0x3a,  /* [5052] */
    (xdc_Char)0x20,  /* [5053] */
    (xdc_Char)0x25,  /* [5054] */
    (xdc_Char)0x64,  /* [5055] */
    (xdc_Char)0x0,  /* [5056] */
    (xdc_Char)0x4c,  /* [5057] */
    (xdc_Char)0x4d,  /* [5058] */
    (xdc_Char)0x5f,  /* [5059] */
    (xdc_Char)0x62,  /* [5060] */
    (xdc_Char)0x65,  /* [5061] */
    (xdc_Char)0x67,  /* [5062] */
    (xdc_Char)0x69,  /* [5063] */
    (xdc_Char)0x6e,  /* [5064] */
    (xdc_Char)0x3a,  /* [5065] */
    (xdc_Char)0x20,  /* [5066] */
    (xdc_Char)0x73,  /* [5067] */
    (xdc_Char)0x77,  /* [5068] */
    (xdc_Char)0x69,  /* [5069] */
    (xdc_Char)0x3a,  /* [5070] */
    (xdc_Char)0x20,  /* [5071] */
    (xdc_Char)0x30,  /* [5072] */
    (xdc_Char)0x78,  /* [5073] */
    (xdc_Char)0x25,  /* [5074] */
    (xdc_Char)0x78,  /* [5075] */
    (xdc_Char)0x2c,  /* [5076] */
    (xdc_Char)0x20,  /* [5077] */
    (xdc_Char)0x66,  /* [5078] */
    (xdc_Char)0x75,  /* [5079] */
    (xdc_Char)0x6e,  /* [5080] */
    (xdc_Char)0x63,  /* [5081] */
    (xdc_Char)0x3a,  /* [5082] */
    (xdc_Char)0x20,  /* [5083] */
    (xdc_Char)0x30,  /* [5084] */
    (xdc_Char)0x78,  /* [5085] */
    (xdc_Char)0x25,  /* [5086] */
    (xdc_Char)0x78,  /* [5087] */
    (xdc_Char)0x2c,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x70,  /* [5090] */
    (xdc_Char)0x72,  /* [5091] */
    (xdc_Char)0x65,  /* [5092] */
    (xdc_Char)0x54,  /* [5093] */
    (xdc_Char)0x68,  /* [5094] */
    (xdc_Char)0x72,  /* [5095] */
    (xdc_Char)0x65,  /* [5096] */
    (xdc_Char)0x61,  /* [5097] */
    (xdc_Char)0x64,  /* [5098] */
    (xdc_Char)0x3a,  /* [5099] */
    (xdc_Char)0x20,  /* [5100] */
    (xdc_Char)0x25,  /* [5101] */
    (xdc_Char)0x64,  /* [5102] */
    (xdc_Char)0x0,  /* [5103] */
    (xdc_Char)0x4c,  /* [5104] */
    (xdc_Char)0x44,  /* [5105] */
    (xdc_Char)0x5f,  /* [5106] */
    (xdc_Char)0x65,  /* [5107] */
    (xdc_Char)0x6e,  /* [5108] */
    (xdc_Char)0x64,  /* [5109] */
    (xdc_Char)0x3a,  /* [5110] */
    (xdc_Char)0x20,  /* [5111] */
    (xdc_Char)0x73,  /* [5112] */
    (xdc_Char)0x77,  /* [5113] */
    (xdc_Char)0x69,  /* [5114] */
    (xdc_Char)0x3a,  /* [5115] */
    (xdc_Char)0x20,  /* [5116] */
    (xdc_Char)0x30,  /* [5117] */
    (xdc_Char)0x78,  /* [5118] */
    (xdc_Char)0x25,  /* [5119] */
    (xdc_Char)0x78,  /* [5120] */
    (xdc_Char)0x0,  /* [5121] */
    (xdc_Char)0x4c,  /* [5122] */
    (xdc_Char)0x4d,  /* [5123] */
    (xdc_Char)0x5f,  /* [5124] */
    (xdc_Char)0x70,  /* [5125] */
    (xdc_Char)0x6f,  /* [5126] */
    (xdc_Char)0x73,  /* [5127] */
    (xdc_Char)0x74,  /* [5128] */
    (xdc_Char)0x3a,  /* [5129] */
    (xdc_Char)0x20,  /* [5130] */
    (xdc_Char)0x73,  /* [5131] */
    (xdc_Char)0x77,  /* [5132] */
    (xdc_Char)0x69,  /* [5133] */
    (xdc_Char)0x3a,  /* [5134] */
    (xdc_Char)0x20,  /* [5135] */
    (xdc_Char)0x30,  /* [5136] */
    (xdc_Char)0x78,  /* [5137] */
    (xdc_Char)0x25,  /* [5138] */
    (xdc_Char)0x78,  /* [5139] */
    (xdc_Char)0x2c,  /* [5140] */
    (xdc_Char)0x20,  /* [5141] */
    (xdc_Char)0x66,  /* [5142] */
    (xdc_Char)0x75,  /* [5143] */
    (xdc_Char)0x6e,  /* [5144] */
    (xdc_Char)0x63,  /* [5145] */
    (xdc_Char)0x3a,  /* [5146] */
    (xdc_Char)0x20,  /* [5147] */
    (xdc_Char)0x30,  /* [5148] */
    (xdc_Char)0x78,  /* [5149] */
    (xdc_Char)0x25,  /* [5150] */
    (xdc_Char)0x78,  /* [5151] */
    (xdc_Char)0x2c,  /* [5152] */
    (xdc_Char)0x20,  /* [5153] */
    (xdc_Char)0x70,  /* [5154] */
    (xdc_Char)0x72,  /* [5155] */
    (xdc_Char)0x69,  /* [5156] */
    (xdc_Char)0x3a,  /* [5157] */
    (xdc_Char)0x20,  /* [5158] */
    (xdc_Char)0x25,  /* [5159] */
    (xdc_Char)0x64,  /* [5160] */
    (xdc_Char)0x0,  /* [5161] */
    (xdc_Char)0x4c,  /* [5162] */
    (xdc_Char)0x4d,  /* [5163] */
    (xdc_Char)0x5f,  /* [5164] */
    (xdc_Char)0x73,  /* [5165] */
    (xdc_Char)0x77,  /* [5166] */
    (xdc_Char)0x69,  /* [5167] */
    (xdc_Char)0x74,  /* [5168] */
    (xdc_Char)0x63,  /* [5169] */
    (xdc_Char)0x68,  /* [5170] */
    (xdc_Char)0x3a,  /* [5171] */
    (xdc_Char)0x20,  /* [5172] */
    (xdc_Char)0x6f,  /* [5173] */
    (xdc_Char)0x6c,  /* [5174] */
    (xdc_Char)0x64,  /* [5175] */
    (xdc_Char)0x74,  /* [5176] */
    (xdc_Char)0x73,  /* [5177] */
    (xdc_Char)0x6b,  /* [5178] */
    (xdc_Char)0x3a,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x30,  /* [5181] */
    (xdc_Char)0x78,  /* [5182] */
    (xdc_Char)0x25,  /* [5183] */
    (xdc_Char)0x78,  /* [5184] */
    (xdc_Char)0x2c,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x6f,  /* [5187] */
    (xdc_Char)0x6c,  /* [5188] */
    (xdc_Char)0x64,  /* [5189] */
    (xdc_Char)0x66,  /* [5190] */
    (xdc_Char)0x75,  /* [5191] */
    (xdc_Char)0x6e,  /* [5192] */
    (xdc_Char)0x63,  /* [5193] */
    (xdc_Char)0x3a,  /* [5194] */
    (xdc_Char)0x20,  /* [5195] */
    (xdc_Char)0x30,  /* [5196] */
    (xdc_Char)0x78,  /* [5197] */
    (xdc_Char)0x25,  /* [5198] */
    (xdc_Char)0x78,  /* [5199] */
    (xdc_Char)0x2c,  /* [5200] */
    (xdc_Char)0x20,  /* [5201] */
    (xdc_Char)0x6e,  /* [5202] */
    (xdc_Char)0x65,  /* [5203] */
    (xdc_Char)0x77,  /* [5204] */
    (xdc_Char)0x74,  /* [5205] */
    (xdc_Char)0x73,  /* [5206] */
    (xdc_Char)0x6b,  /* [5207] */
    (xdc_Char)0x3a,  /* [5208] */
    (xdc_Char)0x20,  /* [5209] */
    (xdc_Char)0x30,  /* [5210] */
    (xdc_Char)0x78,  /* [5211] */
    (xdc_Char)0x25,  /* [5212] */
    (xdc_Char)0x78,  /* [5213] */
    (xdc_Char)0x2c,  /* [5214] */
    (xdc_Char)0x20,  /* [5215] */
    (xdc_Char)0x6e,  /* [5216] */
    (xdc_Char)0x65,  /* [5217] */
    (xdc_Char)0x77,  /* [5218] */
    (xdc_Char)0x66,  /* [5219] */
    (xdc_Char)0x75,  /* [5220] */
    (xdc_Char)0x6e,  /* [5221] */
    (xdc_Char)0x63,  /* [5222] */
    (xdc_Char)0x3a,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x30,  /* [5225] */
    (xdc_Char)0x78,  /* [5226] */
    (xdc_Char)0x25,  /* [5227] */
    (xdc_Char)0x78,  /* [5228] */
    (xdc_Char)0x0,  /* [5229] */
    (xdc_Char)0x4c,  /* [5230] */
    (xdc_Char)0x4d,  /* [5231] */
    (xdc_Char)0x5f,  /* [5232] */
    (xdc_Char)0x73,  /* [5233] */
    (xdc_Char)0x6c,  /* [5234] */
    (xdc_Char)0x65,  /* [5235] */
    (xdc_Char)0x65,  /* [5236] */
    (xdc_Char)0x70,  /* [5237] */
    (xdc_Char)0x3a,  /* [5238] */
    (xdc_Char)0x20,  /* [5239] */
    (xdc_Char)0x74,  /* [5240] */
    (xdc_Char)0x73,  /* [5241] */
    (xdc_Char)0x6b,  /* [5242] */
    (xdc_Char)0x3a,  /* [5243] */
    (xdc_Char)0x20,  /* [5244] */
    (xdc_Char)0x30,  /* [5245] */
    (xdc_Char)0x78,  /* [5246] */
    (xdc_Char)0x25,  /* [5247] */
    (xdc_Char)0x78,  /* [5248] */
    (xdc_Char)0x2c,  /* [5249] */
    (xdc_Char)0x20,  /* [5250] */
    (xdc_Char)0x66,  /* [5251] */
    (xdc_Char)0x75,  /* [5252] */
    (xdc_Char)0x6e,  /* [5253] */
    (xdc_Char)0x63,  /* [5254] */
    (xdc_Char)0x3a,  /* [5255] */
    (xdc_Char)0x20,  /* [5256] */
    (xdc_Char)0x30,  /* [5257] */
    (xdc_Char)0x78,  /* [5258] */
    (xdc_Char)0x25,  /* [5259] */
    (xdc_Char)0x78,  /* [5260] */
    (xdc_Char)0x2c,  /* [5261] */
    (xdc_Char)0x20,  /* [5262] */
    (xdc_Char)0x74,  /* [5263] */
    (xdc_Char)0x69,  /* [5264] */
    (xdc_Char)0x6d,  /* [5265] */
    (xdc_Char)0x65,  /* [5266] */
    (xdc_Char)0x6f,  /* [5267] */
    (xdc_Char)0x75,  /* [5268] */
    (xdc_Char)0x74,  /* [5269] */
    (xdc_Char)0x3a,  /* [5270] */
    (xdc_Char)0x20,  /* [5271] */
    (xdc_Char)0x25,  /* [5272] */
    (xdc_Char)0x64,  /* [5273] */
    (xdc_Char)0x0,  /* [5274] */
    (xdc_Char)0x4c,  /* [5275] */
    (xdc_Char)0x44,  /* [5276] */
    (xdc_Char)0x5f,  /* [5277] */
    (xdc_Char)0x72,  /* [5278] */
    (xdc_Char)0x65,  /* [5279] */
    (xdc_Char)0x61,  /* [5280] */
    (xdc_Char)0x64,  /* [5281] */
    (xdc_Char)0x79,  /* [5282] */
    (xdc_Char)0x3a,  /* [5283] */
    (xdc_Char)0x20,  /* [5284] */
    (xdc_Char)0x74,  /* [5285] */
    (xdc_Char)0x73,  /* [5286] */
    (xdc_Char)0x6b,  /* [5287] */
    (xdc_Char)0x3a,  /* [5288] */
    (xdc_Char)0x20,  /* [5289] */
    (xdc_Char)0x30,  /* [5290] */
    (xdc_Char)0x78,  /* [5291] */
    (xdc_Char)0x25,  /* [5292] */
    (xdc_Char)0x78,  /* [5293] */
    (xdc_Char)0x2c,  /* [5294] */
    (xdc_Char)0x20,  /* [5295] */
    (xdc_Char)0x66,  /* [5296] */
    (xdc_Char)0x75,  /* [5297] */
    (xdc_Char)0x6e,  /* [5298] */
    (xdc_Char)0x63,  /* [5299] */
    (xdc_Char)0x3a,  /* [5300] */
    (xdc_Char)0x20,  /* [5301] */
    (xdc_Char)0x30,  /* [5302] */
    (xdc_Char)0x78,  /* [5303] */
    (xdc_Char)0x25,  /* [5304] */
    (xdc_Char)0x78,  /* [5305] */
    (xdc_Char)0x2c,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x70,  /* [5308] */
    (xdc_Char)0x72,  /* [5309] */
    (xdc_Char)0x69,  /* [5310] */
    (xdc_Char)0x3a,  /* [5311] */
    (xdc_Char)0x20,  /* [5312] */
    (xdc_Char)0x25,  /* [5313] */
    (xdc_Char)0x64,  /* [5314] */
    (xdc_Char)0x0,  /* [5315] */
    (xdc_Char)0x4c,  /* [5316] */
    (xdc_Char)0x44,  /* [5317] */
    (xdc_Char)0x5f,  /* [5318] */
    (xdc_Char)0x62,  /* [5319] */
    (xdc_Char)0x6c,  /* [5320] */
    (xdc_Char)0x6f,  /* [5321] */
    (xdc_Char)0x63,  /* [5322] */
    (xdc_Char)0x6b,  /* [5323] */
    (xdc_Char)0x3a,  /* [5324] */
    (xdc_Char)0x20,  /* [5325] */
    (xdc_Char)0x74,  /* [5326] */
    (xdc_Char)0x73,  /* [5327] */
    (xdc_Char)0x6b,  /* [5328] */
    (xdc_Char)0x3a,  /* [5329] */
    (xdc_Char)0x20,  /* [5330] */
    (xdc_Char)0x30,  /* [5331] */
    (xdc_Char)0x78,  /* [5332] */
    (xdc_Char)0x25,  /* [5333] */
    (xdc_Char)0x78,  /* [5334] */
    (xdc_Char)0x2c,  /* [5335] */
    (xdc_Char)0x20,  /* [5336] */
    (xdc_Char)0x66,  /* [5337] */
    (xdc_Char)0x75,  /* [5338] */
    (xdc_Char)0x6e,  /* [5339] */
    (xdc_Char)0x63,  /* [5340] */
    (xdc_Char)0x3a,  /* [5341] */
    (xdc_Char)0x20,  /* [5342] */
    (xdc_Char)0x30,  /* [5343] */
    (xdc_Char)0x78,  /* [5344] */
    (xdc_Char)0x25,  /* [5345] */
    (xdc_Char)0x78,  /* [5346] */
    (xdc_Char)0x0,  /* [5347] */
    (xdc_Char)0x4c,  /* [5348] */
    (xdc_Char)0x4d,  /* [5349] */
    (xdc_Char)0x5f,  /* [5350] */
    (xdc_Char)0x79,  /* [5351] */
    (xdc_Char)0x69,  /* [5352] */
    (xdc_Char)0x65,  /* [5353] */
    (xdc_Char)0x6c,  /* [5354] */
    (xdc_Char)0x64,  /* [5355] */
    (xdc_Char)0x3a,  /* [5356] */
    (xdc_Char)0x20,  /* [5357] */
    (xdc_Char)0x74,  /* [5358] */
    (xdc_Char)0x73,  /* [5359] */
    (xdc_Char)0x6b,  /* [5360] */
    (xdc_Char)0x3a,  /* [5361] */
    (xdc_Char)0x20,  /* [5362] */
    (xdc_Char)0x30,  /* [5363] */
    (xdc_Char)0x78,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x78,  /* [5366] */
    (xdc_Char)0x2c,  /* [5367] */
    (xdc_Char)0x20,  /* [5368] */
    (xdc_Char)0x66,  /* [5369] */
    (xdc_Char)0x75,  /* [5370] */
    (xdc_Char)0x6e,  /* [5371] */
    (xdc_Char)0x63,  /* [5372] */
    (xdc_Char)0x3a,  /* [5373] */
    (xdc_Char)0x20,  /* [5374] */
    (xdc_Char)0x30,  /* [5375] */
    (xdc_Char)0x78,  /* [5376] */
    (xdc_Char)0x25,  /* [5377] */
    (xdc_Char)0x78,  /* [5378] */
    (xdc_Char)0x2c,  /* [5379] */
    (xdc_Char)0x20,  /* [5380] */
    (xdc_Char)0x63,  /* [5381] */
    (xdc_Char)0x75,  /* [5382] */
    (xdc_Char)0x72,  /* [5383] */
    (xdc_Char)0x72,  /* [5384] */
    (xdc_Char)0x54,  /* [5385] */
    (xdc_Char)0x68,  /* [5386] */
    (xdc_Char)0x72,  /* [5387] */
    (xdc_Char)0x65,  /* [5388] */
    (xdc_Char)0x61,  /* [5389] */
    (xdc_Char)0x64,  /* [5390] */
    (xdc_Char)0x3a,  /* [5391] */
    (xdc_Char)0x20,  /* [5392] */
    (xdc_Char)0x25,  /* [5393] */
    (xdc_Char)0x64,  /* [5394] */
    (xdc_Char)0x0,  /* [5395] */
    (xdc_Char)0x4c,  /* [5396] */
    (xdc_Char)0x4d,  /* [5397] */
    (xdc_Char)0x5f,  /* [5398] */
    (xdc_Char)0x73,  /* [5399] */
    (xdc_Char)0x65,  /* [5400] */
    (xdc_Char)0x74,  /* [5401] */
    (xdc_Char)0x50,  /* [5402] */
    (xdc_Char)0x72,  /* [5403] */
    (xdc_Char)0x69,  /* [5404] */
    (xdc_Char)0x3a,  /* [5405] */
    (xdc_Char)0x20,  /* [5406] */
    (xdc_Char)0x74,  /* [5407] */
    (xdc_Char)0x73,  /* [5408] */
    (xdc_Char)0x6b,  /* [5409] */
    (xdc_Char)0x3a,  /* [5410] */
    (xdc_Char)0x20,  /* [5411] */
    (xdc_Char)0x30,  /* [5412] */
    (xdc_Char)0x78,  /* [5413] */
    (xdc_Char)0x25,  /* [5414] */
    (xdc_Char)0x78,  /* [5415] */
    (xdc_Char)0x2c,  /* [5416] */
    (xdc_Char)0x20,  /* [5417] */
    (xdc_Char)0x66,  /* [5418] */
    (xdc_Char)0x75,  /* [5419] */
    (xdc_Char)0x6e,  /* [5420] */
    (xdc_Char)0x63,  /* [5421] */
    (xdc_Char)0x3a,  /* [5422] */
    (xdc_Char)0x20,  /* [5423] */
    (xdc_Char)0x30,  /* [5424] */
    (xdc_Char)0x78,  /* [5425] */
    (xdc_Char)0x25,  /* [5426] */
    (xdc_Char)0x78,  /* [5427] */
    (xdc_Char)0x2c,  /* [5428] */
    (xdc_Char)0x20,  /* [5429] */
    (xdc_Char)0x6f,  /* [5430] */
    (xdc_Char)0x6c,  /* [5431] */
    (xdc_Char)0x64,  /* [5432] */
    (xdc_Char)0x50,  /* [5433] */
    (xdc_Char)0x72,  /* [5434] */
    (xdc_Char)0x69,  /* [5435] */
    (xdc_Char)0x3a,  /* [5436] */
    (xdc_Char)0x20,  /* [5437] */
    (xdc_Char)0x25,  /* [5438] */
    (xdc_Char)0x64,  /* [5439] */
    (xdc_Char)0x2c,  /* [5440] */
    (xdc_Char)0x20,  /* [5441] */
    (xdc_Char)0x6e,  /* [5442] */
    (xdc_Char)0x65,  /* [5443] */
    (xdc_Char)0x77,  /* [5444] */
    (xdc_Char)0x50,  /* [5445] */
    (xdc_Char)0x72,  /* [5446] */
    (xdc_Char)0x69,  /* [5447] */
    (xdc_Char)0x20,  /* [5448] */
    (xdc_Char)0x25,  /* [5449] */
    (xdc_Char)0x64,  /* [5450] */
    (xdc_Char)0x0,  /* [5451] */
    (xdc_Char)0x4c,  /* [5452] */
    (xdc_Char)0x44,  /* [5453] */
    (xdc_Char)0x5f,  /* [5454] */
    (xdc_Char)0x65,  /* [5455] */
    (xdc_Char)0x78,  /* [5456] */
    (xdc_Char)0x69,  /* [5457] */
    (xdc_Char)0x74,  /* [5458] */
    (xdc_Char)0x3a,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x74,  /* [5461] */
    (xdc_Char)0x73,  /* [5462] */
    (xdc_Char)0x6b,  /* [5463] */
    (xdc_Char)0x3a,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x30,  /* [5466] */
    (xdc_Char)0x78,  /* [5467] */
    (xdc_Char)0x25,  /* [5468] */
    (xdc_Char)0x78,  /* [5469] */
    (xdc_Char)0x2c,  /* [5470] */
    (xdc_Char)0x20,  /* [5471] */
    (xdc_Char)0x66,  /* [5472] */
    (xdc_Char)0x75,  /* [5473] */
    (xdc_Char)0x6e,  /* [5474] */
    (xdc_Char)0x63,  /* [5475] */
    (xdc_Char)0x3a,  /* [5476] */
    (xdc_Char)0x20,  /* [5477] */
    (xdc_Char)0x30,  /* [5478] */
    (xdc_Char)0x78,  /* [5479] */
    (xdc_Char)0x25,  /* [5480] */
    (xdc_Char)0x78,  /* [5481] */
    (xdc_Char)0x0,  /* [5482] */
    (xdc_Char)0x4c,  /* [5483] */
    (xdc_Char)0x4d,  /* [5484] */
    (xdc_Char)0x5f,  /* [5485] */
    (xdc_Char)0x73,  /* [5486] */
    (xdc_Char)0x65,  /* [5487] */
    (xdc_Char)0x74,  /* [5488] */
    (xdc_Char)0x41,  /* [5489] */
    (xdc_Char)0x66,  /* [5490] */
    (xdc_Char)0x66,  /* [5491] */
    (xdc_Char)0x69,  /* [5492] */
    (xdc_Char)0x6e,  /* [5493] */
    (xdc_Char)0x69,  /* [5494] */
    (xdc_Char)0x74,  /* [5495] */
    (xdc_Char)0x79,  /* [5496] */
    (xdc_Char)0x3a,  /* [5497] */
    (xdc_Char)0x20,  /* [5498] */
    (xdc_Char)0x74,  /* [5499] */
    (xdc_Char)0x73,  /* [5500] */
    (xdc_Char)0x6b,  /* [5501] */
    (xdc_Char)0x3a,  /* [5502] */
    (xdc_Char)0x20,  /* [5503] */
    (xdc_Char)0x30,  /* [5504] */
    (xdc_Char)0x78,  /* [5505] */
    (xdc_Char)0x25,  /* [5506] */
    (xdc_Char)0x78,  /* [5507] */
    (xdc_Char)0x2c,  /* [5508] */
    (xdc_Char)0x20,  /* [5509] */
    (xdc_Char)0x66,  /* [5510] */
    (xdc_Char)0x75,  /* [5511] */
    (xdc_Char)0x6e,  /* [5512] */
    (xdc_Char)0x63,  /* [5513] */
    (xdc_Char)0x3a,  /* [5514] */
    (xdc_Char)0x20,  /* [5515] */
    (xdc_Char)0x30,  /* [5516] */
    (xdc_Char)0x78,  /* [5517] */
    (xdc_Char)0x25,  /* [5518] */
    (xdc_Char)0x78,  /* [5519] */
    (xdc_Char)0x2c,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x6f,  /* [5522] */
    (xdc_Char)0x6c,  /* [5523] */
    (xdc_Char)0x64,  /* [5524] */
    (xdc_Char)0x43,  /* [5525] */
    (xdc_Char)0x6f,  /* [5526] */
    (xdc_Char)0x72,  /* [5527] */
    (xdc_Char)0x65,  /* [5528] */
    (xdc_Char)0x3a,  /* [5529] */
    (xdc_Char)0x20,  /* [5530] */
    (xdc_Char)0x25,  /* [5531] */
    (xdc_Char)0x64,  /* [5532] */
    (xdc_Char)0x2c,  /* [5533] */
    (xdc_Char)0x20,  /* [5534] */
    (xdc_Char)0x6f,  /* [5535] */
    (xdc_Char)0x6c,  /* [5536] */
    (xdc_Char)0x64,  /* [5537] */
    (xdc_Char)0x41,  /* [5538] */
    (xdc_Char)0x66,  /* [5539] */
    (xdc_Char)0x66,  /* [5540] */
    (xdc_Char)0x69,  /* [5541] */
    (xdc_Char)0x6e,  /* [5542] */
    (xdc_Char)0x69,  /* [5543] */
    (xdc_Char)0x74,  /* [5544] */
    (xdc_Char)0x79,  /* [5545] */
    (xdc_Char)0x20,  /* [5546] */
    (xdc_Char)0x25,  /* [5547] */
    (xdc_Char)0x64,  /* [5548] */
    (xdc_Char)0x2c,  /* [5549] */
    (xdc_Char)0x20,  /* [5550] */
    (xdc_Char)0x6e,  /* [5551] */
    (xdc_Char)0x65,  /* [5552] */
    (xdc_Char)0x77,  /* [5553] */
    (xdc_Char)0x41,  /* [5554] */
    (xdc_Char)0x66,  /* [5555] */
    (xdc_Char)0x66,  /* [5556] */
    (xdc_Char)0x69,  /* [5557] */
    (xdc_Char)0x6e,  /* [5558] */
    (xdc_Char)0x69,  /* [5559] */
    (xdc_Char)0x74,  /* [5560] */
    (xdc_Char)0x79,  /* [5561] */
    (xdc_Char)0x20,  /* [5562] */
    (xdc_Char)0x25,  /* [5563] */
    (xdc_Char)0x64,  /* [5564] */
    (xdc_Char)0x0,  /* [5565] */
    (xdc_Char)0x4c,  /* [5566] */
    (xdc_Char)0x44,  /* [5567] */
    (xdc_Char)0x5f,  /* [5568] */
    (xdc_Char)0x73,  /* [5569] */
    (xdc_Char)0x63,  /* [5570] */
    (xdc_Char)0x68,  /* [5571] */
    (xdc_Char)0x65,  /* [5572] */
    (xdc_Char)0x64,  /* [5573] */
    (xdc_Char)0x75,  /* [5574] */
    (xdc_Char)0x6c,  /* [5575] */
    (xdc_Char)0x65,  /* [5576] */
    (xdc_Char)0x3a,  /* [5577] */
    (xdc_Char)0x20,  /* [5578] */
    (xdc_Char)0x63,  /* [5579] */
    (xdc_Char)0x6f,  /* [5580] */
    (xdc_Char)0x72,  /* [5581] */
    (xdc_Char)0x65,  /* [5582] */
    (xdc_Char)0x49,  /* [5583] */
    (xdc_Char)0x64,  /* [5584] */
    (xdc_Char)0x3a,  /* [5585] */
    (xdc_Char)0x20,  /* [5586] */
    (xdc_Char)0x25,  /* [5587] */
    (xdc_Char)0x64,  /* [5588] */
    (xdc_Char)0x2c,  /* [5589] */
    (xdc_Char)0x20,  /* [5590] */
    (xdc_Char)0x77,  /* [5591] */
    (xdc_Char)0x6f,  /* [5592] */
    (xdc_Char)0x72,  /* [5593] */
    (xdc_Char)0x6b,  /* [5594] */
    (xdc_Char)0x46,  /* [5595] */
    (xdc_Char)0x6c,  /* [5596] */
    (xdc_Char)0x61,  /* [5597] */
    (xdc_Char)0x67,  /* [5598] */
    (xdc_Char)0x3a,  /* [5599] */
    (xdc_Char)0x20,  /* [5600] */
    (xdc_Char)0x25,  /* [5601] */
    (xdc_Char)0x64,  /* [5602] */
    (xdc_Char)0x2c,  /* [5603] */
    (xdc_Char)0x20,  /* [5604] */
    (xdc_Char)0x63,  /* [5605] */
    (xdc_Char)0x75,  /* [5606] */
    (xdc_Char)0x72,  /* [5607] */
    (xdc_Char)0x53,  /* [5608] */
    (xdc_Char)0x65,  /* [5609] */
    (xdc_Char)0x74,  /* [5610] */
    (xdc_Char)0x4c,  /* [5611] */
    (xdc_Char)0x6f,  /* [5612] */
    (xdc_Char)0x63,  /* [5613] */
    (xdc_Char)0x61,  /* [5614] */
    (xdc_Char)0x6c,  /* [5615] */
    (xdc_Char)0x3a,  /* [5616] */
    (xdc_Char)0x20,  /* [5617] */
    (xdc_Char)0x25,  /* [5618] */
    (xdc_Char)0x64,  /* [5619] */
    (xdc_Char)0x2c,  /* [5620] */
    (xdc_Char)0x20,  /* [5621] */
    (xdc_Char)0x63,  /* [5622] */
    (xdc_Char)0x75,  /* [5623] */
    (xdc_Char)0x72,  /* [5624] */
    (xdc_Char)0x53,  /* [5625] */
    (xdc_Char)0x65,  /* [5626] */
    (xdc_Char)0x74,  /* [5627] */
    (xdc_Char)0x58,  /* [5628] */
    (xdc_Char)0x3a,  /* [5629] */
    (xdc_Char)0x20,  /* [5630] */
    (xdc_Char)0x25,  /* [5631] */
    (xdc_Char)0x64,  /* [5632] */
    (xdc_Char)0x2c,  /* [5633] */
    (xdc_Char)0x20,  /* [5634] */
    (xdc_Char)0x63,  /* [5635] */
    (xdc_Char)0x75,  /* [5636] */
    (xdc_Char)0x72,  /* [5637] */
    (xdc_Char)0x4d,  /* [5638] */
    (xdc_Char)0x61,  /* [5639] */
    (xdc_Char)0x73,  /* [5640] */
    (xdc_Char)0x6b,  /* [5641] */
    (xdc_Char)0x4c,  /* [5642] */
    (xdc_Char)0x6f,  /* [5643] */
    (xdc_Char)0x63,  /* [5644] */
    (xdc_Char)0x61,  /* [5645] */
    (xdc_Char)0x6c,  /* [5646] */
    (xdc_Char)0x3a,  /* [5647] */
    (xdc_Char)0x20,  /* [5648] */
    (xdc_Char)0x25,  /* [5649] */
    (xdc_Char)0x64,  /* [5650] */
    (xdc_Char)0x0,  /* [5651] */
    (xdc_Char)0x4c,  /* [5652] */
    (xdc_Char)0x44,  /* [5653] */
    (xdc_Char)0x5f,  /* [5654] */
    (xdc_Char)0x6e,  /* [5655] */
    (xdc_Char)0x6f,  /* [5656] */
    (xdc_Char)0x57,  /* [5657] */
    (xdc_Char)0x6f,  /* [5658] */
    (xdc_Char)0x72,  /* [5659] */
    (xdc_Char)0x6b,  /* [5660] */
    (xdc_Char)0x3a,  /* [5661] */
    (xdc_Char)0x20,  /* [5662] */
    (xdc_Char)0x63,  /* [5663] */
    (xdc_Char)0x6f,  /* [5664] */
    (xdc_Char)0x72,  /* [5665] */
    (xdc_Char)0x65,  /* [5666] */
    (xdc_Char)0x49,  /* [5667] */
    (xdc_Char)0x64,  /* [5668] */
    (xdc_Char)0x3a,  /* [5669] */
    (xdc_Char)0x20,  /* [5670] */
    (xdc_Char)0x25,  /* [5671] */
    (xdc_Char)0x64,  /* [5672] */
    (xdc_Char)0x2c,  /* [5673] */
    (xdc_Char)0x20,  /* [5674] */
    (xdc_Char)0x63,  /* [5675] */
    (xdc_Char)0x75,  /* [5676] */
    (xdc_Char)0x72,  /* [5677] */
    (xdc_Char)0x53,  /* [5678] */
    (xdc_Char)0x65,  /* [5679] */
    (xdc_Char)0x74,  /* [5680] */
    (xdc_Char)0x4c,  /* [5681] */
    (xdc_Char)0x6f,  /* [5682] */
    (xdc_Char)0x63,  /* [5683] */
    (xdc_Char)0x61,  /* [5684] */
    (xdc_Char)0x6c,  /* [5685] */
    (xdc_Char)0x3a,  /* [5686] */
    (xdc_Char)0x20,  /* [5687] */
    (xdc_Char)0x25,  /* [5688] */
    (xdc_Char)0x64,  /* [5689] */
    (xdc_Char)0x2c,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x63,  /* [5692] */
    (xdc_Char)0x75,  /* [5693] */
    (xdc_Char)0x72,  /* [5694] */
    (xdc_Char)0x53,  /* [5695] */
    (xdc_Char)0x65,  /* [5696] */
    (xdc_Char)0x74,  /* [5697] */
    (xdc_Char)0x58,  /* [5698] */
    (xdc_Char)0x3a,  /* [5699] */
    (xdc_Char)0x20,  /* [5700] */
    (xdc_Char)0x25,  /* [5701] */
    (xdc_Char)0x64,  /* [5702] */
    (xdc_Char)0x2c,  /* [5703] */
    (xdc_Char)0x20,  /* [5704] */
    (xdc_Char)0x63,  /* [5705] */
    (xdc_Char)0x75,  /* [5706] */
    (xdc_Char)0x72,  /* [5707] */
    (xdc_Char)0x4d,  /* [5708] */
    (xdc_Char)0x61,  /* [5709] */
    (xdc_Char)0x73,  /* [5710] */
    (xdc_Char)0x6b,  /* [5711] */
    (xdc_Char)0x4c,  /* [5712] */
    (xdc_Char)0x6f,  /* [5713] */
    (xdc_Char)0x63,  /* [5714] */
    (xdc_Char)0x61,  /* [5715] */
    (xdc_Char)0x6c,  /* [5716] */
    (xdc_Char)0x3a,  /* [5717] */
    (xdc_Char)0x20,  /* [5718] */
    (xdc_Char)0x25,  /* [5719] */
    (xdc_Char)0x64,  /* [5720] */
    (xdc_Char)0x0,  /* [5721] */
    (xdc_Char)0x45,  /* [5722] */
    (xdc_Char)0x52,  /* [5723] */
    (xdc_Char)0x52,  /* [5724] */
    (xdc_Char)0x4f,  /* [5725] */
    (xdc_Char)0x52,  /* [5726] */
    (xdc_Char)0x3a,  /* [5727] */
    (xdc_Char)0x20,  /* [5728] */
    (xdc_Char)0x45,  /* [5729] */
    (xdc_Char)0x72,  /* [5730] */
    (xdc_Char)0x72,  /* [5731] */
    (xdc_Char)0x6f,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x43,  /* [5734] */
    (xdc_Char)0x6f,  /* [5735] */
    (xdc_Char)0x64,  /* [5736] */
    (xdc_Char)0x65,  /* [5737] */
    (xdc_Char)0x3a,  /* [5738] */
    (xdc_Char)0x30,  /* [5739] */
    (xdc_Char)0x78,  /* [5740] */
    (xdc_Char)0x25,  /* [5741] */
    (xdc_Char)0x78,  /* [5742] */
    (xdc_Char)0x0,  /* [5743] */
    (xdc_Char)0x45,  /* [5744] */
    (xdc_Char)0x52,  /* [5745] */
    (xdc_Char)0x52,  /* [5746] */
    (xdc_Char)0x4f,  /* [5747] */
    (xdc_Char)0x52,  /* [5748] */
    (xdc_Char)0x3a,  /* [5749] */
    (xdc_Char)0x20,  /* [5750] */
    (xdc_Char)0x45,  /* [5751] */
    (xdc_Char)0x72,  /* [5752] */
    (xdc_Char)0x72,  /* [5753] */
    (xdc_Char)0x6f,  /* [5754] */
    (xdc_Char)0x72,  /* [5755] */
    (xdc_Char)0x43,  /* [5756] */
    (xdc_Char)0x6f,  /* [5757] */
    (xdc_Char)0x64,  /* [5758] */
    (xdc_Char)0x65,  /* [5759] */
    (xdc_Char)0x3a,  /* [5760] */
    (xdc_Char)0x30,  /* [5761] */
    (xdc_Char)0x78,  /* [5762] */
    (xdc_Char)0x25,  /* [5763] */
    (xdc_Char)0x78,  /* [5764] */
    (xdc_Char)0x2e,  /* [5765] */
    (xdc_Char)0x20,  /* [5766] */
    (xdc_Char)0x25,  /* [5767] */
    (xdc_Char)0x24,  /* [5768] */
    (xdc_Char)0x53,  /* [5769] */
    (xdc_Char)0x0,  /* [5770] */
    (xdc_Char)0x48,  /* [5771] */
    (xdc_Char)0x57,  /* [5772] */
    (xdc_Char)0x20,  /* [5773] */
    (xdc_Char)0x45,  /* [5774] */
    (xdc_Char)0x52,  /* [5775] */
    (xdc_Char)0x52,  /* [5776] */
    (xdc_Char)0x4f,  /* [5777] */
    (xdc_Char)0x52,  /* [5778] */
    (xdc_Char)0x3a,  /* [5779] */
    (xdc_Char)0x20,  /* [5780] */
    (xdc_Char)0x45,  /* [5781] */
    (xdc_Char)0x72,  /* [5782] */
    (xdc_Char)0x72,  /* [5783] */
    (xdc_Char)0x6f,  /* [5784] */
    (xdc_Char)0x72,  /* [5785] */
    (xdc_Char)0x43,  /* [5786] */
    (xdc_Char)0x6f,  /* [5787] */
    (xdc_Char)0x64,  /* [5788] */
    (xdc_Char)0x65,  /* [5789] */
    (xdc_Char)0x3a,  /* [5790] */
    (xdc_Char)0x30,  /* [5791] */
    (xdc_Char)0x78,  /* [5792] */
    (xdc_Char)0x25,  /* [5793] */
    (xdc_Char)0x78,  /* [5794] */
    (xdc_Char)0x0,  /* [5795] */
    (xdc_Char)0x48,  /* [5796] */
    (xdc_Char)0x57,  /* [5797] */
    (xdc_Char)0x20,  /* [5798] */
    (xdc_Char)0x45,  /* [5799] */
    (xdc_Char)0x52,  /* [5800] */
    (xdc_Char)0x52,  /* [5801] */
    (xdc_Char)0x4f,  /* [5802] */
    (xdc_Char)0x52,  /* [5803] */
    (xdc_Char)0x3a,  /* [5804] */
    (xdc_Char)0x20,  /* [5805] */
    (xdc_Char)0x45,  /* [5806] */
    (xdc_Char)0x72,  /* [5807] */
    (xdc_Char)0x72,  /* [5808] */
    (xdc_Char)0x6f,  /* [5809] */
    (xdc_Char)0x72,  /* [5810] */
    (xdc_Char)0x43,  /* [5811] */
    (xdc_Char)0x6f,  /* [5812] */
    (xdc_Char)0x64,  /* [5813] */
    (xdc_Char)0x65,  /* [5814] */
    (xdc_Char)0x3a,  /* [5815] */
    (xdc_Char)0x30,  /* [5816] */
    (xdc_Char)0x78,  /* [5817] */
    (xdc_Char)0x25,  /* [5818] */
    (xdc_Char)0x78,  /* [5819] */
    (xdc_Char)0x2e,  /* [5820] */
    (xdc_Char)0x20,  /* [5821] */
    (xdc_Char)0x25,  /* [5822] */
    (xdc_Char)0x24,  /* [5823] */
    (xdc_Char)0x53,  /* [5824] */
    (xdc_Char)0x0,  /* [5825] */
    (xdc_Char)0x46,  /* [5826] */
    (xdc_Char)0x41,  /* [5827] */
    (xdc_Char)0x54,  /* [5828] */
    (xdc_Char)0x41,  /* [5829] */
    (xdc_Char)0x4c,  /* [5830] */
    (xdc_Char)0x20,  /* [5831] */
    (xdc_Char)0x45,  /* [5832] */
    (xdc_Char)0x52,  /* [5833] */
    (xdc_Char)0x52,  /* [5834] */
    (xdc_Char)0x4f,  /* [5835] */
    (xdc_Char)0x52,  /* [5836] */
    (xdc_Char)0x3a,  /* [5837] */
    (xdc_Char)0x20,  /* [5838] */
    (xdc_Char)0x45,  /* [5839] */
    (xdc_Char)0x72,  /* [5840] */
    (xdc_Char)0x72,  /* [5841] */
    (xdc_Char)0x6f,  /* [5842] */
    (xdc_Char)0x72,  /* [5843] */
    (xdc_Char)0x43,  /* [5844] */
    (xdc_Char)0x6f,  /* [5845] */
    (xdc_Char)0x64,  /* [5846] */
    (xdc_Char)0x65,  /* [5847] */
    (xdc_Char)0x3a,  /* [5848] */
    (xdc_Char)0x30,  /* [5849] */
    (xdc_Char)0x78,  /* [5850] */
    (xdc_Char)0x25,  /* [5851] */
    (xdc_Char)0x78,  /* [5852] */
    (xdc_Char)0x0,  /* [5853] */
    (xdc_Char)0x46,  /* [5854] */
    (xdc_Char)0x41,  /* [5855] */
    (xdc_Char)0x54,  /* [5856] */
    (xdc_Char)0x41,  /* [5857] */
    (xdc_Char)0x4c,  /* [5858] */
    (xdc_Char)0x20,  /* [5859] */
    (xdc_Char)0x45,  /* [5860] */
    (xdc_Char)0x52,  /* [5861] */
    (xdc_Char)0x52,  /* [5862] */
    (xdc_Char)0x4f,  /* [5863] */
    (xdc_Char)0x52,  /* [5864] */
    (xdc_Char)0x3a,  /* [5865] */
    (xdc_Char)0x20,  /* [5866] */
    (xdc_Char)0x45,  /* [5867] */
    (xdc_Char)0x72,  /* [5868] */
    (xdc_Char)0x72,  /* [5869] */
    (xdc_Char)0x6f,  /* [5870] */
    (xdc_Char)0x72,  /* [5871] */
    (xdc_Char)0x43,  /* [5872] */
    (xdc_Char)0x6f,  /* [5873] */
    (xdc_Char)0x64,  /* [5874] */
    (xdc_Char)0x65,  /* [5875] */
    (xdc_Char)0x3a,  /* [5876] */
    (xdc_Char)0x30,  /* [5877] */
    (xdc_Char)0x78,  /* [5878] */
    (xdc_Char)0x25,  /* [5879] */
    (xdc_Char)0x78,  /* [5880] */
    (xdc_Char)0x2e,  /* [5881] */
    (xdc_Char)0x20,  /* [5882] */
    (xdc_Char)0x25,  /* [5883] */
    (xdc_Char)0x24,  /* [5884] */
    (xdc_Char)0x53,  /* [5885] */
    (xdc_Char)0x0,  /* [5886] */
    (xdc_Char)0x43,  /* [5887] */
    (xdc_Char)0x52,  /* [5888] */
    (xdc_Char)0x49,  /* [5889] */
    (xdc_Char)0x54,  /* [5890] */
    (xdc_Char)0x49,  /* [5891] */
    (xdc_Char)0x43,  /* [5892] */
    (xdc_Char)0x41,  /* [5893] */
    (xdc_Char)0x4c,  /* [5894] */
    (xdc_Char)0x20,  /* [5895] */
    (xdc_Char)0x45,  /* [5896] */
    (xdc_Char)0x52,  /* [5897] */
    (xdc_Char)0x52,  /* [5898] */
    (xdc_Char)0x4f,  /* [5899] */
    (xdc_Char)0x52,  /* [5900] */
    (xdc_Char)0x3a,  /* [5901] */
    (xdc_Char)0x20,  /* [5902] */
    (xdc_Char)0x45,  /* [5903] */
    (xdc_Char)0x72,  /* [5904] */
    (xdc_Char)0x72,  /* [5905] */
    (xdc_Char)0x6f,  /* [5906] */
    (xdc_Char)0x72,  /* [5907] */
    (xdc_Char)0x43,  /* [5908] */
    (xdc_Char)0x6f,  /* [5909] */
    (xdc_Char)0x64,  /* [5910] */
    (xdc_Char)0x65,  /* [5911] */
    (xdc_Char)0x3a,  /* [5912] */
    (xdc_Char)0x30,  /* [5913] */
    (xdc_Char)0x78,  /* [5914] */
    (xdc_Char)0x25,  /* [5915] */
    (xdc_Char)0x78,  /* [5916] */
    (xdc_Char)0x0,  /* [5917] */
    (xdc_Char)0x43,  /* [5918] */
    (xdc_Char)0x52,  /* [5919] */
    (xdc_Char)0x49,  /* [5920] */
    (xdc_Char)0x54,  /* [5921] */
    (xdc_Char)0x49,  /* [5922] */
    (xdc_Char)0x43,  /* [5923] */
    (xdc_Char)0x41,  /* [5924] */
    (xdc_Char)0x4c,  /* [5925] */
    (xdc_Char)0x20,  /* [5926] */
    (xdc_Char)0x45,  /* [5927] */
    (xdc_Char)0x52,  /* [5928] */
    (xdc_Char)0x52,  /* [5929] */
    (xdc_Char)0x4f,  /* [5930] */
    (xdc_Char)0x52,  /* [5931] */
    (xdc_Char)0x3a,  /* [5932] */
    (xdc_Char)0x20,  /* [5933] */
    (xdc_Char)0x45,  /* [5934] */
    (xdc_Char)0x72,  /* [5935] */
    (xdc_Char)0x72,  /* [5936] */
    (xdc_Char)0x6f,  /* [5937] */
    (xdc_Char)0x72,  /* [5938] */
    (xdc_Char)0x43,  /* [5939] */
    (xdc_Char)0x6f,  /* [5940] */
    (xdc_Char)0x64,  /* [5941] */
    (xdc_Char)0x65,  /* [5942] */
    (xdc_Char)0x3a,  /* [5943] */
    (xdc_Char)0x30,  /* [5944] */
    (xdc_Char)0x78,  /* [5945] */
    (xdc_Char)0x25,  /* [5946] */
    (xdc_Char)0x78,  /* [5947] */
    (xdc_Char)0x2e,  /* [5948] */
    (xdc_Char)0x20,  /* [5949] */
    (xdc_Char)0x25,  /* [5950] */
    (xdc_Char)0x24,  /* [5951] */
    (xdc_Char)0x53,  /* [5952] */
    (xdc_Char)0x0,  /* [5953] */
    (xdc_Char)0x45,  /* [5954] */
    (xdc_Char)0x52,  /* [5955] */
    (xdc_Char)0x52,  /* [5956] */
    (xdc_Char)0x4f,  /* [5957] */
    (xdc_Char)0x52,  /* [5958] */
    (xdc_Char)0x3a,  /* [5959] */
    (xdc_Char)0x20,  /* [5960] */
    (xdc_Char)0x45,  /* [5961] */
    (xdc_Char)0x78,  /* [5962] */
    (xdc_Char)0x63,  /* [5963] */
    (xdc_Char)0x65,  /* [5964] */
    (xdc_Char)0x70,  /* [5965] */
    (xdc_Char)0x74,  /* [5966] */
    (xdc_Char)0x69,  /* [5967] */
    (xdc_Char)0x6f,  /* [5968] */
    (xdc_Char)0x6e,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x61,  /* [5971] */
    (xdc_Char)0x74,  /* [5972] */
    (xdc_Char)0x20,  /* [5973] */
    (xdc_Char)0x25,  /* [5974] */
    (xdc_Char)0x24,  /* [5975] */
    (xdc_Char)0x46,  /* [5976] */
    (xdc_Char)0x2e,  /* [5977] */
    (xdc_Char)0x0,  /* [5978] */
    (xdc_Char)0x45,  /* [5979] */
    (xdc_Char)0x52,  /* [5980] */
    (xdc_Char)0x52,  /* [5981] */
    (xdc_Char)0x4f,  /* [5982] */
    (xdc_Char)0x52,  /* [5983] */
    (xdc_Char)0x3a,  /* [5984] */
    (xdc_Char)0x20,  /* [5985] */
    (xdc_Char)0x55,  /* [5986] */
    (xdc_Char)0x6e,  /* [5987] */
    (xdc_Char)0x63,  /* [5988] */
    (xdc_Char)0x61,  /* [5989] */
    (xdc_Char)0x75,  /* [5990] */
    (xdc_Char)0x67,  /* [5991] */
    (xdc_Char)0x68,  /* [5992] */
    (xdc_Char)0x74,  /* [5993] */
    (xdc_Char)0x20,  /* [5994] */
    (xdc_Char)0x45,  /* [5995] */
    (xdc_Char)0x78,  /* [5996] */
    (xdc_Char)0x63,  /* [5997] */
    (xdc_Char)0x65,  /* [5998] */
    (xdc_Char)0x70,  /* [5999] */
    (xdc_Char)0x74,  /* [6000] */
    (xdc_Char)0x69,  /* [6001] */
    (xdc_Char)0x6f,  /* [6002] */
    (xdc_Char)0x6e,  /* [6003] */
    (xdc_Char)0x20,  /* [6004] */
    (xdc_Char)0x61,  /* [6005] */
    (xdc_Char)0x74,  /* [6006] */
    (xdc_Char)0x20,  /* [6007] */
    (xdc_Char)0x25,  /* [6008] */
    (xdc_Char)0x24,  /* [6009] */
    (xdc_Char)0x46,  /* [6010] */
    (xdc_Char)0x2e,  /* [6011] */
    (xdc_Char)0x0,  /* [6012] */
    (xdc_Char)0x45,  /* [6013] */
    (xdc_Char)0x52,  /* [6014] */
    (xdc_Char)0x52,  /* [6015] */
    (xdc_Char)0x4f,  /* [6016] */
    (xdc_Char)0x52,  /* [6017] */
    (xdc_Char)0x3a,  /* [6018] */
    (xdc_Char)0x20,  /* [6019] */
    (xdc_Char)0x4e,  /* [6020] */
    (xdc_Char)0x75,  /* [6021] */
    (xdc_Char)0x6c,  /* [6022] */
    (xdc_Char)0x6c,  /* [6023] */
    (xdc_Char)0x20,  /* [6024] */
    (xdc_Char)0x50,  /* [6025] */
    (xdc_Char)0x6f,  /* [6026] */
    (xdc_Char)0x69,  /* [6027] */
    (xdc_Char)0x6e,  /* [6028] */
    (xdc_Char)0x74,  /* [6029] */
    (xdc_Char)0x65,  /* [6030] */
    (xdc_Char)0x72,  /* [6031] */
    (xdc_Char)0x20,  /* [6032] */
    (xdc_Char)0x45,  /* [6033] */
    (xdc_Char)0x78,  /* [6034] */
    (xdc_Char)0x63,  /* [6035] */
    (xdc_Char)0x65,  /* [6036] */
    (xdc_Char)0x70,  /* [6037] */
    (xdc_Char)0x74,  /* [6038] */
    (xdc_Char)0x69,  /* [6039] */
    (xdc_Char)0x6f,  /* [6040] */
    (xdc_Char)0x6e,  /* [6041] */
    (xdc_Char)0x20,  /* [6042] */
    (xdc_Char)0x61,  /* [6043] */
    (xdc_Char)0x74,  /* [6044] */
    (xdc_Char)0x20,  /* [6045] */
    (xdc_Char)0x25,  /* [6046] */
    (xdc_Char)0x24,  /* [6047] */
    (xdc_Char)0x46,  /* [6048] */
    (xdc_Char)0x2e,  /* [6049] */
    (xdc_Char)0x0,  /* [6050] */
    (xdc_Char)0x45,  /* [6051] */
    (xdc_Char)0x52,  /* [6052] */
    (xdc_Char)0x52,  /* [6053] */
    (xdc_Char)0x4f,  /* [6054] */
    (xdc_Char)0x52,  /* [6055] */
    (xdc_Char)0x3a,  /* [6056] */
    (xdc_Char)0x20,  /* [6057] */
    (xdc_Char)0x55,  /* [6058] */
    (xdc_Char)0x6e,  /* [6059] */
    (xdc_Char)0x65,  /* [6060] */
    (xdc_Char)0x78,  /* [6061] */
    (xdc_Char)0x70,  /* [6062] */
    (xdc_Char)0x65,  /* [6063] */
    (xdc_Char)0x63,  /* [6064] */
    (xdc_Char)0x74,  /* [6065] */
    (xdc_Char)0x65,  /* [6066] */
    (xdc_Char)0x64,  /* [6067] */
    (xdc_Char)0x20,  /* [6068] */
    (xdc_Char)0x49,  /* [6069] */
    (xdc_Char)0x6e,  /* [6070] */
    (xdc_Char)0x74,  /* [6071] */
    (xdc_Char)0x65,  /* [6072] */
    (xdc_Char)0x72,  /* [6073] */
    (xdc_Char)0x72,  /* [6074] */
    (xdc_Char)0x75,  /* [6075] */
    (xdc_Char)0x70,  /* [6076] */
    (xdc_Char)0x74,  /* [6077] */
    (xdc_Char)0x20,  /* [6078] */
    (xdc_Char)0x61,  /* [6079] */
    (xdc_Char)0x74,  /* [6080] */
    (xdc_Char)0x20,  /* [6081] */
    (xdc_Char)0x25,  /* [6082] */
    (xdc_Char)0x24,  /* [6083] */
    (xdc_Char)0x46,  /* [6084] */
    (xdc_Char)0x2e,  /* [6085] */
    (xdc_Char)0x0,  /* [6086] */
    (xdc_Char)0x45,  /* [6087] */
    (xdc_Char)0x52,  /* [6088] */
    (xdc_Char)0x52,  /* [6089] */
    (xdc_Char)0x4f,  /* [6090] */
    (xdc_Char)0x52,  /* [6091] */
    (xdc_Char)0x3a,  /* [6092] */
    (xdc_Char)0x20,  /* [6093] */
    (xdc_Char)0x4d,  /* [6094] */
    (xdc_Char)0x65,  /* [6095] */
    (xdc_Char)0x6d,  /* [6096] */
    (xdc_Char)0x6f,  /* [6097] */
    (xdc_Char)0x72,  /* [6098] */
    (xdc_Char)0x79,  /* [6099] */
    (xdc_Char)0x20,  /* [6100] */
    (xdc_Char)0x41,  /* [6101] */
    (xdc_Char)0x63,  /* [6102] */
    (xdc_Char)0x63,  /* [6103] */
    (xdc_Char)0x65,  /* [6104] */
    (xdc_Char)0x73,  /* [6105] */
    (xdc_Char)0x73,  /* [6106] */
    (xdc_Char)0x20,  /* [6107] */
    (xdc_Char)0x46,  /* [6108] */
    (xdc_Char)0x61,  /* [6109] */
    (xdc_Char)0x75,  /* [6110] */
    (xdc_Char)0x6c,  /* [6111] */
    (xdc_Char)0x74,  /* [6112] */
    (xdc_Char)0x20,  /* [6113] */
    (xdc_Char)0x61,  /* [6114] */
    (xdc_Char)0x74,  /* [6115] */
    (xdc_Char)0x20,  /* [6116] */
    (xdc_Char)0x25,  /* [6117] */
    (xdc_Char)0x24,  /* [6118] */
    (xdc_Char)0x46,  /* [6119] */
    (xdc_Char)0x2e,  /* [6120] */
    (xdc_Char)0x20,  /* [6121] */
    (xdc_Char)0x5b,  /* [6122] */
    (xdc_Char)0x41,  /* [6123] */
    (xdc_Char)0x44,  /* [6124] */
    (xdc_Char)0x52,  /* [6125] */
    (xdc_Char)0x53,  /* [6126] */
    (xdc_Char)0x5d,  /* [6127] */
    (xdc_Char)0x30,  /* [6128] */
    (xdc_Char)0x78,  /* [6129] */
    (xdc_Char)0x25,  /* [6130] */
    (xdc_Char)0x78,  /* [6131] */
    (xdc_Char)0x0,  /* [6132] */
    (xdc_Char)0x45,  /* [6133] */
    (xdc_Char)0x52,  /* [6134] */
    (xdc_Char)0x52,  /* [6135] */
    (xdc_Char)0x4f,  /* [6136] */
    (xdc_Char)0x52,  /* [6137] */
    (xdc_Char)0x3a,  /* [6138] */
    (xdc_Char)0x20,  /* [6139] */
    (xdc_Char)0x53,  /* [6140] */
    (xdc_Char)0x65,  /* [6141] */
    (xdc_Char)0x63,  /* [6142] */
    (xdc_Char)0x75,  /* [6143] */
    (xdc_Char)0x72,  /* [6144] */
    (xdc_Char)0x69,  /* [6145] */
    (xdc_Char)0x74,  /* [6146] */
    (xdc_Char)0x79,  /* [6147] */
    (xdc_Char)0x20,  /* [6148] */
    (xdc_Char)0x45,  /* [6149] */
    (xdc_Char)0x78,  /* [6150] */
    (xdc_Char)0x63,  /* [6151] */
    (xdc_Char)0x65,  /* [6152] */
    (xdc_Char)0x70,  /* [6153] */
    (xdc_Char)0x74,  /* [6154] */
    (xdc_Char)0x69,  /* [6155] */
    (xdc_Char)0x6f,  /* [6156] */
    (xdc_Char)0x6e,  /* [6157] */
    (xdc_Char)0x20,  /* [6158] */
    (xdc_Char)0x61,  /* [6159] */
    (xdc_Char)0x74,  /* [6160] */
    (xdc_Char)0x20,  /* [6161] */
    (xdc_Char)0x25,  /* [6162] */
    (xdc_Char)0x24,  /* [6163] */
    (xdc_Char)0x46,  /* [6164] */
    (xdc_Char)0x2e,  /* [6165] */
    (xdc_Char)0x0,  /* [6166] */
    (xdc_Char)0x45,  /* [6167] */
    (xdc_Char)0x52,  /* [6168] */
    (xdc_Char)0x52,  /* [6169] */
    (xdc_Char)0x4f,  /* [6170] */
    (xdc_Char)0x52,  /* [6171] */
    (xdc_Char)0x3a,  /* [6172] */
    (xdc_Char)0x20,  /* [6173] */
    (xdc_Char)0x44,  /* [6174] */
    (xdc_Char)0x69,  /* [6175] */
    (xdc_Char)0x76,  /* [6176] */
    (xdc_Char)0x69,  /* [6177] */
    (xdc_Char)0x73,  /* [6178] */
    (xdc_Char)0x69,  /* [6179] */
    (xdc_Char)0x6f,  /* [6180] */
    (xdc_Char)0x6e,  /* [6181] */
    (xdc_Char)0x20,  /* [6182] */
    (xdc_Char)0x62,  /* [6183] */
    (xdc_Char)0x79,  /* [6184] */
    (xdc_Char)0x20,  /* [6185] */
    (xdc_Char)0x7a,  /* [6186] */
    (xdc_Char)0x65,  /* [6187] */
    (xdc_Char)0x72,  /* [6188] */
    (xdc_Char)0x6f,  /* [6189] */
    (xdc_Char)0x20,  /* [6190] */
    (xdc_Char)0x61,  /* [6191] */
    (xdc_Char)0x74,  /* [6192] */
    (xdc_Char)0x20,  /* [6193] */
    (xdc_Char)0x25,  /* [6194] */
    (xdc_Char)0x24,  /* [6195] */
    (xdc_Char)0x46,  /* [6196] */
    (xdc_Char)0x2e,  /* [6197] */
    (xdc_Char)0x0,  /* [6198] */
    (xdc_Char)0x45,  /* [6199] */
    (xdc_Char)0x52,  /* [6200] */
    (xdc_Char)0x52,  /* [6201] */
    (xdc_Char)0x4f,  /* [6202] */
    (xdc_Char)0x52,  /* [6203] */
    (xdc_Char)0x3a,  /* [6204] */
    (xdc_Char)0x20,  /* [6205] */
    (xdc_Char)0x4f,  /* [6206] */
    (xdc_Char)0x76,  /* [6207] */
    (xdc_Char)0x65,  /* [6208] */
    (xdc_Char)0x72,  /* [6209] */
    (xdc_Char)0x66,  /* [6210] */
    (xdc_Char)0x6c,  /* [6211] */
    (xdc_Char)0x6f,  /* [6212] */
    (xdc_Char)0x77,  /* [6213] */
    (xdc_Char)0x20,  /* [6214] */
    (xdc_Char)0x65,  /* [6215] */
    (xdc_Char)0x78,  /* [6216] */
    (xdc_Char)0x63,  /* [6217] */
    (xdc_Char)0x65,  /* [6218] */
    (xdc_Char)0x70,  /* [6219] */
    (xdc_Char)0x74,  /* [6220] */
    (xdc_Char)0x69,  /* [6221] */
    (xdc_Char)0x6f,  /* [6222] */
    (xdc_Char)0x6e,  /* [6223] */
    (xdc_Char)0x20,  /* [6224] */
    (xdc_Char)0x61,  /* [6225] */
    (xdc_Char)0x74,  /* [6226] */
    (xdc_Char)0x20,  /* [6227] */
    (xdc_Char)0x25,  /* [6228] */
    (xdc_Char)0x24,  /* [6229] */
    (xdc_Char)0x46,  /* [6230] */
    (xdc_Char)0x2e,  /* [6231] */
    (xdc_Char)0x0,  /* [6232] */
    (xdc_Char)0x45,  /* [6233] */
    (xdc_Char)0x52,  /* [6234] */
    (xdc_Char)0x52,  /* [6235] */
    (xdc_Char)0x4f,  /* [6236] */
    (xdc_Char)0x52,  /* [6237] */
    (xdc_Char)0x3a,  /* [6238] */
    (xdc_Char)0x20,  /* [6239] */
    (xdc_Char)0x49,  /* [6240] */
    (xdc_Char)0x6e,  /* [6241] */
    (xdc_Char)0x64,  /* [6242] */
    (xdc_Char)0x65,  /* [6243] */
    (xdc_Char)0x78,  /* [6244] */
    (xdc_Char)0x20,  /* [6245] */
    (xdc_Char)0x6f,  /* [6246] */
    (xdc_Char)0x75,  /* [6247] */
    (xdc_Char)0x74,  /* [6248] */
    (xdc_Char)0x20,  /* [6249] */
    (xdc_Char)0x6f,  /* [6250] */
    (xdc_Char)0x66,  /* [6251] */
    (xdc_Char)0x20,  /* [6252] */
    (xdc_Char)0x72,  /* [6253] */
    (xdc_Char)0x61,  /* [6254] */
    (xdc_Char)0x6e,  /* [6255] */
    (xdc_Char)0x67,  /* [6256] */
    (xdc_Char)0x65,  /* [6257] */
    (xdc_Char)0x20,  /* [6258] */
    (xdc_Char)0x61,  /* [6259] */
    (xdc_Char)0x74,  /* [6260] */
    (xdc_Char)0x20,  /* [6261] */
    (xdc_Char)0x25,  /* [6262] */
    (xdc_Char)0x24,  /* [6263] */
    (xdc_Char)0x46,  /* [6264] */
    (xdc_Char)0x2e,  /* [6265] */
    (xdc_Char)0x20,  /* [6266] */
    (xdc_Char)0x5b,  /* [6267] */
    (xdc_Char)0x49,  /* [6268] */
    (xdc_Char)0x4e,  /* [6269] */
    (xdc_Char)0x44,  /* [6270] */
    (xdc_Char)0x45,  /* [6271] */
    (xdc_Char)0x58,  /* [6272] */
    (xdc_Char)0x5d,  /* [6273] */
    (xdc_Char)0x30,  /* [6274] */
    (xdc_Char)0x78,  /* [6275] */
    (xdc_Char)0x25,  /* [6276] */
    (xdc_Char)0x78,  /* [6277] */
    (xdc_Char)0x0,  /* [6278] */
    (xdc_Char)0x45,  /* [6279] */
    (xdc_Char)0x52,  /* [6280] */
    (xdc_Char)0x52,  /* [6281] */
    (xdc_Char)0x4f,  /* [6282] */
    (xdc_Char)0x52,  /* [6283] */
    (xdc_Char)0x3a,  /* [6284] */
    (xdc_Char)0x20,  /* [6285] */
    (xdc_Char)0x41,  /* [6286] */
    (xdc_Char)0x74,  /* [6287] */
    (xdc_Char)0x74,  /* [6288] */
    (xdc_Char)0x65,  /* [6289] */
    (xdc_Char)0x6d,  /* [6290] */
    (xdc_Char)0x70,  /* [6291] */
    (xdc_Char)0x74,  /* [6292] */
    (xdc_Char)0x20,  /* [6293] */
    (xdc_Char)0x74,  /* [6294] */
    (xdc_Char)0x6f,  /* [6295] */
    (xdc_Char)0x20,  /* [6296] */
    (xdc_Char)0x61,  /* [6297] */
    (xdc_Char)0x63,  /* [6298] */
    (xdc_Char)0x63,  /* [6299] */
    (xdc_Char)0x65,  /* [6300] */
    (xdc_Char)0x73,  /* [6301] */
    (xdc_Char)0x73,  /* [6302] */
    (xdc_Char)0x20,  /* [6303] */
    (xdc_Char)0x66,  /* [6304] */
    (xdc_Char)0x65,  /* [6305] */
    (xdc_Char)0x61,  /* [6306] */
    (xdc_Char)0x74,  /* [6307] */
    (xdc_Char)0x75,  /* [6308] */
    (xdc_Char)0x72,  /* [6309] */
    (xdc_Char)0x65,  /* [6310] */
    (xdc_Char)0x20,  /* [6311] */
    (xdc_Char)0x74,  /* [6312] */
    (xdc_Char)0x68,  /* [6313] */
    (xdc_Char)0x61,  /* [6314] */
    (xdc_Char)0x74,  /* [6315] */
    (xdc_Char)0x20,  /* [6316] */
    (xdc_Char)0x69,  /* [6317] */
    (xdc_Char)0x73,  /* [6318] */
    (xdc_Char)0x20,  /* [6319] */
    (xdc_Char)0x6e,  /* [6320] */
    (xdc_Char)0x6f,  /* [6321] */
    (xdc_Char)0x74,  /* [6322] */
    (xdc_Char)0x20,  /* [6323] */
    (xdc_Char)0x69,  /* [6324] */
    (xdc_Char)0x6d,  /* [6325] */
    (xdc_Char)0x70,  /* [6326] */
    (xdc_Char)0x6c,  /* [6327] */
    (xdc_Char)0x65,  /* [6328] */
    (xdc_Char)0x6d,  /* [6329] */
    (xdc_Char)0x65,  /* [6330] */
    (xdc_Char)0x6e,  /* [6331] */
    (xdc_Char)0x74,  /* [6332] */
    (xdc_Char)0x65,  /* [6333] */
    (xdc_Char)0x64,  /* [6334] */
    (xdc_Char)0x20,  /* [6335] */
    (xdc_Char)0x61,  /* [6336] */
    (xdc_Char)0x74,  /* [6337] */
    (xdc_Char)0x20,  /* [6338] */
    (xdc_Char)0x25,  /* [6339] */
    (xdc_Char)0x24,  /* [6340] */
    (xdc_Char)0x46,  /* [6341] */
    (xdc_Char)0x2e,  /* [6342] */
    (xdc_Char)0x0,  /* [6343] */
    (xdc_Char)0x45,  /* [6344] */
    (xdc_Char)0x52,  /* [6345] */
    (xdc_Char)0x52,  /* [6346] */
    (xdc_Char)0x4f,  /* [6347] */
    (xdc_Char)0x52,  /* [6348] */
    (xdc_Char)0x3a,  /* [6349] */
    (xdc_Char)0x20,  /* [6350] */
    (xdc_Char)0x53,  /* [6351] */
    (xdc_Char)0x74,  /* [6352] */
    (xdc_Char)0x61,  /* [6353] */
    (xdc_Char)0x63,  /* [6354] */
    (xdc_Char)0x6b,  /* [6355] */
    (xdc_Char)0x20,  /* [6356] */
    (xdc_Char)0x4f,  /* [6357] */
    (xdc_Char)0x76,  /* [6358] */
    (xdc_Char)0x65,  /* [6359] */
    (xdc_Char)0x72,  /* [6360] */
    (xdc_Char)0x66,  /* [6361] */
    (xdc_Char)0x6c,  /* [6362] */
    (xdc_Char)0x6f,  /* [6363] */
    (xdc_Char)0x77,  /* [6364] */
    (xdc_Char)0x20,  /* [6365] */
    (xdc_Char)0x64,  /* [6366] */
    (xdc_Char)0x65,  /* [6367] */
    (xdc_Char)0x74,  /* [6368] */
    (xdc_Char)0x65,  /* [6369] */
    (xdc_Char)0x63,  /* [6370] */
    (xdc_Char)0x74,  /* [6371] */
    (xdc_Char)0x65,  /* [6372] */
    (xdc_Char)0x64,  /* [6373] */
    (xdc_Char)0x20,  /* [6374] */
    (xdc_Char)0x61,  /* [6375] */
    (xdc_Char)0x74,  /* [6376] */
    (xdc_Char)0x20,  /* [6377] */
    (xdc_Char)0x25,  /* [6378] */
    (xdc_Char)0x24,  /* [6379] */
    (xdc_Char)0x46,  /* [6380] */
    (xdc_Char)0x2e,  /* [6381] */
    (xdc_Char)0x0,  /* [6382] */
    (xdc_Char)0x45,  /* [6383] */
    (xdc_Char)0x52,  /* [6384] */
    (xdc_Char)0x52,  /* [6385] */
    (xdc_Char)0x4f,  /* [6386] */
    (xdc_Char)0x52,  /* [6387] */
    (xdc_Char)0x3a,  /* [6388] */
    (xdc_Char)0x20,  /* [6389] */
    (xdc_Char)0x49,  /* [6390] */
    (xdc_Char)0x6c,  /* [6391] */
    (xdc_Char)0x6c,  /* [6392] */
    (xdc_Char)0x65,  /* [6393] */
    (xdc_Char)0x67,  /* [6394] */
    (xdc_Char)0x61,  /* [6395] */
    (xdc_Char)0x6c,  /* [6396] */
    (xdc_Char)0x20,  /* [6397] */
    (xdc_Char)0x49,  /* [6398] */
    (xdc_Char)0x6e,  /* [6399] */
    (xdc_Char)0x73,  /* [6400] */
    (xdc_Char)0x74,  /* [6401] */
    (xdc_Char)0x72,  /* [6402] */
    (xdc_Char)0x75,  /* [6403] */
    (xdc_Char)0x63,  /* [6404] */
    (xdc_Char)0x74,  /* [6405] */
    (xdc_Char)0x69,  /* [6406] */
    (xdc_Char)0x6f,  /* [6407] */
    (xdc_Char)0x6e,  /* [6408] */
    (xdc_Char)0x20,  /* [6409] */
    (xdc_Char)0x65,  /* [6410] */
    (xdc_Char)0x78,  /* [6411] */
    (xdc_Char)0x65,  /* [6412] */
    (xdc_Char)0x63,  /* [6413] */
    (xdc_Char)0x75,  /* [6414] */
    (xdc_Char)0x74,  /* [6415] */
    (xdc_Char)0x65,  /* [6416] */
    (xdc_Char)0x64,  /* [6417] */
    (xdc_Char)0x20,  /* [6418] */
    (xdc_Char)0x61,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x20,  /* [6421] */
    (xdc_Char)0x25,  /* [6422] */
    (xdc_Char)0x24,  /* [6423] */
    (xdc_Char)0x46,  /* [6424] */
    (xdc_Char)0x2e,  /* [6425] */
    (xdc_Char)0x0,  /* [6426] */
    (xdc_Char)0x45,  /* [6427] */
    (xdc_Char)0x52,  /* [6428] */
    (xdc_Char)0x52,  /* [6429] */
    (xdc_Char)0x4f,  /* [6430] */
    (xdc_Char)0x52,  /* [6431] */
    (xdc_Char)0x3a,  /* [6432] */
    (xdc_Char)0x20,  /* [6433] */
    (xdc_Char)0x45,  /* [6434] */
    (xdc_Char)0x6e,  /* [6435] */
    (xdc_Char)0x74,  /* [6436] */
    (xdc_Char)0x72,  /* [6437] */
    (xdc_Char)0x79,  /* [6438] */
    (xdc_Char)0x20,  /* [6439] */
    (xdc_Char)0x50,  /* [6440] */
    (xdc_Char)0x6f,  /* [6441] */
    (xdc_Char)0x69,  /* [6442] */
    (xdc_Char)0x6e,  /* [6443] */
    (xdc_Char)0x74,  /* [6444] */
    (xdc_Char)0x20,  /* [6445] */
    (xdc_Char)0x4e,  /* [6446] */
    (xdc_Char)0x6f,  /* [6447] */
    (xdc_Char)0x74,  /* [6448] */
    (xdc_Char)0x20,  /* [6449] */
    (xdc_Char)0x46,  /* [6450] */
    (xdc_Char)0x6f,  /* [6451] */
    (xdc_Char)0x75,  /* [6452] */
    (xdc_Char)0x6e,  /* [6453] */
    (xdc_Char)0x64,  /* [6454] */
    (xdc_Char)0x20,  /* [6455] */
    (xdc_Char)0x61,  /* [6456] */
    (xdc_Char)0x74,  /* [6457] */
    (xdc_Char)0x20,  /* [6458] */
    (xdc_Char)0x25,  /* [6459] */
    (xdc_Char)0x24,  /* [6460] */
    (xdc_Char)0x46,  /* [6461] */
    (xdc_Char)0x2e,  /* [6462] */
    (xdc_Char)0x0,  /* [6463] */
    (xdc_Char)0x45,  /* [6464] */
    (xdc_Char)0x52,  /* [6465] */
    (xdc_Char)0x52,  /* [6466] */
    (xdc_Char)0x4f,  /* [6467] */
    (xdc_Char)0x52,  /* [6468] */
    (xdc_Char)0x3a,  /* [6469] */
    (xdc_Char)0x20,  /* [6470] */
    (xdc_Char)0x4d,  /* [6471] */
    (xdc_Char)0x6f,  /* [6472] */
    (xdc_Char)0x64,  /* [6473] */
    (xdc_Char)0x75,  /* [6474] */
    (xdc_Char)0x6c,  /* [6475] */
    (xdc_Char)0x65,  /* [6476] */
    (xdc_Char)0x20,  /* [6477] */
    (xdc_Char)0x6e,  /* [6478] */
    (xdc_Char)0x6f,  /* [6479] */
    (xdc_Char)0x74,  /* [6480] */
    (xdc_Char)0x20,  /* [6481] */
    (xdc_Char)0x66,  /* [6482] */
    (xdc_Char)0x6f,  /* [6483] */
    (xdc_Char)0x75,  /* [6484] */
    (xdc_Char)0x6e,  /* [6485] */
    (xdc_Char)0x64,  /* [6486] */
    (xdc_Char)0x20,  /* [6487] */
    (xdc_Char)0x61,  /* [6488] */
    (xdc_Char)0x74,  /* [6489] */
    (xdc_Char)0x20,  /* [6490] */
    (xdc_Char)0x25,  /* [6491] */
    (xdc_Char)0x24,  /* [6492] */
    (xdc_Char)0x46,  /* [6493] */
    (xdc_Char)0x2e,  /* [6494] */
    (xdc_Char)0x20,  /* [6495] */
    (xdc_Char)0x5b,  /* [6496] */
    (xdc_Char)0x4d,  /* [6497] */
    (xdc_Char)0x4f,  /* [6498] */
    (xdc_Char)0x44,  /* [6499] */
    (xdc_Char)0x55,  /* [6500] */
    (xdc_Char)0x4c,  /* [6501] */
    (xdc_Char)0x45,  /* [6502] */
    (xdc_Char)0x5f,  /* [6503] */
    (xdc_Char)0x49,  /* [6504] */
    (xdc_Char)0x44,  /* [6505] */
    (xdc_Char)0x5d,  /* [6506] */
    (xdc_Char)0x30,  /* [6507] */
    (xdc_Char)0x78,  /* [6508] */
    (xdc_Char)0x25,  /* [6509] */
    (xdc_Char)0x78,  /* [6510] */
    (xdc_Char)0x2e,  /* [6511] */
    (xdc_Char)0x0,  /* [6512] */
    (xdc_Char)0x45,  /* [6513] */
    (xdc_Char)0x52,  /* [6514] */
    (xdc_Char)0x52,  /* [6515] */
    (xdc_Char)0x4f,  /* [6516] */
    (xdc_Char)0x52,  /* [6517] */
    (xdc_Char)0x3a,  /* [6518] */
    (xdc_Char)0x20,  /* [6519] */
    (xdc_Char)0x46,  /* [6520] */
    (xdc_Char)0x6c,  /* [6521] */
    (xdc_Char)0x6f,  /* [6522] */
    (xdc_Char)0x61,  /* [6523] */
    (xdc_Char)0x74,  /* [6524] */
    (xdc_Char)0x69,  /* [6525] */
    (xdc_Char)0x6e,  /* [6526] */
    (xdc_Char)0x67,  /* [6527] */
    (xdc_Char)0x20,  /* [6528] */
    (xdc_Char)0x50,  /* [6529] */
    (xdc_Char)0x6f,  /* [6530] */
    (xdc_Char)0x69,  /* [6531] */
    (xdc_Char)0x6e,  /* [6532] */
    (xdc_Char)0x74,  /* [6533] */
    (xdc_Char)0x20,  /* [6534] */
    (xdc_Char)0x45,  /* [6535] */
    (xdc_Char)0x72,  /* [6536] */
    (xdc_Char)0x72,  /* [6537] */
    (xdc_Char)0x6f,  /* [6538] */
    (xdc_Char)0x72,  /* [6539] */
    (xdc_Char)0x20,  /* [6540] */
    (xdc_Char)0x61,  /* [6541] */
    (xdc_Char)0x74,  /* [6542] */
    (xdc_Char)0x20,  /* [6543] */
    (xdc_Char)0x25,  /* [6544] */
    (xdc_Char)0x24,  /* [6545] */
    (xdc_Char)0x46,  /* [6546] */
    (xdc_Char)0x2e,  /* [6547] */
    (xdc_Char)0x0,  /* [6548] */
    (xdc_Char)0x45,  /* [6549] */
    (xdc_Char)0x52,  /* [6550] */
    (xdc_Char)0x52,  /* [6551] */
    (xdc_Char)0x4f,  /* [6552] */
    (xdc_Char)0x52,  /* [6553] */
    (xdc_Char)0x3a,  /* [6554] */
    (xdc_Char)0x20,  /* [6555] */
    (xdc_Char)0x49,  /* [6556] */
    (xdc_Char)0x6e,  /* [6557] */
    (xdc_Char)0x76,  /* [6558] */
    (xdc_Char)0x61,  /* [6559] */
    (xdc_Char)0x6c,  /* [6560] */
    (xdc_Char)0x69,  /* [6561] */
    (xdc_Char)0x64,  /* [6562] */
    (xdc_Char)0x20,  /* [6563] */
    (xdc_Char)0x50,  /* [6564] */
    (xdc_Char)0x61,  /* [6565] */
    (xdc_Char)0x72,  /* [6566] */
    (xdc_Char)0x61,  /* [6567] */
    (xdc_Char)0x6d,  /* [6568] */
    (xdc_Char)0x65,  /* [6569] */
    (xdc_Char)0x74,  /* [6570] */
    (xdc_Char)0x65,  /* [6571] */
    (xdc_Char)0x72,  /* [6572] */
    (xdc_Char)0x20,  /* [6573] */
    (xdc_Char)0x61,  /* [6574] */
    (xdc_Char)0x74,  /* [6575] */
    (xdc_Char)0x20,  /* [6576] */
    (xdc_Char)0x25,  /* [6577] */
    (xdc_Char)0x24,  /* [6578] */
    (xdc_Char)0x46,  /* [6579] */
    (xdc_Char)0x2e,  /* [6580] */
    (xdc_Char)0x20,  /* [6581] */
    (xdc_Char)0x5b,  /* [6582] */
    (xdc_Char)0x50,  /* [6583] */
    (xdc_Char)0x61,  /* [6584] */
    (xdc_Char)0x72,  /* [6585] */
    (xdc_Char)0x61,  /* [6586] */
    (xdc_Char)0x6d,  /* [6587] */
    (xdc_Char)0x4e,  /* [6588] */
    (xdc_Char)0x75,  /* [6589] */
    (xdc_Char)0x6d,  /* [6590] */
    (xdc_Char)0x5d,  /* [6591] */
    (xdc_Char)0x25,  /* [6592] */
    (xdc_Char)0x64,  /* [6593] */
    (xdc_Char)0x20,  /* [6594] */
    (xdc_Char)0x5b,  /* [6595] */
    (xdc_Char)0x50,  /* [6596] */
    (xdc_Char)0x61,  /* [6597] */
    (xdc_Char)0x72,  /* [6598] */
    (xdc_Char)0x61,  /* [6599] */
    (xdc_Char)0x6d,  /* [6600] */
    (xdc_Char)0x56,  /* [6601] */
    (xdc_Char)0x61,  /* [6602] */
    (xdc_Char)0x6c,  /* [6603] */
    (xdc_Char)0x75,  /* [6604] */
    (xdc_Char)0x65,  /* [6605] */
    (xdc_Char)0x5d,  /* [6606] */
    (xdc_Char)0x30,  /* [6607] */
    (xdc_Char)0x78,  /* [6608] */
    (xdc_Char)0x25,  /* [6609] */
    (xdc_Char)0x78,  /* [6610] */
    (xdc_Char)0x0,  /* [6611] */
    (xdc_Char)0x57,  /* [6612] */
    (xdc_Char)0x41,  /* [6613] */
    (xdc_Char)0x52,  /* [6614] */
    (xdc_Char)0x4e,  /* [6615] */
    (xdc_Char)0x49,  /* [6616] */
    (xdc_Char)0x4e,  /* [6617] */
    (xdc_Char)0x47,  /* [6618] */
    (xdc_Char)0x3a,  /* [6619] */
    (xdc_Char)0x20,  /* [6620] */
    (xdc_Char)0x45,  /* [6621] */
    (xdc_Char)0x76,  /* [6622] */
    (xdc_Char)0x65,  /* [6623] */
    (xdc_Char)0x6e,  /* [6624] */
    (xdc_Char)0x74,  /* [6625] */
    (xdc_Char)0x43,  /* [6626] */
    (xdc_Char)0x6f,  /* [6627] */
    (xdc_Char)0x64,  /* [6628] */
    (xdc_Char)0x65,  /* [6629] */
    (xdc_Char)0x3a,  /* [6630] */
    (xdc_Char)0x30,  /* [6631] */
    (xdc_Char)0x78,  /* [6632] */
    (xdc_Char)0x25,  /* [6633] */
    (xdc_Char)0x78,  /* [6634] */
    (xdc_Char)0x0,  /* [6635] */
    (xdc_Char)0x57,  /* [6636] */
    (xdc_Char)0x41,  /* [6637] */
    (xdc_Char)0x52,  /* [6638] */
    (xdc_Char)0x4e,  /* [6639] */
    (xdc_Char)0x49,  /* [6640] */
    (xdc_Char)0x4e,  /* [6641] */
    (xdc_Char)0x47,  /* [6642] */
    (xdc_Char)0x3a,  /* [6643] */
    (xdc_Char)0x20,  /* [6644] */
    (xdc_Char)0x45,  /* [6645] */
    (xdc_Char)0x76,  /* [6646] */
    (xdc_Char)0x65,  /* [6647] */
    (xdc_Char)0x6e,  /* [6648] */
    (xdc_Char)0x74,  /* [6649] */
    (xdc_Char)0x43,  /* [6650] */
    (xdc_Char)0x6f,  /* [6651] */
    (xdc_Char)0x64,  /* [6652] */
    (xdc_Char)0x65,  /* [6653] */
    (xdc_Char)0x3a,  /* [6654] */
    (xdc_Char)0x30,  /* [6655] */
    (xdc_Char)0x78,  /* [6656] */
    (xdc_Char)0x25,  /* [6657] */
    (xdc_Char)0x78,  /* [6658] */
    (xdc_Char)0x2e,  /* [6659] */
    (xdc_Char)0x20,  /* [6660] */
    (xdc_Char)0x25,  /* [6661] */
    (xdc_Char)0x24,  /* [6662] */
    (xdc_Char)0x53,  /* [6663] */
    (xdc_Char)0x0,  /* [6664] */
    (xdc_Char)0x49,  /* [6665] */
    (xdc_Char)0x4e,  /* [6666] */
    (xdc_Char)0x46,  /* [6667] */
    (xdc_Char)0x4f,  /* [6668] */
    (xdc_Char)0x3a,  /* [6669] */
    (xdc_Char)0x20,  /* [6670] */
    (xdc_Char)0x45,  /* [6671] */
    (xdc_Char)0x76,  /* [6672] */
    (xdc_Char)0x65,  /* [6673] */
    (xdc_Char)0x6e,  /* [6674] */
    (xdc_Char)0x74,  /* [6675] */
    (xdc_Char)0x43,  /* [6676] */
    (xdc_Char)0x6f,  /* [6677] */
    (xdc_Char)0x64,  /* [6678] */
    (xdc_Char)0x65,  /* [6679] */
    (xdc_Char)0x3a,  /* [6680] */
    (xdc_Char)0x20,  /* [6681] */
    (xdc_Char)0x30,  /* [6682] */
    (xdc_Char)0x78,  /* [6683] */
    (xdc_Char)0x25,  /* [6684] */
    (xdc_Char)0x78,  /* [6685] */
    (xdc_Char)0x0,  /* [6686] */
    (xdc_Char)0x49,  /* [6687] */
    (xdc_Char)0x4e,  /* [6688] */
    (xdc_Char)0x46,  /* [6689] */
    (xdc_Char)0x4f,  /* [6690] */
    (xdc_Char)0x3a,  /* [6691] */
    (xdc_Char)0x20,  /* [6692] */
    (xdc_Char)0x45,  /* [6693] */
    (xdc_Char)0x76,  /* [6694] */
    (xdc_Char)0x65,  /* [6695] */
    (xdc_Char)0x6e,  /* [6696] */
    (xdc_Char)0x74,  /* [6697] */
    (xdc_Char)0x43,  /* [6698] */
    (xdc_Char)0x6f,  /* [6699] */
    (xdc_Char)0x64,  /* [6700] */
    (xdc_Char)0x65,  /* [6701] */
    (xdc_Char)0x3a,  /* [6702] */
    (xdc_Char)0x30,  /* [6703] */
    (xdc_Char)0x78,  /* [6704] */
    (xdc_Char)0x25,  /* [6705] */
    (xdc_Char)0x78,  /* [6706] */
    (xdc_Char)0x2e,  /* [6707] */
    (xdc_Char)0x20,  /* [6708] */
    (xdc_Char)0x20,  /* [6709] */
    (xdc_Char)0x25,  /* [6710] */
    (xdc_Char)0x24,  /* [6711] */
    (xdc_Char)0x53,  /* [6712] */
    (xdc_Char)0x0,  /* [6713] */
    (xdc_Char)0x44,  /* [6714] */
    (xdc_Char)0x45,  /* [6715] */
    (xdc_Char)0x54,  /* [6716] */
    (xdc_Char)0x41,  /* [6717] */
    (xdc_Char)0x49,  /* [6718] */
    (xdc_Char)0x4c,  /* [6719] */
    (xdc_Char)0x3a,  /* [6720] */
    (xdc_Char)0x20,  /* [6721] */
    (xdc_Char)0x45,  /* [6722] */
    (xdc_Char)0x76,  /* [6723] */
    (xdc_Char)0x65,  /* [6724] */
    (xdc_Char)0x6e,  /* [6725] */
    (xdc_Char)0x74,  /* [6726] */
    (xdc_Char)0x43,  /* [6727] */
    (xdc_Char)0x6f,  /* [6728] */
    (xdc_Char)0x64,  /* [6729] */
    (xdc_Char)0x65,  /* [6730] */
    (xdc_Char)0x3a,  /* [6731] */
    (xdc_Char)0x30,  /* [6732] */
    (xdc_Char)0x78,  /* [6733] */
    (xdc_Char)0x25,  /* [6734] */
    (xdc_Char)0x78,  /* [6735] */
    (xdc_Char)0x0,  /* [6736] */
    (xdc_Char)0x44,  /* [6737] */
    (xdc_Char)0x45,  /* [6738] */
    (xdc_Char)0x54,  /* [6739] */
    (xdc_Char)0x41,  /* [6740] */
    (xdc_Char)0x49,  /* [6741] */
    (xdc_Char)0x4c,  /* [6742] */
    (xdc_Char)0x3a,  /* [6743] */
    (xdc_Char)0x20,  /* [6744] */
    (xdc_Char)0x45,  /* [6745] */
    (xdc_Char)0x76,  /* [6746] */
    (xdc_Char)0x65,  /* [6747] */
    (xdc_Char)0x6e,  /* [6748] */
    (xdc_Char)0x74,  /* [6749] */
    (xdc_Char)0x43,  /* [6750] */
    (xdc_Char)0x6f,  /* [6751] */
    (xdc_Char)0x64,  /* [6752] */
    (xdc_Char)0x65,  /* [6753] */
    (xdc_Char)0x3a,  /* [6754] */
    (xdc_Char)0x30,  /* [6755] */
    (xdc_Char)0x78,  /* [6756] */
    (xdc_Char)0x25,  /* [6757] */
    (xdc_Char)0x78,  /* [6758] */
    (xdc_Char)0x2e,  /* [6759] */
    (xdc_Char)0x20,  /* [6760] */
    (xdc_Char)0x20,  /* [6761] */
    (xdc_Char)0x25,  /* [6762] */
    (xdc_Char)0x24,  /* [6763] */
    (xdc_Char)0x53,  /* [6764] */
    (xdc_Char)0x0,  /* [6765] */
    (xdc_Char)0x56,  /* [6766] */
    (xdc_Char)0x41,  /* [6767] */
    (xdc_Char)0x4c,  /* [6768] */
    (xdc_Char)0x55,  /* [6769] */
    (xdc_Char)0x45,  /* [6770] */
    (xdc_Char)0x3d,  /* [6771] */
    (xdc_Char)0x25,  /* [6772] */
    (xdc_Char)0x64,  /* [6773] */
    (xdc_Char)0x20,  /* [6774] */
    (xdc_Char)0x28,  /* [6775] */
    (xdc_Char)0x41,  /* [6776] */
    (xdc_Char)0x75,  /* [6777] */
    (xdc_Char)0x78,  /* [6778] */
    (xdc_Char)0x44,  /* [6779] */
    (xdc_Char)0x61,  /* [6780] */
    (xdc_Char)0x74,  /* [6781] */
    (xdc_Char)0x61,  /* [6782] */
    (xdc_Char)0x3d,  /* [6783] */
    (xdc_Char)0x25,  /* [6784] */
    (xdc_Char)0x64,  /* [6785] */
    (xdc_Char)0x2c,  /* [6786] */
    (xdc_Char)0x20,  /* [6787] */
    (xdc_Char)0x25,  /* [6788] */
    (xdc_Char)0x64,  /* [6789] */
    (xdc_Char)0x29,  /* [6790] */
    (xdc_Char)0x20,  /* [6791] */
    (xdc_Char)0x4b,  /* [6792] */
    (xdc_Char)0x65,  /* [6793] */
    (xdc_Char)0x79,  /* [6794] */
    (xdc_Char)0x3a,  /* [6795] */
    (xdc_Char)0x25,  /* [6796] */
    (xdc_Char)0x24,  /* [6797] */
    (xdc_Char)0x53,  /* [6798] */
    (xdc_Char)0x0,  /* [6799] */
    (xdc_Char)0x4c,  /* [6800] */
    (xdc_Char)0x6f,  /* [6801] */
    (xdc_Char)0x67,  /* [6802] */
    (xdc_Char)0x67,  /* [6803] */
    (xdc_Char)0x65,  /* [6804] */
    (xdc_Char)0x72,  /* [6805] */
    (xdc_Char)0x53,  /* [6806] */
    (xdc_Char)0x74,  /* [6807] */
    (xdc_Char)0x6f,  /* [6808] */
    (xdc_Char)0x70,  /* [6809] */
    (xdc_Char)0x4d,  /* [6810] */
    (xdc_Char)0x6f,  /* [6811] */
    (xdc_Char)0x64,  /* [6812] */
    (xdc_Char)0x65,  /* [6813] */
    (xdc_Char)0x20,  /* [6814] */
    (xdc_Char)0x54,  /* [6815] */
    (xdc_Char)0x65,  /* [6816] */
    (xdc_Char)0x73,  /* [6817] */
    (xdc_Char)0x74,  /* [6818] */
    (xdc_Char)0x0,  /* [6819] */
    (xdc_Char)0x4c,  /* [6820] */
    (xdc_Char)0x53,  /* [6821] */
    (xdc_Char)0x5f,  /* [6822] */
    (xdc_Char)0x63,  /* [6823] */
    (xdc_Char)0x70,  /* [6824] */
    (xdc_Char)0x75,  /* [6825] */
    (xdc_Char)0x4c,  /* [6826] */
    (xdc_Char)0x6f,  /* [6827] */
    (xdc_Char)0x61,  /* [6828] */
    (xdc_Char)0x64,  /* [6829] */
    (xdc_Char)0x3a,  /* [6830] */
    (xdc_Char)0x20,  /* [6831] */
    (xdc_Char)0x25,  /* [6832] */
    (xdc_Char)0x64,  /* [6833] */
    (xdc_Char)0x25,  /* [6834] */
    (xdc_Char)0x25,  /* [6835] */
    (xdc_Char)0x0,  /* [6836] */
    (xdc_Char)0x4c,  /* [6837] */
    (xdc_Char)0x53,  /* [6838] */
    (xdc_Char)0x5f,  /* [6839] */
    (xdc_Char)0x68,  /* [6840] */
    (xdc_Char)0x77,  /* [6841] */
    (xdc_Char)0x69,  /* [6842] */
    (xdc_Char)0x4c,  /* [6843] */
    (xdc_Char)0x6f,  /* [6844] */
    (xdc_Char)0x61,  /* [6845] */
    (xdc_Char)0x64,  /* [6846] */
    (xdc_Char)0x3a,  /* [6847] */
    (xdc_Char)0x20,  /* [6848] */
    (xdc_Char)0x25,  /* [6849] */
    (xdc_Char)0x64,  /* [6850] */
    (xdc_Char)0x2c,  /* [6851] */
    (xdc_Char)0x25,  /* [6852] */
    (xdc_Char)0x64,  /* [6853] */
    (xdc_Char)0x0,  /* [6854] */
    (xdc_Char)0x4c,  /* [6855] */
    (xdc_Char)0x53,  /* [6856] */
    (xdc_Char)0x5f,  /* [6857] */
    (xdc_Char)0x73,  /* [6858] */
    (xdc_Char)0x77,  /* [6859] */
    (xdc_Char)0x69,  /* [6860] */
    (xdc_Char)0x4c,  /* [6861] */
    (xdc_Char)0x6f,  /* [6862] */
    (xdc_Char)0x61,  /* [6863] */
    (xdc_Char)0x64,  /* [6864] */
    (xdc_Char)0x3a,  /* [6865] */
    (xdc_Char)0x20,  /* [6866] */
    (xdc_Char)0x25,  /* [6867] */
    (xdc_Char)0x64,  /* [6868] */
    (xdc_Char)0x2c,  /* [6869] */
    (xdc_Char)0x25,  /* [6870] */
    (xdc_Char)0x64,  /* [6871] */
    (xdc_Char)0x0,  /* [6872] */
    (xdc_Char)0x4c,  /* [6873] */
    (xdc_Char)0x53,  /* [6874] */
    (xdc_Char)0x5f,  /* [6875] */
    (xdc_Char)0x74,  /* [6876] */
    (xdc_Char)0x61,  /* [6877] */
    (xdc_Char)0x73,  /* [6878] */
    (xdc_Char)0x6b,  /* [6879] */
    (xdc_Char)0x4c,  /* [6880] */
    (xdc_Char)0x6f,  /* [6881] */
    (xdc_Char)0x61,  /* [6882] */
    (xdc_Char)0x64,  /* [6883] */
    (xdc_Char)0x3a,  /* [6884] */
    (xdc_Char)0x20,  /* [6885] */
    (xdc_Char)0x30,  /* [6886] */
    (xdc_Char)0x78,  /* [6887] */
    (xdc_Char)0x25,  /* [6888] */
    (xdc_Char)0x78,  /* [6889] */
    (xdc_Char)0x2c,  /* [6890] */
    (xdc_Char)0x25,  /* [6891] */
    (xdc_Char)0x64,  /* [6892] */
    (xdc_Char)0x2c,  /* [6893] */
    (xdc_Char)0x25,  /* [6894] */
    (xdc_Char)0x64,  /* [6895] */
    (xdc_Char)0x2c,  /* [6896] */
    (xdc_Char)0x30,  /* [6897] */
    (xdc_Char)0x78,  /* [6898] */
    (xdc_Char)0x25,  /* [6899] */
    (xdc_Char)0x78,  /* [6900] */
    (xdc_Char)0x0,  /* [6901] */
    (xdc_Char)0x78,  /* [6902] */
    (xdc_Char)0x64,  /* [6903] */
    (xdc_Char)0x63,  /* [6904] */
    (xdc_Char)0x2e,  /* [6905] */
    (xdc_Char)0x0,  /* [6906] */
    (xdc_Char)0x72,  /* [6907] */
    (xdc_Char)0x75,  /* [6908] */
    (xdc_Char)0x6e,  /* [6909] */
    (xdc_Char)0x74,  /* [6910] */
    (xdc_Char)0x69,  /* [6911] */
    (xdc_Char)0x6d,  /* [6912] */
    (xdc_Char)0x65,  /* [6913] */
    (xdc_Char)0x2e,  /* [6914] */
    (xdc_Char)0x0,  /* [6915] */
    (xdc_Char)0x41,  /* [6916] */
    (xdc_Char)0x73,  /* [6917] */
    (xdc_Char)0x73,  /* [6918] */
    (xdc_Char)0x65,  /* [6919] */
    (xdc_Char)0x72,  /* [6920] */
    (xdc_Char)0x74,  /* [6921] */
    (xdc_Char)0x0,  /* [6922] */
    (xdc_Char)0x43,  /* [6923] */
    (xdc_Char)0x6f,  /* [6924] */
    (xdc_Char)0x72,  /* [6925] */
    (xdc_Char)0x65,  /* [6926] */
    (xdc_Char)0x0,  /* [6927] */
    (xdc_Char)0x44,  /* [6928] */
    (xdc_Char)0x65,  /* [6929] */
    (xdc_Char)0x66,  /* [6930] */
    (xdc_Char)0x61,  /* [6931] */
    (xdc_Char)0x75,  /* [6932] */
    (xdc_Char)0x6c,  /* [6933] */
    (xdc_Char)0x74,  /* [6934] */
    (xdc_Char)0x73,  /* [6935] */
    (xdc_Char)0x0,  /* [6936] */
    (xdc_Char)0x44,  /* [6937] */
    (xdc_Char)0x69,  /* [6938] */
    (xdc_Char)0x61,  /* [6939] */
    (xdc_Char)0x67,  /* [6940] */
    (xdc_Char)0x73,  /* [6941] */
    (xdc_Char)0x0,  /* [6942] */
    (xdc_Char)0x45,  /* [6943] */
    (xdc_Char)0x72,  /* [6944] */
    (xdc_Char)0x72,  /* [6945] */
    (xdc_Char)0x6f,  /* [6946] */
    (xdc_Char)0x72,  /* [6947] */
    (xdc_Char)0x0,  /* [6948] */
    (xdc_Char)0x47,  /* [6949] */
    (xdc_Char)0x61,  /* [6950] */
    (xdc_Char)0x74,  /* [6951] */
    (xdc_Char)0x65,  /* [6952] */
    (xdc_Char)0x0,  /* [6953] */
    (xdc_Char)0x4c,  /* [6954] */
    (xdc_Char)0x6f,  /* [6955] */
    (xdc_Char)0x67,  /* [6956] */
    (xdc_Char)0x0,  /* [6957] */
    (xdc_Char)0x4d,  /* [6958] */
    (xdc_Char)0x61,  /* [6959] */
    (xdc_Char)0x69,  /* [6960] */
    (xdc_Char)0x6e,  /* [6961] */
    (xdc_Char)0x0,  /* [6962] */
    (xdc_Char)0x4d,  /* [6963] */
    (xdc_Char)0x65,  /* [6964] */
    (xdc_Char)0x6d,  /* [6965] */
    (xdc_Char)0x6f,  /* [6966] */
    (xdc_Char)0x72,  /* [6967] */
    (xdc_Char)0x79,  /* [6968] */
    (xdc_Char)0x0,  /* [6969] */
    (xdc_Char)0x48,  /* [6970] */
    (xdc_Char)0x65,  /* [6971] */
    (xdc_Char)0x61,  /* [6972] */
    (xdc_Char)0x70,  /* [6973] */
    (xdc_Char)0x53,  /* [6974] */
    (xdc_Char)0x74,  /* [6975] */
    (xdc_Char)0x64,  /* [6976] */
    (xdc_Char)0x0,  /* [6977] */
    (xdc_Char)0x52,  /* [6978] */
    (xdc_Char)0x65,  /* [6979] */
    (xdc_Char)0x67,  /* [6980] */
    (xdc_Char)0x69,  /* [6981] */
    (xdc_Char)0x73,  /* [6982] */
    (xdc_Char)0x74,  /* [6983] */
    (xdc_Char)0x72,  /* [6984] */
    (xdc_Char)0x79,  /* [6985] */
    (xdc_Char)0x0,  /* [6986] */
    (xdc_Char)0x53,  /* [6987] */
    (xdc_Char)0x74,  /* [6988] */
    (xdc_Char)0x61,  /* [6989] */
    (xdc_Char)0x72,  /* [6990] */
    (xdc_Char)0x74,  /* [6991] */
    (xdc_Char)0x75,  /* [6992] */
    (xdc_Char)0x70,  /* [6993] */
    (xdc_Char)0x0,  /* [6994] */
    (xdc_Char)0x53,  /* [6995] */
    (xdc_Char)0x79,  /* [6996] */
    (xdc_Char)0x73,  /* [6997] */
    (xdc_Char)0x74,  /* [6998] */
    (xdc_Char)0x65,  /* [6999] */
    (xdc_Char)0x6d,  /* [7000] */
    (xdc_Char)0x0,  /* [7001] */
    (xdc_Char)0x53,  /* [7002] */
    (xdc_Char)0x79,  /* [7003] */
    (xdc_Char)0x73,  /* [7004] */
    (xdc_Char)0x4d,  /* [7005] */
    (xdc_Char)0x69,  /* [7006] */
    (xdc_Char)0x6e,  /* [7007] */
    (xdc_Char)0x0,  /* [7008] */
    (xdc_Char)0x54,  /* [7009] */
    (xdc_Char)0x65,  /* [7010] */
    (xdc_Char)0x78,  /* [7011] */
    (xdc_Char)0x74,  /* [7012] */
    (xdc_Char)0x0,  /* [7013] */
    (xdc_Char)0x54,  /* [7014] */
    (xdc_Char)0x69,  /* [7015] */
    (xdc_Char)0x6d,  /* [7016] */
    (xdc_Char)0x65,  /* [7017] */
    (xdc_Char)0x73,  /* [7018] */
    (xdc_Char)0x74,  /* [7019] */
    (xdc_Char)0x61,  /* [7020] */
    (xdc_Char)0x6d,  /* [7021] */
    (xdc_Char)0x70,  /* [7022] */
    (xdc_Char)0x0,  /* [7023] */
    (xdc_Char)0x54,  /* [7024] */
    (xdc_Char)0x79,  /* [7025] */
    (xdc_Char)0x70,  /* [7026] */
    (xdc_Char)0x65,  /* [7027] */
    (xdc_Char)0x73,  /* [7028] */
    (xdc_Char)0x0,  /* [7029] */
    (xdc_Char)0x74,  /* [7030] */
    (xdc_Char)0x69,  /* [7031] */
    (xdc_Char)0x2e,  /* [7032] */
    (xdc_Char)0x0,  /* [7033] */
    (xdc_Char)0x73,  /* [7034] */
    (xdc_Char)0x79,  /* [7035] */
    (xdc_Char)0x73,  /* [7036] */
    (xdc_Char)0x62,  /* [7037] */
    (xdc_Char)0x69,  /* [7038] */
    (xdc_Char)0x6f,  /* [7039] */
    (xdc_Char)0x73,  /* [7040] */
    (xdc_Char)0x2e,  /* [7041] */
    (xdc_Char)0x0,  /* [7042] */
    (xdc_Char)0x66,  /* [7043] */
    (xdc_Char)0x61,  /* [7044] */
    (xdc_Char)0x6d,  /* [7045] */
    (xdc_Char)0x69,  /* [7046] */
    (xdc_Char)0x6c,  /* [7047] */
    (xdc_Char)0x79,  /* [7048] */
    (xdc_Char)0x2e,  /* [7049] */
    (xdc_Char)0x0,  /* [7050] */
    (xdc_Char)0x6d,  /* [7051] */
    (xdc_Char)0x73,  /* [7052] */
    (xdc_Char)0x70,  /* [7053] */
    (xdc_Char)0x34,  /* [7054] */
    (xdc_Char)0x33,  /* [7055] */
    (xdc_Char)0x30,  /* [7056] */
    (xdc_Char)0x2e,  /* [7057] */
    (xdc_Char)0x0,  /* [7058] */
    (xdc_Char)0x48,  /* [7059] */
    (xdc_Char)0x77,  /* [7060] */
    (xdc_Char)0x69,  /* [7061] */
    (xdc_Char)0x0,  /* [7062] */
    (xdc_Char)0x49,  /* [7063] */
    (xdc_Char)0x6e,  /* [7064] */
    (xdc_Char)0x74,  /* [7065] */
    (xdc_Char)0x72,  /* [7066] */
    (xdc_Char)0x69,  /* [7067] */
    (xdc_Char)0x6e,  /* [7068] */
    (xdc_Char)0x73,  /* [7069] */
    (xdc_Char)0x69,  /* [7070] */
    (xdc_Char)0x63,  /* [7071] */
    (xdc_Char)0x73,  /* [7072] */
    (xdc_Char)0x53,  /* [7073] */
    (xdc_Char)0x75,  /* [7074] */
    (xdc_Char)0x70,  /* [7075] */
    (xdc_Char)0x70,  /* [7076] */
    (xdc_Char)0x6f,  /* [7077] */
    (xdc_Char)0x72,  /* [7078] */
    (xdc_Char)0x74,  /* [7079] */
    (xdc_Char)0x0,  /* [7080] */
    (xdc_Char)0x54,  /* [7081] */
    (xdc_Char)0x61,  /* [7082] */
    (xdc_Char)0x73,  /* [7083] */
    (xdc_Char)0x6b,  /* [7084] */
    (xdc_Char)0x53,  /* [7085] */
    (xdc_Char)0x75,  /* [7086] */
    (xdc_Char)0x70,  /* [7087] */
    (xdc_Char)0x70,  /* [7088] */
    (xdc_Char)0x6f,  /* [7089] */
    (xdc_Char)0x72,  /* [7090] */
    (xdc_Char)0x74,  /* [7091] */
    (xdc_Char)0x0,  /* [7092] */
    (xdc_Char)0x54,  /* [7093] */
    (xdc_Char)0x69,  /* [7094] */
    (xdc_Char)0x6d,  /* [7095] */
    (xdc_Char)0x65,  /* [7096] */
    (xdc_Char)0x72,  /* [7097] */
    (xdc_Char)0x0,  /* [7098] */
    (xdc_Char)0x54,  /* [7099] */
    (xdc_Char)0x69,  /* [7100] */
    (xdc_Char)0x6d,  /* [7101] */
    (xdc_Char)0x65,  /* [7102] */
    (xdc_Char)0x73,  /* [7103] */
    (xdc_Char)0x74,  /* [7104] */
    (xdc_Char)0x61,  /* [7105] */
    (xdc_Char)0x6d,  /* [7106] */
    (xdc_Char)0x70,  /* [7107] */
    (xdc_Char)0x50,  /* [7108] */
    (xdc_Char)0x72,  /* [7109] */
    (xdc_Char)0x6f,  /* [7110] */
    (xdc_Char)0x76,  /* [7111] */
    (xdc_Char)0x69,  /* [7112] */
    (xdc_Char)0x64,  /* [7113] */
    (xdc_Char)0x65,  /* [7114] */
    (xdc_Char)0x72,  /* [7115] */
    (xdc_Char)0x0,  /* [7116] */
    (xdc_Char)0x43,  /* [7117] */
    (xdc_Char)0x6c,  /* [7118] */
    (xdc_Char)0x6f,  /* [7119] */
    (xdc_Char)0x63,  /* [7120] */
    (xdc_Char)0x6b,  /* [7121] */
    (xdc_Char)0x46,  /* [7122] */
    (xdc_Char)0x72,  /* [7123] */
    (xdc_Char)0x65,  /* [7124] */
    (xdc_Char)0x71,  /* [7125] */
    (xdc_Char)0x73,  /* [7126] */
    (xdc_Char)0x0,  /* [7127] */
    (xdc_Char)0x42,  /* [7128] */
    (xdc_Char)0x49,  /* [7129] */
    (xdc_Char)0x4f,  /* [7130] */
    (xdc_Char)0x53,  /* [7131] */
    (xdc_Char)0x0,  /* [7132] */
    (xdc_Char)0x6b,  /* [7133] */
    (xdc_Char)0x6e,  /* [7134] */
    (xdc_Char)0x6c,  /* [7135] */
    (xdc_Char)0x2e,  /* [7136] */
    (xdc_Char)0x0,  /* [7137] */
    (xdc_Char)0x43,  /* [7138] */
    (xdc_Char)0x6c,  /* [7139] */
    (xdc_Char)0x6f,  /* [7140] */
    (xdc_Char)0x63,  /* [7141] */
    (xdc_Char)0x6b,  /* [7142] */
    (xdc_Char)0x0,  /* [7143] */
    (xdc_Char)0x49,  /* [7144] */
    (xdc_Char)0x64,  /* [7145] */
    (xdc_Char)0x6c,  /* [7146] */
    (xdc_Char)0x65,  /* [7147] */
    (xdc_Char)0x0,  /* [7148] */
    (xdc_Char)0x49,  /* [7149] */
    (xdc_Char)0x6e,  /* [7150] */
    (xdc_Char)0x74,  /* [7151] */
    (xdc_Char)0x72,  /* [7152] */
    (xdc_Char)0x69,  /* [7153] */
    (xdc_Char)0x6e,  /* [7154] */
    (xdc_Char)0x73,  /* [7155] */
    (xdc_Char)0x69,  /* [7156] */
    (xdc_Char)0x63,  /* [7157] */
    (xdc_Char)0x73,  /* [7158] */
    (xdc_Char)0x0,  /* [7159] */
    (xdc_Char)0x45,  /* [7160] */
    (xdc_Char)0x76,  /* [7161] */
    (xdc_Char)0x65,  /* [7162] */
    (xdc_Char)0x6e,  /* [7163] */
    (xdc_Char)0x74,  /* [7164] */
    (xdc_Char)0x0,  /* [7165] */
    (xdc_Char)0x51,  /* [7166] */
    (xdc_Char)0x75,  /* [7167] */
    (xdc_Char)0x65,  /* [7168] */
    (xdc_Char)0x75,  /* [7169] */
    (xdc_Char)0x65,  /* [7170] */
    (xdc_Char)0x0,  /* [7171] */
    (xdc_Char)0x53,  /* [7172] */
    (xdc_Char)0x65,  /* [7173] */
    (xdc_Char)0x6d,  /* [7174] */
    (xdc_Char)0x61,  /* [7175] */
    (xdc_Char)0x70,  /* [7176] */
    (xdc_Char)0x68,  /* [7177] */
    (xdc_Char)0x6f,  /* [7178] */
    (xdc_Char)0x72,  /* [7179] */
    (xdc_Char)0x65,  /* [7180] */
    (xdc_Char)0x0,  /* [7181] */
    (xdc_Char)0x53,  /* [7182] */
    (xdc_Char)0x77,  /* [7183] */
    (xdc_Char)0x69,  /* [7184] */
    (xdc_Char)0x0,  /* [7185] */
    (xdc_Char)0x54,  /* [7186] */
    (xdc_Char)0x61,  /* [7187] */
    (xdc_Char)0x73,  /* [7188] */
    (xdc_Char)0x6b,  /* [7189] */
    (xdc_Char)0x0,  /* [7190] */
    (xdc_Char)0x68,  /* [7191] */
    (xdc_Char)0x61,  /* [7192] */
    (xdc_Char)0x6c,  /* [7193] */
    (xdc_Char)0x2e,  /* [7194] */
    (xdc_Char)0x0,  /* [7195] */
    (xdc_Char)0x68,  /* [7196] */
    (xdc_Char)0x65,  /* [7197] */
    (xdc_Char)0x61,  /* [7198] */
    (xdc_Char)0x70,  /* [7199] */
    (xdc_Char)0x73,  /* [7200] */
    (xdc_Char)0x2e,  /* [7201] */
    (xdc_Char)0x0,  /* [7202] */
    (xdc_Char)0x48,  /* [7203] */
    (xdc_Char)0x65,  /* [7204] */
    (xdc_Char)0x61,  /* [7205] */
    (xdc_Char)0x70,  /* [7206] */
    (xdc_Char)0x4d,  /* [7207] */
    (xdc_Char)0x65,  /* [7208] */
    (xdc_Char)0x6d,  /* [7209] */
    (xdc_Char)0x0,  /* [7210] */
    (xdc_Char)0x75,  /* [7211] */
    (xdc_Char)0x69,  /* [7212] */
    (xdc_Char)0x61,  /* [7213] */
    (xdc_Char)0x2e,  /* [7214] */
    (xdc_Char)0x0,  /* [7215] */
    (xdc_Char)0x65,  /* [7216] */
    (xdc_Char)0x76,  /* [7217] */
    (xdc_Char)0x65,  /* [7218] */
    (xdc_Char)0x6e,  /* [7219] */
    (xdc_Char)0x74,  /* [7220] */
    (xdc_Char)0x73,  /* [7221] */
    (xdc_Char)0x2e,  /* [7222] */
    (xdc_Char)0x0,  /* [7223] */
    (xdc_Char)0x44,  /* [7224] */
    (xdc_Char)0x76,  /* [7225] */
    (xdc_Char)0x74,  /* [7226] */
    (xdc_Char)0x54,  /* [7227] */
    (xdc_Char)0x79,  /* [7228] */
    (xdc_Char)0x70,  /* [7229] */
    (xdc_Char)0x65,  /* [7230] */
    (xdc_Char)0x73,  /* [7231] */
    (xdc_Char)0x0,  /* [7232] */
    (xdc_Char)0x55,  /* [7233] */
    (xdc_Char)0x49,  /* [7234] */
    (xdc_Char)0x41,  /* [7235] */
    (xdc_Char)0x45,  /* [7236] */
    (xdc_Char)0x72,  /* [7237] */
    (xdc_Char)0x72,  /* [7238] */
    (xdc_Char)0x0,  /* [7239] */
    (xdc_Char)0x55,  /* [7240] */
    (xdc_Char)0x49,  /* [7241] */
    (xdc_Char)0x41,  /* [7242] */
    (xdc_Char)0x45,  /* [7243] */
    (xdc_Char)0x76,  /* [7244] */
    (xdc_Char)0x74,  /* [7245] */
    (xdc_Char)0x0,  /* [7246] */
    (xdc_Char)0x45,  /* [7247] */
    (xdc_Char)0x76,  /* [7248] */
    (xdc_Char)0x65,  /* [7249] */
    (xdc_Char)0x6e,  /* [7250] */
    (xdc_Char)0x74,  /* [7251] */
    (xdc_Char)0x48,  /* [7252] */
    (xdc_Char)0x64,  /* [7253] */
    (xdc_Char)0x72,  /* [7254] */
    (xdc_Char)0x0,  /* [7255] */
    (xdc_Char)0x51,  /* [7256] */
    (xdc_Char)0x75,  /* [7257] */
    (xdc_Char)0x65,  /* [7258] */
    (xdc_Char)0x75,  /* [7259] */
    (xdc_Char)0x65,  /* [7260] */
    (xdc_Char)0x44,  /* [7261] */
    (xdc_Char)0x65,  /* [7262] */
    (xdc_Char)0x73,  /* [7263] */
    (xdc_Char)0x63,  /* [7264] */
    (xdc_Char)0x72,  /* [7265] */
    (xdc_Char)0x69,  /* [7266] */
    (xdc_Char)0x70,  /* [7267] */
    (xdc_Char)0x74,  /* [7268] */
    (xdc_Char)0x6f,  /* [7269] */
    (xdc_Char)0x72,  /* [7270] */
    (xdc_Char)0x0,  /* [7271] */
    (xdc_Char)0x55,  /* [7272] */
    (xdc_Char)0x49,  /* [7273] */
    (xdc_Char)0x41,  /* [7274] */
    (xdc_Char)0x4d,  /* [7275] */
    (xdc_Char)0x65,  /* [7276] */
    (xdc_Char)0x74,  /* [7277] */
    (xdc_Char)0x61,  /* [7278] */
    (xdc_Char)0x44,  /* [7279] */
    (xdc_Char)0x61,  /* [7280] */
    (xdc_Char)0x74,  /* [7281] */
    (xdc_Char)0x61,  /* [7282] */
    (xdc_Char)0x0,  /* [7283] */
    (xdc_Char)0x67,  /* [7284] */
    (xdc_Char)0x61,  /* [7285] */
    (xdc_Char)0x74,  /* [7286] */
    (xdc_Char)0x65,  /* [7287] */
    (xdc_Char)0x73,  /* [7288] */
    (xdc_Char)0x2e,  /* [7289] */
    (xdc_Char)0x0,  /* [7290] */
    (xdc_Char)0x47,  /* [7291] */
    (xdc_Char)0x61,  /* [7292] */
    (xdc_Char)0x74,  /* [7293] */
    (xdc_Char)0x65,  /* [7294] */
    (xdc_Char)0x48,  /* [7295] */
    (xdc_Char)0x77,  /* [7296] */
    (xdc_Char)0x69,  /* [7297] */
    (xdc_Char)0x0,  /* [7298] */
    (xdc_Char)0x47,  /* [7299] */
    (xdc_Char)0x61,  /* [7300] */
    (xdc_Char)0x74,  /* [7301] */
    (xdc_Char)0x65,  /* [7302] */
    (xdc_Char)0x4d,  /* [7303] */
    (xdc_Char)0x75,  /* [7304] */
    (xdc_Char)0x74,  /* [7305] */
    (xdc_Char)0x65,  /* [7306] */
    (xdc_Char)0x78,  /* [7307] */
    (xdc_Char)0x0,  /* [7308] */
    (xdc_Char)0x6c,  /* [7309] */
    (xdc_Char)0x6f,  /* [7310] */
    (xdc_Char)0x67,  /* [7311] */
    (xdc_Char)0x67,  /* [7312] */
    (xdc_Char)0x65,  /* [7313] */
    (xdc_Char)0x72,  /* [7314] */
    (xdc_Char)0x73,  /* [7315] */
    (xdc_Char)0x2e,  /* [7316] */
    (xdc_Char)0x0,  /* [7317] */
    (xdc_Char)0x4c,  /* [7318] */
    (xdc_Char)0x6f,  /* [7319] */
    (xdc_Char)0x67,  /* [7320] */
    (xdc_Char)0x67,  /* [7321] */
    (xdc_Char)0x65,  /* [7322] */
    (xdc_Char)0x72,  /* [7323] */
    (xdc_Char)0x53,  /* [7324] */
    (xdc_Char)0x74,  /* [7325] */
    (xdc_Char)0x6f,  /* [7326] */
    (xdc_Char)0x70,  /* [7327] */
    (xdc_Char)0x4d,  /* [7328] */
    (xdc_Char)0x6f,  /* [7329] */
    (xdc_Char)0x64,  /* [7330] */
    (xdc_Char)0x65,  /* [7331] */
    (xdc_Char)0x0,  /* [7332] */
    (xdc_Char)0x75,  /* [7333] */
    (xdc_Char)0x74,  /* [7334] */
    (xdc_Char)0x69,  /* [7335] */
    (xdc_Char)0x6c,  /* [7336] */
    (xdc_Char)0x73,  /* [7337] */
    (xdc_Char)0x2e,  /* [7338] */
    (xdc_Char)0x0,  /* [7339] */
    (xdc_Char)0x4c,  /* [7340] */
    (xdc_Char)0x6f,  /* [7341] */
    (xdc_Char)0x61,  /* [7342] */
    (xdc_Char)0x64,  /* [7343] */
    (xdc_Char)0x0,  /* [7344] */
    (xdc_Char)0x74,  /* [7345] */
    (xdc_Char)0x69,  /* [7346] */
    (xdc_Char)0x6d,  /* [7347] */
    (xdc_Char)0x65,  /* [7348] */
    (xdc_Char)0x53,  /* [7349] */
    (xdc_Char)0x68,  /* [7350] */
    (xdc_Char)0x61,  /* [7351] */
    (xdc_Char)0x72,  /* [7352] */
    (xdc_Char)0x69,  /* [7353] */
    (xdc_Char)0x6e,  /* [7354] */
    (xdc_Char)0x67,  /* [7355] */
    (xdc_Char)0x43,  /* [7356] */
    (xdc_Char)0x6c,  /* [7357] */
    (xdc_Char)0x6b,  /* [7358] */
    (xdc_Char)0x0,  /* [7359] */
    (xdc_Char)0x66,  /* [7360] */
    (xdc_Char)0x75,  /* [7361] */
    (xdc_Char)0x6c,  /* [7362] */
    (xdc_Char)0x6c,  /* [7363] */
    (xdc_Char)0x53,  /* [7364] */
    (xdc_Char)0x6c,  /* [7365] */
    (xdc_Char)0x6f,  /* [7366] */
    (xdc_Char)0x74,  /* [7367] */
    (xdc_Char)0x73,  /* [7368] */
    (xdc_Char)0x0,  /* [7369] */
    (xdc_Char)0x65,  /* [7370] */
    (xdc_Char)0x6d,  /* [7371] */
    (xdc_Char)0x70,  /* [7372] */
    (xdc_Char)0x74,  /* [7373] */
    (xdc_Char)0x79,  /* [7374] */
    (xdc_Char)0x53,  /* [7375] */
    (xdc_Char)0x6c,  /* [7376] */
    (xdc_Char)0x6f,  /* [7377] */
    (xdc_Char)0x74,  /* [7378] */
    (xdc_Char)0x73,  /* [7379] */
    (xdc_Char)0x0,  /* [7380] */
    (xdc_Char)0x6d,  /* [7381] */
    (xdc_Char)0x75,  /* [7382] */
    (xdc_Char)0x74,  /* [7383] */
    (xdc_Char)0x65,  /* [7384] */
    (xdc_Char)0x78,  /* [7385] */
    (xdc_Char)0x0,  /* [7386] */
    (xdc_Char)0x6c,  /* [7387] */
    (xdc_Char)0x65,  /* [7388] */
    (xdc_Char)0x64,  /* [7389] */
    (xdc_Char)0x53,  /* [7390] */
    (xdc_Char)0x72,  /* [7391] */
    (xdc_Char)0x76,  /* [7392] */
    (xdc_Char)0x53,  /* [7393] */
    (xdc_Char)0x63,  /* [7394] */
    (xdc_Char)0x68,  /* [7395] */
    (xdc_Char)0x65,  /* [7396] */
    (xdc_Char)0x64,  /* [7397] */
    (xdc_Char)0x53,  /* [7398] */
    (xdc_Char)0x65,  /* [7399] */
    (xdc_Char)0x6d,  /* [7400] */
    (xdc_Char)0x0,  /* [7401] */
    (xdc_Char)0x73,  /* [7402] */
    (xdc_Char)0x65,  /* [7403] */
    (xdc_Char)0x74,  /* [7404] */
    (xdc_Char)0x4c,  /* [7405] */
    (xdc_Char)0x65,  /* [7406] */
    (xdc_Char)0x64,  /* [7407] */
    (xdc_Char)0x45,  /* [7408] */
    (xdc_Char)0x6e,  /* [7409] */
    (xdc_Char)0x76,  /* [7410] */
    (xdc_Char)0x4d,  /* [7411] */
    (xdc_Char)0x75,  /* [7412] */
    (xdc_Char)0x74,  /* [7413] */
    (xdc_Char)0x65,  /* [7414] */
    (xdc_Char)0x78,  /* [7415] */
    (xdc_Char)0x0,  /* [7416] */
    (xdc_Char)0x70,  /* [7417] */
    (xdc_Char)0x72,  /* [7418] */
    (xdc_Char)0x6f,  /* [7419] */
    (xdc_Char)0x64,  /* [7420] */
    (xdc_Char)0x75,  /* [7421] */
    (xdc_Char)0x63,  /* [7422] */
    (xdc_Char)0x65,  /* [7423] */
    (xdc_Char)0x72,  /* [7424] */
    (xdc_Char)0x54,  /* [7425] */
    (xdc_Char)0x61,  /* [7426] */
    (xdc_Char)0x73,  /* [7427] */
    (xdc_Char)0x6b,  /* [7428] */
    (xdc_Char)0x31,  /* [7429] */
    (xdc_Char)0x0,  /* [7430] */
    (xdc_Char)0x63,  /* [7431] */
    (xdc_Char)0x6f,  /* [7432] */
    (xdc_Char)0x6e,  /* [7433] */
    (xdc_Char)0x73,  /* [7434] */
    (xdc_Char)0x75,  /* [7435] */
    (xdc_Char)0x6d,  /* [7436] */
    (xdc_Char)0x65,  /* [7437] */
    (xdc_Char)0x72,  /* [7438] */
    (xdc_Char)0x54,  /* [7439] */
    (xdc_Char)0x61,  /* [7440] */
    (xdc_Char)0x73,  /* [7441] */
    (xdc_Char)0x6b,  /* [7442] */
    (xdc_Char)0x31,  /* [7443] */
    (xdc_Char)0x0,  /* [7444] */
    (xdc_Char)0x6c,  /* [7445] */
    (xdc_Char)0x65,  /* [7446] */
    (xdc_Char)0x64,  /* [7447] */
    (xdc_Char)0x53,  /* [7448] */
    (xdc_Char)0x72,  /* [7449] */
    (xdc_Char)0x76,  /* [7450] */
    (xdc_Char)0x54,  /* [7451] */
    (xdc_Char)0x61,  /* [7452] */
    (xdc_Char)0x73,  /* [7453] */
    (xdc_Char)0x6b,  /* [7454] */
    (xdc_Char)0x0,  /* [7455] */
    (xdc_Char)0x63,  /* [7456] */
    (xdc_Char)0x6f,  /* [7457] */
    (xdc_Char)0x6e,  /* [7458] */
    (xdc_Char)0x73,  /* [7459] */
    (xdc_Char)0x75,  /* [7460] */
    (xdc_Char)0x6d,  /* [7461] */
    (xdc_Char)0x65,  /* [7462] */
    (xdc_Char)0x72,  /* [7463] */
    (xdc_Char)0x54,  /* [7464] */
    (xdc_Char)0x61,  /* [7465] */
    (xdc_Char)0x73,  /* [7466] */
    (xdc_Char)0x6b,  /* [7467] */
    (xdc_Char)0x32,  /* [7468] */
    (xdc_Char)0x0,  /* [7469] */
    (xdc_Char)0x70,  /* [7470] */
    (xdc_Char)0x72,  /* [7471] */
    (xdc_Char)0x6f,  /* [7472] */
    (xdc_Char)0x64,  /* [7473] */
    (xdc_Char)0x75,  /* [7474] */
    (xdc_Char)0x63,  /* [7475] */
    (xdc_Char)0x65,  /* [7476] */
    (xdc_Char)0x72,  /* [7477] */
    (xdc_Char)0x54,  /* [7478] */
    (xdc_Char)0x61,  /* [7479] */
    (xdc_Char)0x73,  /* [7480] */
    (xdc_Char)0x6b,  /* [7481] */
    (xdc_Char)0x32,  /* [7482] */
    (xdc_Char)0x0,  /* [7483] */
    (xdc_Char)0x74,  /* [7484] */
    (xdc_Char)0x69,  /* [7485] */
    (xdc_Char)0x2e,  /* [7486] */
    (xdc_Char)0x73,  /* [7487] */
    (xdc_Char)0x79,  /* [7488] */
    (xdc_Char)0x73,  /* [7489] */
    (xdc_Char)0x62,  /* [7490] */
    (xdc_Char)0x69,  /* [7491] */
    (xdc_Char)0x6f,  /* [7492] */
    (xdc_Char)0x73,  /* [7493] */
    (xdc_Char)0x2e,  /* [7494] */
    (xdc_Char)0x6b,  /* [7495] */
    (xdc_Char)0x6e,  /* [7496] */
    (xdc_Char)0x6c,  /* [7497] */
    (xdc_Char)0x2e,  /* [7498] */
    (xdc_Char)0x54,  /* [7499] */
    (xdc_Char)0x61,  /* [7500] */
    (xdc_Char)0x73,  /* [7501] */
    (xdc_Char)0x6b,  /* [7502] */
    (xdc_Char)0x2e,  /* [7503] */
    (xdc_Char)0x49,  /* [7504] */
    (xdc_Char)0x64,  /* [7505] */
    (xdc_Char)0x6c,  /* [7506] */
    (xdc_Char)0x65,  /* [7507] */
    (xdc_Char)0x54,  /* [7508] */
    (xdc_Char)0x61,  /* [7509] */
    (xdc_Char)0x73,  /* [7510] */
    (xdc_Char)0x6b,  /* [7511] */
    (xdc_Char)0x0,  /* [7512] */
    (xdc_Char)0x4c,  /* [7513] */
    (xdc_Char)0x6f,  /* [7514] */
    (xdc_Char)0x61,  /* [7515] */
    (xdc_Char)0x64,  /* [7516] */
    (xdc_Char)0x20,  /* [7517] */
    (xdc_Char)0x4c,  /* [7518] */
    (xdc_Char)0x6f,  /* [7519] */
    (xdc_Char)0x67,  /* [7520] */
    (xdc_Char)0x67,  /* [7521] */
    (xdc_Char)0x65,  /* [7522] */
    (xdc_Char)0x72,  /* [7523] */
    (xdc_Char)0x0,  /* [7524] */
    (xdc_Char)0x4d,  /* [7525] */
    (xdc_Char)0x61,  /* [7526] */
    (xdc_Char)0x69,  /* [7527] */
    (xdc_Char)0x6e,  /* [7528] */
    (xdc_Char)0x20,  /* [7529] */
    (xdc_Char)0x4c,  /* [7530] */
    (xdc_Char)0x6f,  /* [7531] */
    (xdc_Char)0x67,  /* [7532] */
    (xdc_Char)0x67,  /* [7533] */
    (xdc_Char)0x65,  /* [7534] */
    (xdc_Char)0x72,  /* [7535] */
    (xdc_Char)0x0,  /* [7536] */
    (xdc_Char)0x53,  /* [7537] */
    (xdc_Char)0x59,  /* [7538] */
    (xdc_Char)0x53,  /* [7539] */
    (xdc_Char)0x42,  /* [7540] */
    (xdc_Char)0x49,  /* [7541] */
    (xdc_Char)0x4f,  /* [7542] */
    (xdc_Char)0x53,  /* [7543] */
    (xdc_Char)0x20,  /* [7544] */
    (xdc_Char)0x53,  /* [7545] */
    (xdc_Char)0x79,  /* [7546] */
    (xdc_Char)0x73,  /* [7547] */
    (xdc_Char)0x74,  /* [7548] */
    (xdc_Char)0x65,  /* [7549] */
    (xdc_Char)0x6d,  /* [7550] */
    (xdc_Char)0x20,  /* [7551] */
    (xdc_Char)0x4c,  /* [7552] */
    (xdc_Char)0x6f,  /* [7553] */
    (xdc_Char)0x67,  /* [7554] */
    (xdc_Char)0x67,  /* [7555] */
    (xdc_Char)0x65,  /* [7556] */
    (xdc_Char)0x72,  /* [7557] */
    (xdc_Char)0x0,  /* [7558] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[58] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1af6,  /* left */
        (xdc_Bits16)0x1afb,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b04,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b0b,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b10,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b19,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b1f,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b25,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b2a,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b2e,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b33,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b3a,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b42,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b4b,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b53,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b5a,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b61,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b66,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1b70,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x1b76,  /* left */
        (xdc_Bits16)0x1b7a,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1b83,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1b8b,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1b93,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1b97,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1ba9,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1bb5,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1bbb,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1bcd,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1bd8,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1bdd,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1be2,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1be8,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1bed,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1bf8,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1bfe,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1c04,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1c0e,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801d,  /* left */
        (xdc_Bits16)0x1c12,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c17,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1b93,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c1c,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8028,  /* left */
        (xdc_Bits16)0x1c23,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x1b76,  /* left */
        (xdc_Bits16)0x1c2b,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1c30,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1c38,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1c41,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1c48,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1afb,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1c4f,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1c58,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1c68,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1c74,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x1c7b,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8033,  /* left */
        (xdc_Bits16)0x1c83,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x802a,  /* left */
        (xdc_Bits16)0x1c8d,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036,  /* left */
        (xdc_Bits16)0x1c96,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8013,  /* left */
        (xdc_Bits16)0x1ca5,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8038,  /* left */
        (xdc_Bits16)0x1cac,  /* right */
    },  /* [57] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1d87;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3a;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_msp430_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_msp430_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_msp430_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_msp430_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_msp430_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_msp430_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_msp430_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_msp430_Hwi_getFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Hwi_setFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_msp430_Hwi_getHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_msp430_Hwi_setHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Hwi_getIrp((ti_sysbios_family_msp430_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_msp430_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_msp430_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_msp430_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_msp430_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_msp430_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getMaxTicks((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_msp430_Timer_setNextTick((ti_sysbios_family_msp430_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_start((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_stop((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_msp430_Timer_setPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_msp430_Timer_setPeriodMicroSecs((ti_sysbios_family_msp430_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getCount((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_msp430_Timer_getFreq((ti_sysbios_family_msp430_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_msp430_Timer_getFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Timer_setFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_msp430_Timer_trigger((ti_sysbios_family_msp430_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getExpiredCounts((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_msp430_Timer_getExpiredTicks((ti_sysbios_family_msp430_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_msp430_Timer_getCurrentTick((ti_sysbios_family_msp430_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_msp430_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_msp430_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.HeapStd */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_HeapStd_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return xdc_runtime_HeapStd_Object__create__S(__obj, __osz, __aa, (xdc_runtime_HeapStd___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    xdc_runtime_HeapStd_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return xdc_runtime_HeapStd_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( xdc_Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_msp430_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_msp430_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_msp430_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.msp430.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Hwi_Object2__ s0; char c; } ti_sysbios_family_msp430_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__DESC__C, ".const:ti_sysbios_family_msp430_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Hwi___S1) - sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.msp430.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Timer_Object2__ s0; char c; } ti_sysbios_family_msp430_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__DESC__C, ".const:ti_sysbios_family_msp430_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Timer___S1) - sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_Ptr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.HeapStd OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { xdc_runtime_HeapStd_Object2__ s0; char c; } xdc_runtime_HeapStd___S1;
#pragma DATA_SECTION(xdc_runtime_HeapStd_Object__DESC__C, ".const:xdc_runtime_HeapStd_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc xdc_runtime_HeapStd_Object__DESC__C = {
    (xdc_Ptr)&xdc_runtime_HeapStd_Module__FXNS__C, /* fxnTab */
    &xdc_runtime_HeapStd_Module__root__V.link, /* modLink */
    sizeof(xdc_runtime_HeapStd___S1) - sizeof(xdc_runtime_HeapStd_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(xdc_runtime_HeapStd_Object2__), /* objSize */
    (xdc_Ptr)&xdc_runtime_HeapStd_Object__PARAMS__C, /* prmsInit */
    sizeof(xdc_runtime_HeapStd_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module __mod, const ti_uia_runtime_IUIATransfer_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_IUIATransfer_Params), __eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module __mod, const ti_uia_runtime_ILoggerSnapshot_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), __eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.msp430.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_ClockFreqs_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_msp430_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_msp430_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_msp430_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Hwi_Object__ *)ti_sysbios_family_msp430_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_msp430_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_msp430_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_msp430_Hwi_Params __prms;
    ti_sysbios_family_msp430_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_msp430_Hwi_Handle ti_sysbios_family_msp430_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_msp430_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_msp430_Hwi_Params __prms;
    ti_sysbios_family_msp430_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_msp430_Hwi_construct(ti_sysbios_family_msp430_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_msp430_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_msp430_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_msp430_Hwi_destruct(ti_sysbios_family_msp430_Hwi_Struct *obj)
{
    ti_sysbios_family_msp430_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, *((ti_sysbios_family_msp430_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_msp430_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_msp430_Hwi_delete(ti_sysbios_family_msp430_Hwi_Handle *instp)
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_msp430_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32793;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_msp430_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_msp430_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Timer_Object__ *)ti_sysbios_family_msp430_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_msp430_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_msp430_Timer_Args__create *__args = __aa;
    ti_sysbios_family_msp430_Timer_Params __prms;
    ti_sysbios_family_msp430_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_msp430_Timer_Handle ti_sysbios_family_msp430_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_msp430_Timer_Params __prms;
    ti_sysbios_family_msp430_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_msp430_Timer_construct(ti_sysbios_family_msp430_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_msp430_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_msp430_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_msp430_Timer_destruct(ti_sysbios_family_msp430_Timer_Struct *obj)
{
    ti_sysbios_family_msp430_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, *((ti_sysbios_family_msp430_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_msp430_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_msp430_Timer_delete(ti_sysbios_family_msp430_Timer_Handle *instp)
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.msp430.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_msp430_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32820;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32821;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32809;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    if (ti_uia_loggers_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_loggers_LoggerStopMode_Object__ *)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_loggers_LoggerStopMode___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *__obj, const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), NULL);
    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    ti_uia_loggers_LoggerStopMode_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.HeapStd SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_HeapStd_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_HeapStd_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_HeapStd_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_HeapStd_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_HeapStd_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_HeapStd_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_HeapStd_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_HeapStd_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_HeapStd_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_HeapStd_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_HeapStd_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_HeapStd_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_HeapStd_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_HeapStd_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_HeapStd_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_HeapStd_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_HeapStd_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_HeapStd_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool xdc_runtime_HeapStd_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_HeapStd_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32779;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void xdc_runtime_HeapStd_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &xdc_runtime_HeapStd_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr xdc_runtime_HeapStd_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((xdc_runtime_HeapStd_Object__ *)oa) + i;
    }

    if (xdc_runtime_HeapStd_Object__count__C == 0) {
        return NULL;
    }

    return ((xdc_runtime_HeapStd_Object__ *)xdc_runtime_HeapStd_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr xdc_runtime_HeapStd_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)xdc_runtime_HeapStd_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr xdc_runtime_HeapStd_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&xdc_runtime_HeapStd_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr xdc_runtime_HeapStd_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_HeapStd___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    xdc_runtime_HeapStd_Params __prms;
    xdc_runtime_HeapStd_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __newobj, NULL, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
xdc_runtime_HeapStd_Handle xdc_runtime_HeapStd_create( const xdc_runtime_HeapStd_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_HeapStd_Params __prms;
    xdc_runtime_HeapStd_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&xdc_runtime_HeapStd_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E(__newobj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __newobj, NULL, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void xdc_runtime_HeapStd_construct(xdc_runtime_HeapStd_Struct *__obj, const xdc_runtime_HeapStd_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    xdc_runtime_HeapStd_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&xdc_runtime_HeapStd_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(xdc_runtime_HeapStd_Params), __eb);
    /* module-specific initialization */
    iStat = xdc_runtime_HeapStd_Instance_init__E((xdc_Ptr)__obj, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, (xdc_Ptr)__obj, NULL, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void xdc_runtime_HeapStd_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, obj, NULL, 0, TRUE);
}

/* destruct */
void xdc_runtime_HeapStd_destruct(xdc_runtime_HeapStd_Struct *obj)
{
    xdc_runtime_HeapStd_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void xdc_runtime_HeapStd_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&xdc_runtime_HeapStd_Object__DESC__C, *((xdc_runtime_HeapStd_Object**)instp), NULL, 0, FALSE);
    *((xdc_runtime_HeapStd_Handle*)instp) = NULL;
}

/* delete */
void xdc_runtime_HeapStd_delete(xdc_runtime_HeapStd_Handle *instp)
{
    xdc_runtime_HeapStd_Object__delete__S(instp);
}


/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_HeapStd_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle producerTask1 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle consumerTask1 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle ledSrvTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Clock_Handle timeSharingClk = (ti_sysbios_knl_Clock_Handle)((ti_sysbios_knl_Clock_Handle)&ti_sysbios_knl_Clock_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle fullSlots = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[0]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle emptySlots = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[1]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle mutex = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[2]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle ledSrvSchedSem = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[3]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Semaphore_Handle setLedEnvMutex = (ti_sysbios_knl_Semaphore_Handle)((ti_sysbios_knl_Semaphore_Handle)&ti_sysbios_knl_Semaphore_Object__table__V[4]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle consumerTask2 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[3]);

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle producerTask2 = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[4]);


