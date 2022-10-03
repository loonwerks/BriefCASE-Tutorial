#ifndef SIREUM_GEN_TYPE_H
#define SIREUM_GEN_TYPE_H

#ifdef __cplusplus
extern "C" {
#endif
#include <stackframe.h>

typedef enum {
  THAMR_Base_Types_Bits_Payload = (int) 0xA5020189, // HAMR.Base_Types.Bits_Payload
  THAMR_Base_Types_Boolean_Payload = (int) 0xE10AB167, // HAMR.Base_Types.Boolean_Payload
  THAMR_SW_Monitor_Impl_Initialization_Api = (int) 0x05F67F32, // HAMR.SW.Monitor_Impl_Initialization_Api
  THAMR_SW_Monitor_Impl_Operational_Api = (int) 0x31CB01CC, // HAMR.SW.Monitor_Impl_Operational_Api
  THAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge = (int) 0xD922E5E6, // HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge
  THAMR_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_EntryPoints = (int) 0x1BC95613, // HAMR.SW.Monitor_Impl_SW_Monitor_Monitor_Bridge.EntryPoints
  TIS_C4F575 = (int) 0xC4F575CD, // IS[Z, B]
  TIS_948B60 = (int) 0x948B6070, // IS[Z, String]
  TIS_82ABD8 = (int) 0x82ABD805, // IS[Z, Z]
  TIS_820232 = (int) 0x82023297, // IS[Z, art.UPort]
  TMBox2_1029D1 = (int) 0x1029D116, // MBox2[Z, Option[art.DataContent]]
  TMBox2_1CBFC4 = (int) 0x1CBFC457, // MBox2[Z, art.DataContent]
  TMS_83D5EB = (int) 0x83D5EBFF, // MS[Z, Option[art.Bridge]]
  TNone_2A8B4A = (int) 0x2A8B4A55, // None[HAMR.SW.Monitor_Impl_Initialization_Api]
  TNone_BE5310 = (int) 0xBE53106D, // None[HAMR.SW.Monitor_Impl_Operational_Api]
  TNone_3026C5 = (int) 0x3026C5D4, // None[IS[Z, B]]
  TNone_5C1355 = (int) 0x5C135592, // None[IS[Z, Z]]
  TNone_734370 = (int) 0x73437068, // None[art.Bridge]
  TNone_964667 = (int) 0x9646678F, // None[art.DataContent]
  TSome_6EC2CA = (int) 0x6EC2CABE, // Some[HAMR.SW.Monitor_Impl_Initialization_Api]
  TSome_3E502C = (int) 0x3E502CA6, // Some[HAMR.SW.Monitor_Impl_Operational_Api]
  TSome_8D03B1 = (int) 0x8D03B113, // Some[IS[Z, B]]
  TSome_D29615 = (int) 0xD29615C0, // Some[art.DataContent]
  TString = (int) 0xB6F8E8F6, // String
  Tart_Bridge_Ports = (int) 0x14139493, // art.Bridge.Ports
  Tart_DispatchPropertyProtocol_Periodic = (int) 0x4C652984, // art.DispatchPropertyProtocol.Periodic
  Tart_Empty = (int) 0x49C5E24D, // art.Empty
  Tart_Port_45E54D = (int) 0x45E54D5D, // art.Port[IS[Z, B]]
  Tart_Port_9CBF18 = (int) 0x9CBF18B7, // art.Port[art.Empty]
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