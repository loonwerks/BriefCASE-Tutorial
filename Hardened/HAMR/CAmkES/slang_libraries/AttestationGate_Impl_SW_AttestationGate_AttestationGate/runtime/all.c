#include <all.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: return HAMR_Base_Types_Bits_Payload__eq((HAMR_Base_Types_Bits_Payload) t1, (HAMR_Base_Types_Bits_Payload) t2);
    case THAMR_Base_Types_Boolean_Payload: return HAMR_Base_Types_Boolean_Payload__eq((HAMR_Base_Types_Boolean_Payload) t1, (HAMR_Base_Types_Boolean_Payload) t2);
    case THAMR_SW_AttestationGate_Impl_Initialization_Api: return HAMR_SW_AttestationGate_Impl_Initialization_Api__eq((HAMR_SW_AttestationGate_Impl_Initialization_Api) t1, (HAMR_SW_AttestationGate_Impl_Initialization_Api) t2);
    case THAMR_SW_AttestationGate_Impl_Operational_Api: return HAMR_SW_AttestationGate_Impl_Operational_Api__eq((HAMR_SW_AttestationGate_Impl_Operational_Api) t1, (HAMR_SW_AttestationGate_Impl_Operational_Api) t2);
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge: return HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge__eq((HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge) t1, (HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge) t2);
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints: return HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints__eq((HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints) t1, (HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints) t2);
    case TIS_C4F575: return IS_C4F575__eq((IS_C4F575) t1, (IS_C4F575) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TMBox2_1029D1: return MBox2_1029D1__eq((MBox2_1029D1) t1, (MBox2_1029D1) t2);
    case TMBox2_1CBFC4: return MBox2_1CBFC4__eq((MBox2_1CBFC4) t1, (MBox2_1CBFC4) t2);
    case TMS_83D5EB: return MS_83D5EB__eq((MS_83D5EB) t1, (MS_83D5EB) t2);
    case TNone_BE0654: return None_BE0654__eq((None_BE0654) t1, (None_BE0654) t2);
    case TNone_118401: return None_118401__eq((None_118401) t1, (None_118401) t2);
    case TNone_3026C5: return None_3026C5__eq((None_3026C5) t1, (None_3026C5) t2);
    case TNone_5C1355: return None_5C1355__eq((None_5C1355) t1, (None_5C1355) t2);
    case TNone_734370: return None_734370__eq((None_734370) t1, (None_734370) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TSome_925053: return Some_925053__eq((Some_925053) t1, (Some_925053) t2);
    case TSome_8753F1: return Some_8753F1__eq((Some_8753F1) t1, (Some_8753F1) t2);
    case TSome_8D03B1: return Some_8D03B1__eq((Some_8D03B1) t1, (Some_8D03B1) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_Port_45E54D: return art_Port_45E54D__eq((art_Port_45E54D) t1, (art_Port_45E54D) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: HAMR_Base_Types_Bits_Payload_cprint((HAMR_Base_Types_Bits_Payload) this, isOut); return;
    case THAMR_Base_Types_Boolean_Payload: HAMR_Base_Types_Boolean_Payload_cprint((HAMR_Base_Types_Boolean_Payload) this, isOut); return;
    case THAMR_SW_AttestationGate_Impl_Initialization_Api: HAMR_SW_AttestationGate_Impl_Initialization_Api_cprint((HAMR_SW_AttestationGate_Impl_Initialization_Api) this, isOut); return;
    case THAMR_SW_AttestationGate_Impl_Operational_Api: HAMR_SW_AttestationGate_Impl_Operational_Api_cprint((HAMR_SW_AttestationGate_Impl_Operational_Api) this, isOut); return;
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge: HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_cprint((HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge) this, isOut); return;
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints: HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints_cprint((HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints) this, isOut); return;
    case TIS_C4F575: IS_C4F575_cprint((IS_C4F575) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TMBox2_1029D1: MBox2_1029D1_cprint((MBox2_1029D1) this, isOut); return;
    case TMBox2_1CBFC4: MBox2_1CBFC4_cprint((MBox2_1CBFC4) this, isOut); return;
    case TMS_83D5EB: MS_83D5EB_cprint((MS_83D5EB) this, isOut); return;
    case TNone_BE0654: None_BE0654_cprint((None_BE0654) this, isOut); return;
    case TNone_118401: None_118401_cprint((None_118401) this, isOut); return;
    case TNone_3026C5: None_3026C5_cprint((None_3026C5) this, isOut); return;
    case TNone_5C1355: None_5C1355_cprint((None_5C1355) this, isOut); return;
    case TNone_734370: None_734370_cprint((None_734370) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TSome_925053: Some_925053_cprint((Some_925053) this, isOut); return;
    case TSome_8753F1: Some_8753F1_cprint((Some_8753F1) this, isOut); return;
    case TSome_8D03B1: Some_8D03B1_cprint((Some_8D03B1) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_Port_45E54D: art_Port_45E54D_cprint((art_Port_45E54D) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case THAMR_Base_Types_Bits_Payload: HAMR_Base_Types_Bits_Payload_string_(CALLER result, (HAMR_Base_Types_Bits_Payload) this); return;
    case THAMR_Base_Types_Boolean_Payload: HAMR_Base_Types_Boolean_Payload_string_(CALLER result, (HAMR_Base_Types_Boolean_Payload) this); return;
    case THAMR_SW_AttestationGate_Impl_Initialization_Api: HAMR_SW_AttestationGate_Impl_Initialization_Api_string_(CALLER result, (HAMR_SW_AttestationGate_Impl_Initialization_Api) this); return;
    case THAMR_SW_AttestationGate_Impl_Operational_Api: HAMR_SW_AttestationGate_Impl_Operational_Api_string_(CALLER result, (HAMR_SW_AttestationGate_Impl_Operational_Api) this); return;
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge: HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_string_(CALLER result, (HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge) this); return;
    case THAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints: HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints_string_(CALLER result, (HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_EntryPoints) this); return;
    case TIS_C4F575: IS_C4F575_string_(CALLER result, (IS_C4F575) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string_(CALLER result, (IS_82ABD8) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TMBox2_1029D1: MBox2_1029D1_string_(CALLER result, (MBox2_1029D1) this); return;
    case TMBox2_1CBFC4: MBox2_1CBFC4_string_(CALLER result, (MBox2_1CBFC4) this); return;
    case TMS_83D5EB: MS_83D5EB_string_(CALLER result, (MS_83D5EB) this); return;
    case TNone_BE0654: None_BE0654_string_(CALLER result, (None_BE0654) this); return;
    case TNone_118401: None_118401_string_(CALLER result, (None_118401) this); return;
    case TNone_3026C5: None_3026C5_string_(CALLER result, (None_3026C5) this); return;
    case TNone_5C1355: None_5C1355_string_(CALLER result, (None_5C1355) this); return;
    case TNone_734370: None_734370_string_(CALLER result, (None_734370) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TSome_925053: Some_925053_string_(CALLER result, (Some_925053) this); return;
    case TSome_8753F1: Some_8753F1_string_(CALLER result, (Some_8753F1) this); return;
    case TSome_8D03B1: Some_8D03B1_string_(CALLER result, (Some_8D03B1) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_Port_45E54D: art_Port_45E54D_string_(CALLER result, (art_Port_45E54D) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

