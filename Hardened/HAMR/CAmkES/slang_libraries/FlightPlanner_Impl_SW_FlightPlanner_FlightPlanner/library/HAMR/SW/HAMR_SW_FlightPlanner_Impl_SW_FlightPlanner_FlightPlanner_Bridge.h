#ifndef SIREUM_H_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge
#define SIREUM_H_HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init(STACK_FRAME_ONLY);

Option_A0CA6B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(STACK_FRAME_ONLY);
void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api_a(STACK_FRAME Option_A0CA6B p_c_initialization_api);
Option_6475FA HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(STACK_FRAME_ONLY);
void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api_a(STACK_FRAME Option_6475FA p_c_operational_api);

// HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge

#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_id_(this) ((this)->id)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_name_(this) ((String) &(this)->name)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_dispatchTriggers_(this) ((Option_9AF35E) &(this)->dispatchTriggers)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(this) ((art_Port_45E54D) &(this)->MissionCommand)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(this) ((art_Port_45E54D) &(this)->FlightPlan)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_initialization_api_(this) ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &(this)->initialization_api)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_operational_api_(this) ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &(this)->operational_api)
#define HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__eq(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge other);
inline B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__ne(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge other) {
  return !HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__eq(this, other);
};
void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_string_(STACK_FRAME String result, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this);
void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, B isOut);

inline B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__is(STACK_FRAME void* this) {
  return ((HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge) this)->type == THAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge;
}

inline HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__as(STACK_FRAME void *this) {
  if (HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge__is(CALLER this)) return (HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge.");
  abort();
}

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_apply(STACK_FRAME HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, Option_9AF35E dispatchTriggers, art_Port_45E54D MissionCommand, art_Port_45E54D FlightPlan);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_initialization_api(STACK_FRAME_ONLY);

void HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_init_c_operational_api(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif