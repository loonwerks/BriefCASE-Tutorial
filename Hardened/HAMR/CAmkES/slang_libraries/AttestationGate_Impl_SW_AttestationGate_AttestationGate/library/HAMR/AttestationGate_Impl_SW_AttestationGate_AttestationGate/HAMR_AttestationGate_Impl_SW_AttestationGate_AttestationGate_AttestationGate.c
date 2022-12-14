#include <all.h>

B HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialized_ = F;

struct HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge;
union art_Bridge_EntryPoints _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints;
union Option_8E9F45 _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData;
Z _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_id;
union Option_8E9F45 _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port;
Z _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_id;
union Option_8E9F45 _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port;
Z _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_id;
union Option_8E9F45 _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port;

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(STACK_FRAME_ONLY) {
  if (HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialized_) return;
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialized_ = T;
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "<init>", 0);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_AttestationGateBridge(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_entryPoints(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_noData(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_in_id(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_in_port(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_out_id(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_out_port(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_TrustedIds_id(SF_LAST);
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_TrustedIds_port(SF_LAST);
}

HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge;
}

art_Bridge_EntryPoints HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints;
}

Option_8E9F45 HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData;
}

Z HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_id(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_id;
}

Option_8E9F45 HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port;
}

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_in_port) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port, p_MissionCommand_in_port, sizeof(union Option_8E9F45));
}

Z HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_id(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_id;
}

Option_8E9F45 HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port;
}

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_out_port) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port, p_MissionCommand_out_port, sizeof(union Option_8E9F45));
}

Z HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_id(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_id;
}

Option_8E9F45 HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port(STACK_FRAME_ONLY) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port;
}

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port_a(STACK_FRAME Option_8E9F45 p_TrustedIds_port) {
  HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init(CALLER_LAST);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port, p_TrustedIds_port, sizeof(union Option_8E9F45));
}

