#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.h>
#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate.h>

static bool apis_initialized = false;
static struct HAMR_SW_AttestationGate_Impl_Initialization_Api initialization_api;
static struct HAMR_SW_AttestationGate_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "initialize_apis", 0);

  // Option_207473 = Option[HAMR.SW.AttestationGate_Impl_Initialization_Api]
  Option_207473_get_(SF (HAMR_SW_AttestationGate_Impl_Initialization_Api) &initialization_api, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_initialization_api(SF_LAST));
  // Option_921595 = Option[HAMR.SW.AttestationGate_Impl_Operational_Api]
  Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &operational_api, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand_in__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_get_MissionCommand_in__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  HAMR_SW_AttestationGate_Impl_Operational_Api_get_MissionCommand_in_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_put_MissionCommand_out__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_put_MissionCommand_out__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  HAMR_SW_AttestationGate_Impl_Initialization_Api_put_MissionCommand_out_(
    SF
    &initialization_api,
    &t_0);
}

bool api_get_TrustedIds__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_get_TrustedIds__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  HAMR_SW_AttestationGate_Impl_Operational_Api_get_TrustedIds_(
    SF
    (Option_30119F) &t_0,
    &operational_api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationGate_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_logDebug__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationGate_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "api_logError__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationGate_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise(
  STACK_FRAME
  HAMR_SW_AttestationGate_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise", 0);

  HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise_(SF_LAST);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise(
  STACK_FRAME
  HAMR_SW_AttestationGate_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise", 0);

  HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise_(SF_LAST);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_timeTriggered(
  STACK_FRAME
  HAMR_SW_AttestationGate_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_timeTriggered", 0);

  HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_timeTriggered_(SF_LAST);
}
