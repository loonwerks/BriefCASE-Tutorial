#ifndef SIREUM_H_HAMR_Filter_Impl_SW_Filter_Filter_Filter
#define SIREUM_H_HAMR_Filter_Impl_SW_Filter_Filter_Filter

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(STACK_FRAME_ONLY);

HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData(STACK_FRAME_ONLY);
Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port(STACK_FRAME_ONLY);
void HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port_a(STACK_FRAME Option_8E9F45 p_Input_port);
Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port(STACK_FRAME_ONLY);
void HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port_a(STACK_FRAME Option_8E9F45 p_Output_port);

Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_main(STACK_FRAME IS_948B60 args);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseArchitecture(STACK_FRAME_ONLY);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_computeEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch(STACK_FRAME_ONLY);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logInfo(STACK_FRAME String title, String msg);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logDebug(STACK_FRAME String title, String msg);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logError(STACK_FRAME String title, String msg);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_FilterBridge(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_entryPoints(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_noData(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_id(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_port(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_id(STACK_FRAME_ONLY);

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif