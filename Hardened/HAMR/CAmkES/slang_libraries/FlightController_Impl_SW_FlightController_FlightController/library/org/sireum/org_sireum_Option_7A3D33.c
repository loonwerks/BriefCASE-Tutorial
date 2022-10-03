#include <all.h>

// Option[HAMR.SW.FlightController_Impl_Initialization_Api]

B Option_7A3D33__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D43E83: return T;
    case TSome_E082A6: return T;
    default: return F;
  }
}

Option_7A3D33 Option_7A3D33__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D43E83: break;
    case TSome_E082A6: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.FlightController_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7A3D33) this;
}

void Option_7A3D33_string_(STACK_FRAME String result, Option_7A3D33 this);

void Option_7A3D33_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api result, Option_7A3D33 this) {
  switch (this->type) {
    case TNone_D43E83: None_D43E83_get_(CALLER (HAMR_SW_FlightController_Impl_Initialization_Api) result, (None_D43E83) this); return;
    case TSome_E082A6: Some_E082A6_get_(CALLER (HAMR_SW_FlightController_Impl_Initialization_Api) result, (Some_E082A6) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}