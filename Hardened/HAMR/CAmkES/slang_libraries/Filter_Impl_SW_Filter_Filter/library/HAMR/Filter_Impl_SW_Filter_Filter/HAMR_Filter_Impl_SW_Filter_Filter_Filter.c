#include <all.h>

B HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialized_ = F;

struct HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge _HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge;
union art_Bridge_EntryPoints _HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints;
union Option_8E9F45 _HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData;
Z _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id;
union Option_8E9F45 _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port;
Z _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id;
union Option_8E9F45 _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port;

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(STACK_FRAME_ONLY) {
  if (HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialized_) return;
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialized_ = T;
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "<init>", 0);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_FilterBridge(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_entryPoints(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_noData(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_id(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_port(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_id(SF_LAST);
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_port(SF_LAST);
}

HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return (HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge) &_HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge;
}

art_Bridge_EntryPoints HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return (art_Bridge_EntryPoints) &_HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints;
}

Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData;
}

Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id;
}

Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port;
}

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port_a(STACK_FRAME Option_8E9F45 p_Input_port) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port, p_Input_port, sizeof(union Option_8E9F45));
}

Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id;
}

Option_8E9F45 HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port(STACK_FRAME_ONLY) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  return (Option_8E9F45) &_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port;
}

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port_a(STACK_FRAME Option_8E9F45 p_Output_port) {
  HAMR_Filter_Impl_SW_Filter_Filter_Filter_init(CALLER_LAST);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port, p_Output_port, sizeof(union Option_8E9F45));
}

