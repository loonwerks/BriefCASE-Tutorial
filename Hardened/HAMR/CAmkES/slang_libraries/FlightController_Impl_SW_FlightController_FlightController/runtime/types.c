#include <types.h>

size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: return sizeof(struct HAMR_Base_Types_Bits_Payload); // HAMR.Base_Types.Bits_Payload
    case THAMR_Base_Types_Boolean_Payload: return sizeof(struct HAMR_Base_Types_Boolean_Payload); // HAMR.Base_Types.Boolean_Payload
    case THAMR_SW_FlightController_Impl_Initialization_Api: return sizeof(struct HAMR_SW_FlightController_Impl_Initialization_Api); // HAMR.SW.FlightController_Impl_Initialization_Api
    case THAMR_SW_FlightController_Impl_Operational_Api: return sizeof(struct HAMR_SW_FlightController_Impl_Operational_Api); // HAMR.SW.FlightController_Impl_Operational_Api
    case THAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge: return sizeof(struct HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge); // HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge
    case THAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints: return sizeof(struct HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_EntryPoints); // HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.EntryPoints
    case TIS_C4F575: return sizeof(struct IS_C4F575); // IS[Z, B]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TMBox2_1029D1: return sizeof(struct MBox2_1029D1); // MBox2[Z, Option[art.DataContent]]
    case TMBox2_1CBFC4: return sizeof(struct MBox2_1CBFC4); // MBox2[Z, art.DataContent]
    case TMS_83D5EB: return sizeof(struct MS_83D5EB); // MS[Z, Option[art.Bridge]]
    case TNone_D43E83: return sizeof(struct None_D43E83); // None[HAMR.SW.FlightController_Impl_Initialization_Api]
    case TNone_F62B67: return sizeof(struct None_F62B67); // None[HAMR.SW.FlightController_Impl_Operational_Api]
    case TNone_3026C5: return sizeof(struct None_3026C5); // None[IS[Z, B]]
    case TNone_5C1355: return sizeof(struct None_5C1355); // None[IS[Z, Z]]
    case TNone_734370: return sizeof(struct None_734370); // None[art.Bridge]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_ED72E1: return sizeof(struct None_ED72E1); // None[art.Empty]
    case TSome_E082A6: return sizeof(struct Some_E082A6); // Some[HAMR.SW.FlightController_Impl_Initialization_Api]
    case TSome_9535B2: return sizeof(struct Some_9535B2); // Some[HAMR.SW.FlightController_Impl_Operational_Api]
    case TSome_8D03B1: return sizeof(struct Some_8D03B1); // Some[IS[Z, B]]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_4782C6: return sizeof(struct Some_4782C6); // Some[art.Empty]
    case TString: return sizeof(struct String); // String
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_Port_45E54D: return sizeof(struct art_Port_45E54D); // art.Port[IS[Z, B]]
    case Tart_Port_9CBF18: return sizeof(struct art_Port_9CBF18); // art.Port[art.Empty]
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize) {
  Type srcType = (Type) src;
  if (srcType->type == TString) {
    String_assign((String) dest, (String) src);
    return;
  }
  size_t srcSize = sizeOf(srcType);
  memcpy(dest, src, srcSize);
  memset(((char *) dest) + srcSize, 0, destSize - srcSize);
}

char *TYPE_string_(void *type) {
  static char *strings[] = {
    "HAMR.Base_Types.Bits_Payload",
    "HAMR.Base_Types.Boolean_Payload",
    "HAMR.SW.FlightController_Impl_Initialization_Api",
    "HAMR.SW.FlightController_Impl_Operational_Api",
    "HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge",
    "HAMR.SW.FlightController_Impl_SW_FlightController_FlightController_Bridge.EntryPoints",
    "IS[Z, B]",
    "IS[Z, String]",
    "IS[Z, Z]",
    "IS[Z, art.UPort]",
    "MBox2[Z, Option[art.DataContent]]",
    "MBox2[Z, art.DataContent]",
    "MS[Z, Option[art.Bridge]]",
    "None[HAMR.SW.FlightController_Impl_Initialization_Api]",
    "None[HAMR.SW.FlightController_Impl_Operational_Api]",
    "None[IS[Z, B]]",
    "None[IS[Z, Z]]",
    "None[art.Bridge]",
    "None[art.DataContent]",
    "None[art.Empty]",
    "Some[HAMR.SW.FlightController_Impl_Initialization_Api]",
    "Some[HAMR.SW.FlightController_Impl_Operational_Api]",
    "Some[IS[Z, B]]",
    "Some[art.DataContent]",
    "Some[art.Empty]",
    "String",
    "art.Bridge.Ports",
    "art.DispatchPropertyProtocol.Periodic",
    "art.Empty",
    "art.Port[IS[Z, B]]",
    "art.Port[art.Empty]"
  };
  return strings[((Type) type)->type];
}