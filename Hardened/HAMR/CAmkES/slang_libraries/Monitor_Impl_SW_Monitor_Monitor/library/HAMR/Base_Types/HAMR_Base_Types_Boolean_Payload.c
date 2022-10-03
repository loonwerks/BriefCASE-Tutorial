#include <all.h>

// HAMR.Base_Types.Boolean_Payload

B HAMR_Base_Types_Boolean_Payload__eq(HAMR_Base_Types_Boolean_Payload this, HAMR_Base_Types_Boolean_Payload other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

B HAMR_Base_Types_Boolean_Payload__ne(HAMR_Base_Types_Boolean_Payload this, HAMR_Base_Types_Boolean_Payload other);

void HAMR_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, HAMR_Base_Types_Boolean_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "HAMR.Base_Types.Boolean_Payload", "string", 0);
  String_string_(SF result, string("Boolean_Payload("));
  B_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void HAMR_Base_Types_Boolean_Payload_cprint(HAMR_Base_Types_Boolean_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean_Payload("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Base_Types_Boolean_Payload__is(STACK_FRAME void* this);
HAMR_Base_Types_Boolean_Payload HAMR_Base_Types_Boolean_Payload__as(STACK_FRAME void *this);

void HAMR_Base_Types_Boolean_Payload_apply(STACK_FRAME HAMR_Base_Types_Boolean_Payload this, B value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "HAMR.Base_Types.Boolean_Payload", "apply", 0);
  this->value = value;
}