Z HAMR_Filter_Impl_SW_Filter_Filter_Filter_main(STACK_FRAME IS_948B60 args) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "main", 0);

  sfUpdateLoc(90);
  {
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseArchitecture(SF_LAST);
  }

  sfUpdateLoc(91);
  {
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(92);
  {
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_computeEntryPoint(SF_LAST);
  }

  sfUpdateLoc(93);
  {
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_finaliseEntryPoint(SF_LAST);
  }

  sfUpdateLoc(95);
  {
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch(SF_LAST);
  }
  return Z_C(0);
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "initialiseArchitecture", 0);
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "initialiseEntryPoint", 0);

  sfUpdateLoc(81);
  {
    art_Bridge_EntryPoints_initialise_(SF HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(SF_LAST));
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "computeEntryPoint", 0);

  sfUpdateLoc(83);
  {
    art_Bridge_EntryPoints_compute_(SF HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(SF_LAST));
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_finaliseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "finaliseEntryPoint", 0);

  sfUpdateLoc(85);
  {
    art_Bridge_EntryPoints_finalise_(SF HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(SF_LAST));
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch_printDataContent(STACK_FRAME art_DataContent a) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter.touch", "printDataContent", 0);

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

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "touch", 0);

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
      HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch_printDataContent(SF (art_DataContent) (&t_5));
    }

    sfUpdateLoc(112);
    {
      DeclNewart_Empty(t_7);
      art_Empty_apply(SF &t_7);
      HAMR_Filter_Impl_SW_Filter_Filter_Filter_touch_printDataContent(SF (art_DataContent) (&t_7));
    }

    sfUpdateLoc(114);
    {
      DeclNewHAMR_SW_Filter_Impl_Initialization_Api(t_8);
      Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &t_8, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Filter_Impl_Initialization_Api_logInfo_(SF ((HAMR_SW_Filter_Impl_Initialization_Api) &t_8), (String) string(""));
    }

    sfUpdateLoc(115);
    {
      DeclNewHAMR_SW_Filter_Impl_Initialization_Api(t_9);
      Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &t_9, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Filter_Impl_Initialization_Api_logDebug_(SF ((HAMR_SW_Filter_Impl_Initialization_Api) &t_9), (String) string(""));
    }

    sfUpdateLoc(116);
    {
      DeclNewHAMR_SW_Filter_Impl_Initialization_Api(t_10);
      Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &t_10, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));
      HAMR_SW_Filter_Impl_Initialization_Api_logError_(SF ((HAMR_SW_Filter_Impl_Initialization_Api) &t_10), (String) string(""));
    }

    sfUpdateLoc(117);
    {
      DeclNewHAMR_SW_Filter_Impl_Operational_Api(t_11);
      Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &t_11, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Filter_Impl_Operational_Api_logInfo_(SF ((HAMR_SW_Filter_Impl_Operational_Api) &t_11), (String) string(""));
    }

    sfUpdateLoc(118);
    {
      DeclNewHAMR_SW_Filter_Impl_Operational_Api(t_12);
      Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &t_12, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Filter_Impl_Operational_Api_logDebug_(SF ((HAMR_SW_Filter_Impl_Operational_Api) &t_12), (String) string(""));
    }

    sfUpdateLoc(119);
    {
      DeclNewHAMR_SW_Filter_Impl_Operational_Api(t_13);
      Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &t_13, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));
      HAMR_SW_Filter_Impl_Operational_Api_logError_(SF ((HAMR_SW_Filter_Impl_Operational_Api) &t_13), (String) string(""));
    }

    sfUpdateLoc(120);
    Option_30119F apiUsage_Input;
    DeclNewHAMR_SW_Filter_Impl_Operational_Api(t_14);
    Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &t_14, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));
    DeclNewOption_30119F(t_15);
    HAMR_SW_Filter_Impl_Operational_Api_get_Input_(SF (Option_30119F) &t_15, ((HAMR_SW_Filter_Impl_Operational_Api) &t_14));
    apiUsage_Input = (Option_30119F) ((Option_30119F) &t_15);

    sfUpdateLoc(121);
    {
      DeclNewHAMR_SW_Filter_Impl_Initialization_Api(t_16);
      Option_3ABCB9_get_(SF (HAMR_SW_Filter_Impl_Initialization_Api) &t_16, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_initialization_api(SF_LAST));
      DeclNewIS_C4F575(t_17);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_17);
      HAMR_SW_Filter_Impl_Initialization_Api_put_Output_(SF ((HAMR_SW_Filter_Impl_Initialization_Api) &t_16), (IS_C4F575) ((IS_C4F575) &t_17));
    }

    sfUpdateLoc(122);
    {
      DeclNewHAMR_SW_Filter_Impl_Operational_Api(t_18);
      Option_6DC5D7_get_(SF (HAMR_SW_Filter_Impl_Operational_Api) &t_18, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_c_operational_api(SF_LAST));
      DeclNewIS_C4F575(t_19);
      HAMR_Base_Types_Bits_example(SF (IS_C4F575) &t_19);
      HAMR_SW_Filter_Impl_Operational_Api_put_Output_(SF ((HAMR_SW_Filter_Impl_Operational_Api) &t_18), (IS_C4F575) ((IS_C4F575) &t_19));
    }
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logInfo(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "logInfo", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(127);
  {
    String_cprint(HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_name_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)), T);
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

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logDebug(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "logDebug", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(139);
  {
    String_cprint(HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_name_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)), T);
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

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_logError(STACK_FRAME String title, String msg) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "logError", 0);

  #ifndef SIREUM_NO_PRINT

  sfUpdateLoc(133);
  {
    String_cprint(HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_name_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)), F);
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

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "getValue", 0);

  sfUpdateLoc(47);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id(SF_LAST));
  }
  if (t_0) {
    Type_assign(result, HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port(SF_LAST), sizeof(union Option_8E9F45));
    return;
  } else {

    sfUpdateLoc(50);
    {
      DeclNewString(t_1);
      String t_2 = (String) &t_1;
      DeclNewString(t_3);
      String_string_(SF (String) &t_3, string("Unexpected: Filter.getValue called with: "));
      Z_string_(SF (String) &t_3, portId);
      String_string_(SF (String) &t_3, string(""));
      String_string_(SF t_2, ((String) &t_3));
      sfAbort(t_2->value);
      abort();
    }
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "putValue", 0);

  sfUpdateLoc(61);
  B t_0;
  {
    t_0 = Z__eq(portId, HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id(SF_LAST));
  }
  if (t_0) {

    sfUpdateLoc(62);
    {
      DeclNewSome_D29615(t_1);
      Some_D29615_apply(SF &t_1, (art_DataContent) data);
      HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port_a(SF (Option_8E9F45) (&t_1));
    }
  } else {

    sfUpdateLoc(64);
    {
      DeclNewString(t_2);
      String t_3 = (String) &t_2;
      DeclNewString(t_4);
      String_string_(SF (String) &t_4, string("Unexpected: Filter.putValue called with: "));
      Z_string_(SF (String) &t_4, portId);
      String_string_(SF (String) &t_4, string(""));
      String_string_(SF t_3, ((String) &t_4));
      sfAbort(t_3->value);
      abort();
    }
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "sendOutput", 0);

  sfUpdateLoc(71);
  B t_0;
  {
    B t_1 = Option_8E9F45_nonEmpty_(SF HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port(SF_LAST));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(72);
    {
      DeclNewart_DataContent(t_2);
      Option_8E9F45_get_(SF (art_DataContent) &t_2, HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port(SF_LAST));
      HAMR_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Output_Send(SF (art_DataContent) ((art_DataContent) &t_2));
    }

    sfUpdateLoc(73);
    {
      HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port_a(SF (Option_8E9F45) HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData(SF_LAST));
    }
  }
}

