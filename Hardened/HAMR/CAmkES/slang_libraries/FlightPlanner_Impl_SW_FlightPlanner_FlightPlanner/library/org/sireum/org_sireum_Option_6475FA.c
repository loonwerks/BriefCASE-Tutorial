#include <all.h>

// Option[HAMR.SW.FlightPlanner_Impl_Operational_Api]

B Option_6475FA__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3EE2E0: return T;
    case TSome_EB994A: return T;
    default: return F;
  }
}

Option_6475FA Option_6475FA__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3EE2E0: break;
    case TSome_EB994A: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.FlightPlanner_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6475FA) this;
}

void Option_6475FA_string_(STACK_FRAME String result, Option_6475FA this);

void Option_6475FA_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Operational_Api result, Option_6475FA this) {
  switch (this->type) {
    case TNone_3EE2E0: None_3EE2E0_get_(CALLER (HAMR_SW_FlightPlanner_Impl_Operational_Api) result, (None_3EE2E0) this); return;
    case TSome_EB994A: Some_EB994A_get_(CALLER (HAMR_SW_FlightPlanner_Impl_Operational_Api) result, (Some_EB994A) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}