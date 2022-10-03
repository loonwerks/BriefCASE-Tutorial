#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.h>
#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester.h>

static bool apis_initialized = false;
static struct HAMR_SW_AttestationTester_Impl_Initialization_Api initialization_api;
static struct HAMR_SW_AttestationTester_Impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester.c", "", "initialize_apis", 0);

  // Option_432E9F = Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]
  Option_432E9F_get_(SF (HAMR_SW_AttestationTester_Impl_Initialization_Api) &initialization_api, HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_initialization_api(SF_LAST));
  // Option_B221FE = Option[HAMR.SW.AttestationTester_Impl_Operational_Api]
  Option_B221FE_get_(SF (HAMR_SW_AttestationTester_Impl_Operational_Api) &operational_api, HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

bool api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  HAMR_SW_AttestationTester_Impl_Operational_Api_get_AttestationRequest_(
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

void api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  sfAssert((Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].")
  sfAssert((Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].")

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  HAMR_SW_AttestationTester_Impl_Initialization_Api_put_AttestationResponse_(
    SF
    &initialization_api,
    &t_0);
}

void api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logDebug__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "api_logError__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  HAMR_SW_AttestationTester_Impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise", 0);

  HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise_(SF_LAST);
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise", 0);

  HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise_(SF_LAST);
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_timeTriggered(
  STACK_FRAME
  HAMR_SW_AttestationTester_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_timeTriggered", 0);

  HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_timeTriggered_(SF_LAST);
}
