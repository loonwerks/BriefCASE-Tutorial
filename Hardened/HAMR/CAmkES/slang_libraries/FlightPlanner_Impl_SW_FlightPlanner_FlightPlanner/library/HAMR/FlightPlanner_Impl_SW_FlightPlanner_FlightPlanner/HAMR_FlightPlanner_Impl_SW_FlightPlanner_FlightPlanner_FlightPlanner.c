#include <all.h>

B HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialized_ = F;

struct HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge;
union art_Bridge_EntryPoints _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints;
union Option_8E9F45 _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData;
Z _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id;
union Option_8E9F45 _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port;
Z _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id;
union Option_8E9F45 _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port;

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(STACK_FRAME_ONLY) {
  if (HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialized_) return;
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialized_ = T;
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "<init>", 0);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlannerBridge(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_entryPoints(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_noData(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_id(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_port(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_id(SF_LAST);
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_port(SF_LAST);
}

HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return (HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge) &_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge;
}

art_Bridge_EntryPoints HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints;
}

Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData;
}

Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id;
}

Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port;
}

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port, p_MissionCommand_port, sizeof(union Option_8E9F45));
}

Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id;
}

Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port(STACK_FRAME_ONLY) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port;
}

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_port) {
  HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(CALLER_LAST);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port, p_FlightPlan_port, sizeof(union Option_8E9F45));
}

Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "main", 0);

  sfUpdateLoc(90);
  {
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(91);
  {
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(92);
  {
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(93);
  {
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(95);
  {
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "initialiseArchitecture", 0);
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "initialiseEntryPoint", 0);

  sfUpdateLoc(81);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "computeEntryPoint", 0);

  sfUpdateLoc(83);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "finaliseEntryPoint", 0);

  sfUpdateLoc(85);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints(SF_LAST));
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(109);
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

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "touch", 0);

  sfUpdateLoc(101);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(102);
    {
      HAMR_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(105);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewHAMR_Base_Types_Boolean_Payload(t_2);
      HAMR_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(106);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(111);
    {
      DeclNewIS_C4F575(t_6);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_6);
      DeclNewHAMR_Base_Types_Bits_Payload(t_5);
      HAMR_Base_Types_Bits_Payload_apply(SF &t_5, (IS_C4F575) ((IS_C4F575) &t_6));
      HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(112);
    {
      DeclNewart_Empty(t_7);
      art_Empty_apply(SF &t_7);
      HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(114);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(t_8);
      Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_8, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(t_9);
      Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_9, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(t_10);
      Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_10, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Initialization_Api_logError_(SF ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_10), (String) string(""));
    }

    sfUpdateLoc(117);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_11);
      Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_11, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_11), (String) string(""));
    }

    sfUpdateLoc(118);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_12);
      Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_12, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_12), (String) string(""));
    }

    sfUpdateLoc(119);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_13);
      Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_13, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_Operational_Api_logError_(SF ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_13), (String) string(""));
    }

    sfUpdateLoc(120);
    Option_30119F apiUsage_MissionCommand;
    DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_14);
    Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_14, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_(SF (Option_30119F) &t_15, ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_14));
    apiUsage_MissionCommand = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(121);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(t_16);
      Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_16, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      HAMR_SW_FlightPlanner_Impl_Initialization_Api_put_FlightPlan_(SF ((HAMR_SW_FlightPlanner_Impl_Initialization_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(122);
    {
      DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(t_18);
      Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_18, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      HAMR_SW_FlightPlanner_Impl_Operational_Api_put_FlightPlan_(SF ((HAMR_SW_FlightPlanner_Impl_Operational_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
  {
    String_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_name_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(128);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(129);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_name_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(140);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(141);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(133);
  {
    String_cprint(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_name_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(134);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(135);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "getValue", 0);

  sfUpdateLoc(47);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(50);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: FlightPlanner.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "putValue", 0);

  sfUpdateLoc(61);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(62);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(64);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: FlightPlanner.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "sendOutput", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port(SF_LAST));
      HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_FlightPlan_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(73);
    {
      HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port_a(SF (Option_8E9F45) HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData(SF_LAST));
    }
  }
}

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "FlightPlanner.scala", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner", "receiveInput", 0);

  sfUpdateLoc(57);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_MissionCommand_Receive(SF (Option_8E9F45) &t_0);
    HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlannerBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D FlightPlan;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner_FlightPlan"), art_PortMode_Type_EventOut);
    FlightPlan = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewHAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge(t_2);
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_apply(SF &t_2, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_FlightPlanner_FlightPlanner"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) MissionCommand, (art_Port_45E54D) FlightPlan);
    Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge, (&t_2), sizeof(struct HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge));
  }
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_entryPoints_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData, (&t_5), sizeof(struct None_964667));
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id = art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_MissionCommand_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)));
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id = art_Port_45E54D_id_(HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_FlightPlan_(HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(SF_LAST)));
};

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port, HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData(SF_LAST), sizeof(union Option_8E9F45));
};