#ifndef SIREUM_TYPE_H_HAMR_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_HAMR_Base_Types_Boolean_Payload

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR.Base_Types.Boolean_Payload

typedef struct HAMR_Base_Types_Boolean_Payload *HAMR_Base_Types_Boolean_Payload;
struct HAMR_Base_Types_Boolean_Payload {
  TYPE type;
  B value;
};

#define DeclNewHAMR_Base_Types_Boolean_Payload(x) struct HAMR_Base_Types_Boolean_Payload x = { .type = THAMR_Base_Types_Boolean_Payload }

#ifdef __cplusplus
}
#endif

#endif