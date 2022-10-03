#ifndef MONITOR_IMPL_SW_MONITOR_MONITOR_API_H
#define MONITOR_IMPL_SW_MONITOR_MONITOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_Observed__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_Output__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_Alert__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str);

#endif
