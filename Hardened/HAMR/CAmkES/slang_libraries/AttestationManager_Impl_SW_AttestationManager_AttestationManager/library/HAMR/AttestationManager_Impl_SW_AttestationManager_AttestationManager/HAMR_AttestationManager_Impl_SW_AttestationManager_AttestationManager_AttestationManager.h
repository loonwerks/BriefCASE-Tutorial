#ifndef SIREUM_H_HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager
#define SIREUM_H_HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init(STACK_FRAME_ONLY);

HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationManagerBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_noData(STACK_FRAME_ONLY);
Z HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port(STACK_FRAME_ONLY);
void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationRequest_port);
Z HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port(STACK_FRAME_ONLY);
void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_AttestationResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationResponse_port);
Z HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port(STACK_FRAME_ONLY);
void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_TrustedIds_port_a(STACK_FRAME Option_8E9F45 p_TrustedIds_port);

Z HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_main(STACK_FRAME IS_948B60 args);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseArchitecture(STACK_FRAME_ONLY);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_computeEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_touch(STACK_FRAME_ONLY);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logInfo(STACK_FRAME String title, String msg);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logDebug(STACK_FRAME String title, String msg);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_logError(STACK_FRAME String title, String msg);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_putValue(STACK_FRAME Z portId, art_DataContent data);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationManagerBridge(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_entryPoints(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_noData(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_id(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationRequest_port(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_id(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_AttestationResponse_port(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_id(STACK_FRAME_ONLY);

void HAMR_AttestationManager_Impl_SW_AttestationManager_AttestationManager_AttestationManager_init_TrustedIds_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif