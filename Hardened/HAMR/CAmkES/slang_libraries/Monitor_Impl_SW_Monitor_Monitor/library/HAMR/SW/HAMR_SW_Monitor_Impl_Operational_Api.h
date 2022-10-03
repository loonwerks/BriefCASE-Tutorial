#ifndef SIREUM_H_HAMR_SW_Monitor_Impl_Operational_Api
#define SIREUM_H_HAMR_SW_Monitor_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR.SW.Monitor_Impl_Operational_Api

#define HAMR_SW_Monitor_Impl_Operational_Api_id_(this) ((this)->id)
#define HAMR_SW_Monitor_Impl_Operational_Api_Observed_Id_(this) ((this)->Observed_Id)
#define HAMR_SW_Monitor_Impl_Operational_Api_Output_Id_(this) ((this)->Output_Id)
#define HAMR_SW_Monitor_Impl_Operational_Api_Alert_Id_(this) ((this)->Alert_Id)

B HAMR_SW_Monitor_Impl_Operational_Api__eq(HAMR_SW_Monitor_Impl_Operational_Api this, HAMR_SW_Monitor_Impl_Operational_Api other);
inline B HAMR_SW_Monitor_Impl_Operational_Api__ne(HAMR_SW_Monitor_Impl_Operational_Api this, HAMR_SW_Monitor_Impl_Operational_Api other) {
  return !HAMR_SW_Monitor_Impl_Operational_Api__eq(this, other);
};
void HAMR_SW_Monitor_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_SW_Monitor_Impl_Operational_Api this);
void HAMR_SW_Monitor_Impl_Operational_Api_cprint(HAMR_SW_Monitor_Impl_Operational_Api this, B isOut);

inline B HAMR_SW_Monitor_Impl_Operational_Api__is(STACK_FRAME void* this) {
  return ((HAMR_SW_Monitor_Impl_Operational_Api) this)->type == THAMR_SW_Monitor_Impl_Operational_Api;
}

inline HAMR_SW_Monitor_Impl_Operational_Api HAMR_SW_Monitor_Impl_Operational_Api__as(STACK_FRAME void *this) {
  if (HAMR_SW_Monitor_Impl_Operational_Api__is(CALLER this)) return (HAMR_SW_Monitor_Impl_Operational_Api) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR.SW.Monitor_Impl_Operational_Api.");
  abort();
}

void HAMR_SW_Monitor_Impl_Operational_Api_apply(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, Z id, Z Observed_Id, Z Output_Id, Z Alert_Id);

void HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_(STACK_FRAME Option_30119F result, HAMR_SW_Monitor_Impl_Operational_Api this);

#ifdef __cplusplus
}
#endif

#endif