Unit HAMR_Filter_Impl_SW_Filter_Filter_Filter_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Filter.scala", "HAMR.Filter_Impl_SW_Filter_Filter.Filter", "receiveInput", 0);

  sfUpdateLoc(57);
  {
    DeclNewOption_8E9F45(t_0);
    HAMR_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Input_Receive(SF (Option_8E9F45) &t_0);
    HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port_a(SF (Option_8E9F45) ((Option_8E9F45) &t_0));
  }
}

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_FilterBridge(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  {

    sfUpdateLoc(17);
    art_Port_45E54D Input;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Filter_Filter_Input"), art_PortMode_Type_EventIn);
    Input = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(18);
    art_Port_45E54D Output;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("MissionComputer_Impl_Instance_SW_Filter_Filter_Output"), art_PortMode_Type_EventOut);
    Output = (art_Port_45E54D) (&t_1);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_3);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_3, Z_C(500));
    DeclNewNone_5C1355(t_4);
    None_5C1355_apply(SF &t_4);
    DeclNewHAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge(t_2);
    HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_apply(SF &t_2, Z_C(0), (String) string("MissionComputer_Impl_Instance_SW_Filter_Filter"), (art_DispatchPropertyProtocol) (&t_3), (Option_9AF35E) (&t_4), (art_Port_45E54D) Input, (art_Port_45E54D) Output);
    Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge, (&t_2), sizeof(struct HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge));
  }
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_entryPoints(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(31);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints, HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_entryPoints_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)), sizeof(union art_Bridge_EntryPoints));
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_noData(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(32);
  DeclNewNone_964667(t_5);
  None_964667_apply(SF &t_5);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData, (&t_5), sizeof(struct None_964667));
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(35);
  _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_id = art_Port_45E54D_id_(HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_Input_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)));
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Input_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(36);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Input_port, HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData(SF_LAST), sizeof(union Option_8E9F45));
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_id(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(39);
  _HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_id = art_Port_45E54D_id_(HAMR_SW_Filter_Impl_SW_Filter_Filter_Bridge_Output_(HAMR_Filter_Impl_SW_Filter_Filter_Filter_FilterBridge(SF_LAST)));
};

void HAMR_Filter_Impl_SW_Filter_Filter_Filter_init_Output_port(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(40);
  Type_assign(&_HAMR_Filter_Impl_SW_Filter_Filter_Filter_Output_port, HAMR_Filter_Impl_SW_Filter_Filter_Filter_noData(SF_LAST), sizeof(union Option_8E9F45));
};