#ifndef RADIODRIVER_ATTESTATION_IMPL_SW_RADIODRIVER_RADIODRIVER_API_H
#define RADIODRIVER_ATTESTATION_IMPL_SW_RADIODRIVER_RADIODRIVER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_AttestationTesterResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AttestationTesterRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver(
  STACK_FRAME
  String str);

#endif
