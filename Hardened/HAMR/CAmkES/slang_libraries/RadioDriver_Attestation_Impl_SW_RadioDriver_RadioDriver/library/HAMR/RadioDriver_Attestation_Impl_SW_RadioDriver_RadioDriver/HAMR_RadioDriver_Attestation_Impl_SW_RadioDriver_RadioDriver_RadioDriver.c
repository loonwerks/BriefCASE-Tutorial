#include <all.h>

B HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialized_ = F;

struct HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge;
union art_Bridge_EntryPoints _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData;
Z _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_id;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port;
Z _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_id;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port;
Z _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_id;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port;
Z _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_id;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port;
Z _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_id;
union Option_8E9F45 _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port;

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(STACK_FRAME_ONLY) {
  if (HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialized_) return;
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialized_ = T;
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "<init>", 0);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_RadioDriverBridge(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_entryPoints(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_noData(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_MissionCommand_id(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_MissionCommand_port(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationRequest_id(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationRequest_port(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationResponse_id(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationResponse_port(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterResponse_id(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterResponse_port(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterRequest_id(SF_LAST);
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterRequest_port(SF_LAST);
}

HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge;
}

art_Bridge_EntryPoints HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData;
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_id(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_id;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port;
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port, p_MissionCommand_port, sizeof(union Option_8E9F45));
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_id(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_id;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port;
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationRequest_port) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port, p_AttestationRequest_port, sizeof(union Option_8E9F45));
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_id(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_id;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port;
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationResponse_port) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port, p_AttestationResponse_port, sizeof(union Option_8E9F45));
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_id(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_id;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port;
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationTesterResponse_port) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port, p_AttestationTesterResponse_port, sizeof(union Option_8E9F45));
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_id(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_id;
}

Option_8E9F45 HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port(STACK_FRAME_ONLY) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port;
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationTesterRequest_port) {
  HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init(CALLER_LAST);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port, p_AttestationTesterRequest_port, sizeof(union Option_8E9F45));
}

Z HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "main", 0);

  sfUpdateLoc(126);
  {
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(127);
  {
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(128);
  {
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(129);
  {
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(131);
  {
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "initialiseArchitecture", 0);
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "initialiseEntryPoint", 0);

  sfUpdateLoc(117);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints(SF_LAST));
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "computeEntryPoint", 0);

  sfUpdateLoc(119);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints(SF_LAST));
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "finaliseEntryPoint", 0);

  sfUpdateLoc(121);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints(SF_LAST));
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver.touch", "printDataContent", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(145);
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

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "touch", 0);

  sfUpdateLoc(137);
  B t_0;
  {
    t_0 = F;
  }
  if (t_0) {

    sfUpdateLoc(138);
    {
      HAMR_TranspilerToucher_touch(SF_LAST);
    }

    sfUpdateLoc(141);
    DeclNewMBox2_1CBFC4(_mbox2Boolean_Payload);
    MBox2_1CBFC4 mbox2Boolean_Payload = (MBox2_1CBFC4) &_mbox2Boolean_Payload;
    {
      DeclNewHAMR_Base_Types_Boolean_Payload(t_2);
      HAMR_Base_Types_Boolean_Payload_apply(SF &t_2, T);
      DeclNewMBox2_1CBFC4(t_1);
      MBox2_1CBFC4_apply(SF &t_1, Z_C(0), (art_DataContent) (&t_2));
      Type_assign(mbox2Boolean_Payload, (&t_1), sizeof(struct MBox2_1CBFC4));
    }

    sfUpdateLoc(142);
    DeclNewMBox2_1029D1(_mbox2OptionDataContent);
    MBox2_1029D1 mbox2OptionDataContent = (MBox2_1029D1) &_mbox2OptionDataContent;
    {
      DeclNewNone_964667(t_4);
      None_964667_apply(SF &t_4);
      DeclNewMBox2_1029D1(t_3);
      MBox2_1029D1_apply(SF &t_3, Z_C(0), (Option_8E9F45) (&t_4));
      Type_assign(mbox2OptionDataContent, (&t_3), sizeof(struct MBox2_1029D1));
    }

    sfUpdateLoc(147);
    {
      DeclNewIS_C4F575(t_6);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_6);
      DeclNewHAMR_Base_Types_Bits_Payload(t_5);
      HAMR_Base_Types_Bits_Payload_apply(SF &t_5, (IS_C4F575) ((IS_C4F575) &t_6));
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(148);
    {
      DeclNewart_Empty(t_7);
      art_Empty_apply(SF &t_7);
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(150);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_8);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_8, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(151);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_9);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_9, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(152);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_10);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_10, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_logError_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_10), (String) string(""));
    }

    sfUpdateLoc(153);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_11);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_11, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_11), (String) string(""));
    }

    sfUpdateLoc(154);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_12);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_12, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_12), (String) string(""));
    }

    sfUpdateLoc(155);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_13);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_13, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_logError_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_13), (String) string(""));
    }

    sfUpdateLoc(156);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_14);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_14, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_15);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_15);
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_MissionCommand_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_14), (IS_C4F575) ((IS_C4F575) &t_15));
    }

    sfUpdateLoc(157);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_16);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_16, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_MissionCommand_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(158);
    Option_30119F apiUsage_AttestationRequest;
    DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_18);
    Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_18, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_19);
    HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationRequest_(SF (Option_30119F) &t_19, ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_18));
    apiUsage_AttestationRequest = (Option_30119F) ((Option_30119F) &t_19);

    sfUpdateLoc(159);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_20);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_20, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_21);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_21);
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationResponse_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_20), (IS_C4F575) ((IS_C4F575) &t_21));
    }

    sfUpdateLoc(160);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_22);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_22, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_23);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_23);
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_AttestationResponse_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_22), (IS_C4F575) ((IS_C4F575) &t_23));
    }

    sfUpdateLoc(161);
    Option_30119F apiUsage_AttestationTesterResponse;
    DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_24);
    Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_24, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_25);
    HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_get_AttestationTesterResponse_(SF (Option_30119F) &t_25, ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_24));
    apiUsage_AttestationTesterResponse = (Option_30119F) ((Option_30119F) &t_25);

    sfUpdateLoc(162);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api(t_26);
      Option_4EC416_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_26, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_27);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_27);
      HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api_put_AttestationTesterRequest_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) &t_26), (IS_C4F575) ((IS_C4F575) &t_27));
    }

    sfUpdateLoc(163);
    {
      DeclNewHAMR_SW_RadioDriver_Attestation_Impl_Operational_Api(t_28);
      Option_87EF85_get_(SF (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_28, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_29);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_29);
      HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_put_AttestationTesterRequest_(SF ((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &t_28), (IS_C4F575) ((IS_C4F575) &t_29));
    }
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(168);
  {
    String_cprint(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_name_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(169);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(170);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(180);
  {
    String_cprint(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_name_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(181);
  {
    String_cprint(string(": "), T);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(182);
  {
    String_cprint(msg, T);
    cprintln(T);
    cflush(T);
  }

  #endif
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(174);
  {
    String_cprint(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_name_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(175);
  {
    String_cprint(string(": "), F);
  }

  #endif

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(176);
  {
    String_cprint(msg, F);
    cprintln(F);
    cflush(F);
  }

  #endif
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "putValue", 0);

  sfUpdateLoc(83);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(84);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(85);
    B t_2;
    {
      t_2 = Z__eq(portId, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_id(SF_LAST));
    }
    if (t_2) {

      sfUpdateLoc(86);
      {
        DeclNewSome_D29615(t_3);
        Some_D29615_apply(SF &t_3, (art_DataContent) data);
        HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port_a(SF (Option_8E9F45) (&t_3));
      }
    } else {

      sfUpdateLoc(87);
      B t_4;
      {
        t_4 = Z__eq(portId, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_id(SF_LAST));
      }
      if (t_4) {

        sfUpdateLoc(88);
        {
          DeclNewSome_D29615(t_5);
          Some_D29615_apply(SF &t_5, (art_DataContent) data);
          HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port_a(SF (Option_8E9F45) (&t_5));
        }
      } else {

        sfUpdateLoc(90);
        {
          DeclNewString(t_6);
          String t_7 = (String) &t_6;
          DeclNewString(t_8);
          String_string_(SF (String) &t_8, string("Unexpected: RadioDriver.putValue called with: "));
          Z_string_(SF (String) &t_8, portId);
          String_string_(SF (String) &t_8, string(""));
          String_string_(SF t_7, ((String) &t_8));
          sfAbort(t_7->value);
          abort();
        }
      }
    }
  }
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "getValue", 0);

  sfUpdateLoc(65);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(67);
    B t_1;
    {
      t_1 = Z__eq(portId, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_id(SF_LAST));
    }
    if (t_1) {
      Type_assign(result, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port(SF_LAST), sizeof(union Option_8E9F45));
      return;
    } else {

      sfUpdateLoc(70);
      {
        DeclNewString(t_2);
        String t_3 = (String) &t_2;
        DeclNewString(t_4);
        String_string_(SF (String) &t_4, string("Unexpected: RadioDriver.getValue called with: "));
        Z_string_(SF (String) &t_4, portId);
        String_string_(SF (String) &t_4, string(""));
        String_string_(SF t_3, ((String) &t_4));
        sfAbort(t_3->value);
        abort();
      }
    }
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "sendOutput", 0);

  sfUpdateLoc(97);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(98);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_seL4Nix_MissionCommand_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(99);
    {
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port_a(SF (Option_8E9F45) HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST));
    }
  }

  sfUpdateLoc(102);
  B t_3;
  {
    B t_4 = Option_8E9F45_nonEmpty_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port(SF_LAST));
    t_3 = t_4;
  }
  if (t_3) {

    sfUpdateLoc(103);
    {
      DeclNewart_DataContent(t_5);
      Option_8E9F45_get_(SF (art_DataContent) &t_5, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_seL4Nix_AttestationResponse_Send(SF (art_DataContent) ((art_DataContent) &t_5));
    }

    sfUpdateLoc(104);
    {
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port_a(SF (Option_8E9F45) HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST));
    }
  }

  sfUpdateLoc(107);
  B t_6;
  {
    B t_7 = Option_8E9F45_nonEmpty_(SF HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port(SF_LAST));
    t_6 = t_7;
  }
  if (t_6) {

    sfUpdateLoc(108);
    {
      DeclNewart_DataContent(t_8);
      Option_8E9F45_get_(SF (art_DataContent) &t_8, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port(SF_LAST));
      HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_seL4Nix_AttestationTesterRequest_Send(SF (art_DataContent) ((art_DataContent) &t_8));
    }

    sfUpdateLoc(109);
    {
      HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port_a(SF (Option_8E9F45) HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST));
    }
  }
}

