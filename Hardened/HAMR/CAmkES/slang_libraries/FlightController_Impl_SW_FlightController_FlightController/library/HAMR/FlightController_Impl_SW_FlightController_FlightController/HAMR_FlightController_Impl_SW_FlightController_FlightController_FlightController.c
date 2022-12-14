#include <all.h>

B HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_ = F;

struct HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge;
union art_Bridge_EntryPoints _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints;
union Option_8E9F45 _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData;
Z _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id;
union Option_8E9F45 _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port;
Z _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id;
union Option_8E9F45 _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port;

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(STACK_FRAME_ONLY) {
  if (HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_) return;
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialized_ = T;
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "<init>", 0);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightControllerBridge(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_entryPoints(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_noData(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_id(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_port(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_id(SF_LAST);
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_port(SF_LAST);
}

HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge) &_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge;
}

art_Bridge_EntryPoints HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints;
}

Option_8E9F45 HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData;
}

Z HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id;
}

Option_8E9F45 HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port;
}

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_port) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port, p_FlightPlan_port, sizeof(union Option_8E9F45));
}

Z HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id;
}

Option_8E9F45 HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port(STACK_FRAME_ONLY) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port;
}

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port_a(STACK_FRAME Option_8E9F45 p_Alert_port) {
  HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init(CALLER_LAST);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port, p_Alert_port, sizeof(union Option_8E9F45));
}

Z HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "main", 0);

  sfUpdateLoc(87);
  {
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(88);
  {
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(89);
  {
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(90);
  {
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(92);
  {
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "initialiseArchitecture", 0);
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "initialiseEntryPoint", 0);

  sfUpdateLoc(78);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "computeEntryPoint", 0);

  sfUpdateLoc(80);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "finaliseEntryPoint", 0);

  sfUpdateLoc(82);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(106);
  {
    DeclNewString(t_0);
    String_string_(SF (String) &t_0, string(""));
    art_DataContent_string_(SF (String) &t_0, a);
    String_string_(SF (String) &t_0, string(""));
    String_cprint(((String) &t_0), T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "touch", 0);

  sfUpdateLoc(98);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(99);
    {
      HAMR_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(102);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewHAMR_Base_Types_Boolean_Payload(t_2);
      HAMR_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(103);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(108);
    {
      DeclNewIS_C4F575(t_6);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_6);
      DeclNewHAMR_Base_Types_Bits_Payload(t_5);
      HAMR_Base_Types_Bits_Payload_apply(SF &t_5, (IS_C4F575) ((IS_C4F575) &t_6));
      HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(109);
    {
      DeclNewart_Empty(t_7);
      art_Empty_apply(SF &t_7);
      HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(111);
    {
      DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(t_8);
      Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &t_8, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_FlightController_Impl_Initialization_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(112);
    {
      DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(t_9);
      Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &t_9, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_FlightController_Impl_Initialization_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(113);
    {
      DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(t_10);
      Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &t_10, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Initialization_Api_logError_(SF ((HAMR_SW_FlightController_Impl_Initialization_Api) &t_10), (String) string(""));
    }

    sfUpdateLoc(114);
    {
      DeclNewHAMR_SW_FlightController_Impl_Operational_Api(t_11);
      Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &t_11, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_FlightController_Impl_Operational_Api) &t_11), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewHAMR_SW_FlightController_Impl_Operational_Api(t_12);
      Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &t_12, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_FlightController_Impl_Operational_Api) &t_12), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewHAMR_SW_FlightController_Impl_Operational_Api(t_13);
      Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &t_13, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightController_Impl_Operational_Api_logError_(SF ((HAMR_SW_FlightController_Impl_Operational_Api) &t_13), (String) string(""));
    }

    sfUpdateLoc(117);
    Option_30119F apiUsage_FlightPlan;
    DeclNewHAMR_SW_FlightController_Impl_Operational_Api(t_14);
    Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &t_14, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    HAMR_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(SF (Option_30119F) &t_15, ((HAMR_SW_FlightController_Impl_Operational_Api) &t_14));
    apiUsage_FlightPlan = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(118);
    Option_C622DB apiUsage_Alert;
    DeclNewHAMR_SW_FlightController_Impl_Operational_Api(t_16);
    Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &t_16, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_C622DB(t_17);
    HAMR_SW_FlightController_Impl_Operational_Api_get_Alert_(SF (Option_C622DB) &t_17, ((HAMR_SW_FlightController_Impl_Operational_Api) &t_16));
    apiUsage_Alert = (Option_C622DB) ((Option_C622DB) &t_17);
  }
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(123);
  {
    String_cprint(HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_name_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(124);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(125);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(135);
  {
    String_cprint(HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_name_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(136);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(137);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_name_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(130);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(131);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "getValue", 0);

  sfUpdateLoc(47);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(49);
    B t_1;
    {
      t_1 = Z__eq(portId, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(52);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: FlightController.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "sendOutput", 0);
}

Unit HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightController.scala", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController", "receiveInput", 0);

  sfUpdateLoc(59);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix_FlightPlan_Receive(SF (Option_8E9F45) &t_0);
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(61);
  {
    DeclNewOption_8E9F45(t_1);
    HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_seL4Nix_Alert_Receive(SF (Option_8E9F45) &t_1);
    HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightControllerBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController_FlightPlan"), art_PortMode_Type_EventIn);
    FlightPlan = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_9CBF18 Alert;
    DeclNewart_Port_9CBF18(t_1);
    art_Port_9CBF18_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController_Alert"), art_PortMode_Type_EventIn);
    Alert = (art_Port_9CBF18) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewHAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge(t_2);
    HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_apply(SF &t_2, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightController_FlightController"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) FlightPlan, (art_Port_9CBF18) Alert);
    Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge, (&t_2), sizeof(struct HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge));
  }
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_entryPoints, HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_entryPoints_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData, (&t_5), sizeof(struct None_964667));
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_id = art_Port_45E54D_id_(HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_FlightPlan_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)));
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_FlightPlan_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightPlan_port, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_id = art_Port_9CBF18_id_(HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_Alert_(HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_FlightControllerBridge(SF_LAST)));
};

void HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_init_Alert_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_Alert_port, HAMR_FlightController_Impl_SW_FlightController_FlightController_FlightController_noData(SF_LAST), sizeof(union Option_8E9F45));
};