Z HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "main", 0);

  sfUpdateLoc(100);
  {
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(101);
  {
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(102);
  {
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(103);
  {
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(105);
  {
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "initialiseArchitecture", 0);
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "initialiseEntryPoint", 0);

  sfUpdateLoc(91);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "computeEntryPoint", 0);

  sfUpdateLoc(93);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "finaliseEntryPoint", 0);

  sfUpdateLoc(95);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints(SF_LAST));
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(119);
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

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "touch", 0);

  sfUpdateLoc(111);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(112);
    {
      HAMR_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(115);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewHAMR_Base_Types_Boolean_Payload(t_2);
      HAMR_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(116);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(121);
    {
      DeclNewIS_C4F575(t_6);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_6);
      DeclNewHAMR_Base_Types_Bits_Payload(t_5);
      HAMR_Base_Types_Bits_Payload_apply(SF &t_5, (IS_C4F575) ((IS_C4F575) &t_6));
      HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(122);
    {
      DeclNewart_Empty(t_7);
      art_Empty_apply(SF &t_7);
      HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(124);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Initialization_Api(t_8);
      Option_207473_get_(SF (HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_8, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(125);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Initialization_Api(t_9);
      Option_207473_get_(SF (HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_9, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(126);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Initialization_Api(t_10);
      Option_207473_get_(SF (HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_10, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Initialization_Api_logError_(SF ((HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_10), (String) string(""));
    }

    sfUpdateLoc(127);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_11);
      Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_11, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_11), (String) string(""));
    }

    sfUpdateLoc(128);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_12);
      Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_12, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_12), (String) string(""));
    }

    sfUpdateLoc(129);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_13);
      Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_13, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_AttestationGate_Impl_Operational_Api_logError_(SF ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_13), (String) string(""));
    }

    sfUpdateLoc(130);
    Option_30119F apiUsage_MissionCommand_in;
    DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_14);
    Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_14, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    HAMR_SW_AttestationGate_Impl_Operational_Api_get_MissionCommand_in_(SF (Option_30119F) &t_15, ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_14));
    apiUsage_MissionCommand_in = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(131);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Initialization_Api(t_16);
      Option_207473_get_(SF (HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_16, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      HAMR_SW_AttestationGate_Impl_Initialization_Api_put_MissionCommand_out_(SF ((HAMR_SW_AttestationGate_Impl_Initialization_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(132);
    {
      DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_18);
      Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_18, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      HAMR_SW_AttestationGate_Impl_Operational_Api_put_MissionCommand_out_(SF ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }

    sfUpdateLoc(133);
    Option_30119F apiUsage_TrustedIds;
    DeclNewHAMR_SW_AttestationGate_Impl_Operational_Api(t_20);
    Option_921595_get_(SF (HAMR_SW_AttestationGate_Impl_Operational_Api) &t_20, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_21);
    HAMR_SW_AttestationGate_Impl_Operational_Api_get_TrustedIds_(SF (Option_30119F) &t_21, ((HAMR_SW_AttestationGate_Impl_Operational_Api) &t_20));
    apiUsage_TrustedIds = (Option_30119F) ((Option_30119F) &t_21);
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(138);
  {
    String_cprint(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_name_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(140);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(150);
  {
    String_cprint(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_name_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(151);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(152);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(144);
  {
    String_cprint(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_name_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(145);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(146);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "getValue", 0);

  sfUpdateLoc(53);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(55);
    B t_1;
    {
      t_1 = Z__eq(portId, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(58);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: AttestationGate.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "putValue", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(74);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: AttestationGate.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "sendOutput", 0);

  sfUpdateLoc(81);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(82);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port(SF_LAST));
      HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_out_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(83);
    {
      HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port_a(SF (Option_8E9F45) HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData(SF_LAST));
    }
  }
}

Unit HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "AttestationGate.scala", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate", "receiveInput", 0);

  sfUpdateLoc(65);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_MissionCommand_in_Receive(SF (Option_8E9F45) &t_0);
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(67);
  {
    DeclNewOption_8E9F45(t_1);
    HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_seL4Nix_TrustedIds_Receive(SF (Option_8E9F45) &t_1);
    HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_AttestationGateBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D MissionCommand_in;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_in"), art_PortMode_Type_EventIn);
    MissionCommand_in = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D MissionCommand_out;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_MissionCommand_out"), art_PortMode_Type_EventOut);
    MissionCommand_out = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(19);
    art_Port_45E54D TrustedIds;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate_TrustedIds"), art_PortMode_Type_EventIn);
    TrustedIds = (art_Port_45E54D) (&t_2);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_4);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_4, Z_C(500));
    DeclNewNone_5C1355(t_5);
    None_5C1355_apply(SF &t_5);
    DeclNewHAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge(t_3);
    HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_apply(SF &t_3, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_AttestationGate_AttestationGate"), (art_DispatchPropertyProtocol) (&t_4), (Option_9AF35E) (&t_5), (art_Port_45E54D) MissionCommand_in, (art_Port_45E54D) MissionCommand_out, (art_Port_45E54D) TrustedIds);
    Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge, (&t_3), sizeof(struct HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge));
  }
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_entryPoints, HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_entryPoints_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(34);
  DeclNewNone_964667(t_6);
  None_964667_apply(SF &t_6);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData, (&t_6), sizeof(struct None_964667));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_in_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_id = art_Port_45E54D_id_(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_MissionCommand_in_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_in_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_in_port, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_out_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_id = art_Port_45E54D_id_(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_MissionCommand_out_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_MissionCommand_out_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_MissionCommand_out_port, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_TrustedIds_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  _HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_id = art_Port_45E54D_id_(HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_Bridge_TrustedIds_(HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_AttestationGateBridge(SF_LAST)));
};

void HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_init_TrustedIds_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  Type_assign(&_HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_TrustedIds_port, HAMR_AttestationGate_Impl_SW_AttestationGate_AttestationGate_AttestationGate_noData(SF_LAST), sizeof(union Option_8E9F45));
};