Unit HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "RadioDriver.scala", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver", "receiveInput", 0);

  sfUpdateLoc(77);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_seL4Nix_AttestationRequest_Receive(SF (Option_8E9F45) &t_0);
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }

  sfUpdateLoc(79);
  {
    DeclNewOption_8E9F45(t_1);
    HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_seL4Nix_AttestationTesterResponse_Receive(SF (Option_8E9F45) &t_1);
    HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_1));
  }
}

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_RadioDriverBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D AttestationRequest;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationRequest"), art_PortMode_Type_EventIn);
    AttestationRequest = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(19);
    art_Port_45E54D AttestationResponse;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationResponse"), art_PortMode_Type_EventOut);
    AttestationResponse = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(20);
    art_Port_45E54D AttestationTesterResponse;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationTesterResponse"), art_PortMode_Type_EventIn);
    AttestationTesterResponse = (art_Port_45E54D) (&t_3);

    sfUpdateLoc(21);
    art_Port_45E54D AttestationTesterRequest;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(4), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver_AttestationTesterRequest"), art_PortMode_Type_EventOut);
    AttestationTesterRequest = (art_Port_45E54D) (&t_4);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_6);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_6, Z_C(500));
    DeclNewNone_5C1355(t_7);
    None_5C1355_apply(SF &t_7);
    DeclNewHAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge(t_5);
    HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_apply(SF &t_5, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_RadioDriver_RadioDriver"), (art_DispatchPropertyProtocol) (&t_6), (Option_9AF35E) (&t_7), (art_Port_45E54D) MissionCommand, (art_Port_45E54D) AttestationRequest, (art_Port_45E54D) AttestationResponse, (art_Port_45E54D) AttestationTesterResponse, (art_Port_45E54D) AttestationTesterRequest);
    Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge, (&t_5), sizeof(struct HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge));
  }
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(37);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_entryPoints, HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_entryPoints_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(38);
  DeclNewNone_964667(t_8);
  None_964667_apply(SF &t_8);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData, (&t_8), sizeof(struct None_964667));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_MissionCommand_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(41);
  _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_id = art_Port_45E54D_id_(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_MissionCommand_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_MissionCommand_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(42);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_MissionCommand_port, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationRequest_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(45);
  _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_id = art_Port_45E54D_id_(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_AttestationRequest_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationRequest_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(46);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationRequest_port, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationResponse_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(49);
  _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_id = art_Port_45E54D_id_(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_AttestationResponse_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationResponse_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(50);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationResponse_port, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterResponse_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(53);
  _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_id = art_Port_45E54D_id_(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_AttestationTesterResponse_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterResponse_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(54);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterResponse_port, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterRequest_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(57);
  _HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_id = art_Port_45E54D_id_(HAMR_SW_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_Bridge_AttestationTesterRequest_(HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_RadioDriverBridge(SF_LAST)));
};

void HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_init_AttestationTesterRequest_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(58);
  Type_assign(&_HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_AttestationTesterRequest_port, HAMR_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_RadioDriver_noData(SF_LAST), sizeof(union Option_8E9F45));
};