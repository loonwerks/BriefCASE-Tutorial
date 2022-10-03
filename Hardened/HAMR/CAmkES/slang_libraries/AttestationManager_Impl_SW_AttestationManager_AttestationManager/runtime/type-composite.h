#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  THAMR_Base_Types_Bits_Payload = (int) 0xA5020189, // HAMR.Base_Types.Bits_Payload
  THAMR_Base_Types_Boolean_Payload = (int) 0xE10AB167, // HAMR.Base_Types.Boolean_Payload
  THAMR_SW_AttestationManager_Impl_Initialization_Api = (int) 0x3FADEF82, // HAMR.SW.AttestationManager_Impl_Initialization_Api
  THAMR_SW_AttestationManager_Impl_Operational_Api = (int) 0xE71BC057, // HAMR.SW.AttestationManager_Impl_Operational_Api
  THAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge = (int) 0x4C7D89ED, // HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge
  THAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge_EntryPoints = (int) 0x7953D9FE, // HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager_Bridge.EntryPoints
  TIS_C4F575 = (int) 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = (int) 0x82ABD805, // IS[Z, Z]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMBox2_1029D1 = (int) 0x1029D116, // MBox2[Z, Option[art.DataContent]]
  TMBox2_1CBFC4 = (int) 0x1CBFC457, // MBox2[Z, art.DataContent]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TNone_E08F39 = (int) 0xE08F39C1, // None[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  TNone_AAA378 = (int) 0xAAA3780F, // None[HAMR.SW.AttestationManager_Impl_Operational_Api]
  TNone_3026C5 = (int) 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = (int) 0x5C135592, // None[IS[Z, Z]]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TSome_88F02A = (int) 0x88F02A95, // Some[HAMR.SW.AttestationManager_Impl_Initialization_Api]
  TSome_6D831B = (int) 0x6D831B3F, // Some[HAMR.SW.AttestationManager_Impl_Operational_Api]
  TSome_8D03B1 = (int) 0x8D03B113, // Some[IS[Z, B]]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TString = (int) 0xB6F8E8F6, // String
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = (int) 0x45E54D5D, // art.Port[IS[Z, B]]
} TYPE;

char *TYPE_string_(void *type);

typedef struct Type *Type;
struct Type {
  TYPE type;
};

#define MaxString 256

typedef struct String *String;
struct String {
  TYPE type;
  Z size;
  C value[];
};

struct StaticString {
  TYPE type;
  Z size;
  C value[MaxString + 1];
};

#define string(v) ((String) &((struct { TYPE type; Z size; C value[sizeof(v)]; }) { TString, Z_C(sizeof (v) - 1), v }))
#define DeclNewString(x) struct StaticString x = { .type = TString }

#ifdef __cplusplus
}
#endif

#endif