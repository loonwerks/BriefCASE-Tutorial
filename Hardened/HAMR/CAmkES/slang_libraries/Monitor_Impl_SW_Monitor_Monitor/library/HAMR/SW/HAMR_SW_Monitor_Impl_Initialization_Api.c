#include <all.h>

// HAMR.SW.Monitor_Impl_Initialization_Api

B HAMR_SW_Monitor_Impl_Initialization_Api__eq(HAMR_SW_Monitor_Impl_Initialization_Api this, HAMR_SW_Monitor_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  if (Z__ne(this->Output_Id, other->Output_Id)) return F;
  if (Z__ne(this->Alert_Id, other->Alert_Id)) return F;
  return T;
}

B HAMR_SW_Monitor_Impl_Initialization_Api__ne(HAMR_SW_Monitor_Impl_Initialization_Api this, HAMR_SW_Monitor_Impl_Initialization_Api other);

void HAMR_SW_Monitor_Impl_Initialization_Api_string_(STACK_FRAME String result, HAMR_SW_Monitor_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("Monitor_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Output_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Alert_Id);
  String_string_(SF result, string(")"));
}

void HAMR_SW_Monitor_Impl_Initialization_Api_cprint(HAMR_SW_Monitor_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Monitor_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Output_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_Monitor_Impl_Initialization_Api__is(STACK_FRAME void* this);
HAMR_SW_Monitor_Impl_Initialization_Api HAMR_SW_Monitor_Impl_Initialization_Api__as(STACK_FRAME void *this);

void HAMR_SW_Monitor_Impl_Initialization_Api_apply(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api this, Z id, Z Observed_Id, Z Output_Id, Z Alert_Id) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->Observed_Id = Observed_Id;
  this->Output_Id = Output_Id;
  this->Alert_Id = Alert_Id;
}