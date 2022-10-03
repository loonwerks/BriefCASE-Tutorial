#ifndef SIREUM_H_HAMR_Base_Types_Boolean_Payload
#define SIREUM_H_HAMR_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// HAMR.Base_Types.Boolean_Payload

#define HAMR_Base_Types_Boolean_Payload_value_(this) ((this)->value)

B HAMR_Base_Types_Boolean_Payload__eq(HAMR_Base_Types_Boolean_Payload this, HAMR_Base_Types_Boolean_Payload other);
inline B HAMR_Base_Types_Boolean_Payload__ne(HAMR_Base_Types_Boolean_Payload this, HAMR_Base_Types_Boolean_Payload other) {
  return !HAMR_Base_Types_Boolean_Payload__eq(this, other);
};
void HAMR_Base_Types_Boolean_Payload_string_(STACK_FRAME String result, HAMR_Base_Types_Boolean_Payload this);
void HAMR_Base_Types_Boolean_Payload_cprint(HAMR_Base_Types_Boolean_Payload this, B isOut);

inline B HAMR_Base_Types_Boolean_Payload__is(STACK_FRAME void* this) {
  return ((HAMR_Base_Types_Boolean_Payload) this)->type == THAMR_Base_Types_Boolean_Payload;
}

inline HAMR_Base_Types_Boolean_Payload HAMR_Base_Types_Boolean_Payload__as(STACK_FRAME void *this) {
  if (HAMR_Base_Types_Boolean_Payload__is(CALLER this)) return (HAMR_Base_Types_Boolean_Payload) this;
  sfAbortImpl(CALLER "Invalid cast to HAMR.Base_Types.Boolean_Payload.");
  abort();
}

void HAMR_Base_Types_Boolean_Payload_apply(STACK_FRAME HAMR_Base_Types_Boolean_Payload this, B value);

#ifdef __cplusplus
}
#endif

#endif