#include <all.h>

// HAMR.SW.Monitor_Impl_Operational_Api

B HAMR_SW_Monitor_Impl_Operational_Api__eq(HAMR_SW_Monitor_Impl_Operational_Api this, HAMR_SW_Monitor_Impl_Operational_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->Observed_Id, other->Observed_Id)) return F;
  if (Z__ne(this->Output_Id, other->Output_Id)) return F;
  if (Z__ne(this->Alert_Id, other->Alert_Id)) return F;
  return T;
}

B HAMR_SW_Monitor_Impl_Operational_Api__ne(HAMR_SW_Monitor_Impl_Operational_Api this, HAMR_SW_Monitor_Impl_Operational_Api other);

void HAMR_SW_Monitor_Impl_Operational_Api_string_(STACK_FRAME String result, HAMR_SW_Monitor_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Operational_Api", "string", 0);
  String_string_(SF result, string("Monitor_Impl_Operational_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Observed_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Output_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->Alert_Id);
  String_string_(SF result, string(")"));
}

void HAMR_SW_Monitor_Impl_Operational_Api_cprint(HAMR_SW_Monitor_Impl_Operational_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Monitor_Impl_Operational_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Observed_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Output_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->Alert_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_SW_Monitor_Impl_Operational_Api__is(STACK_FRAME void* this);
HAMR_SW_Monitor_Impl_Operational_Api HAMR_SW_Monitor_Impl_Operational_Api__as(STACK_FRAME void *this);

void HAMR_SW_Monitor_Impl_Operational_Api_apply(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api this, Z id, Z Observed_Id, Z Output_Id, Z Alert_Id) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Operational_Api", "apply", 0);
  this->id = id;
  this->Observed_Id = Observed_Id;
  this->Output_Id = Output_Id;
  this->Alert_Id = Alert_Id;
}

inline B HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_50_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_Monitor_Impl_Operational_Api this, IS_C4F575 *_v_50_41) {
  if (!Some_D29615__is(SF t_0)) return F;
  if (!HAMR_Base_Types_Bits_Payload__is(SF Some_D29615_value_(Some_D29615__as(SF t_0)))) return F;
  *_v_50_41 = (IS_C4F575) HAMR_Base_Types_Bits_Payload_value_(HAMR_Base_Types_Bits_Payload__as(SF Some_D29615_value_(Some_D29615__as(SF t_0))));
  return T;
}

inline B HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_51_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_Monitor_Impl_Operational_Api this, art_DataContent *_v_51_17) {
  if (!Some_D29615__is(SF t_0)) return F;
  *_v_51_17 = (art_DataContent) Some_D29615_value_(Some_D29615__as(SF t_0));
  return T;
}

inline B HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_54_12_8E9F45(STACK_FRAME_SF Option_8E9F45 t_0, HAMR_SW_Monitor_Impl_Operational_Api this) {
  return T;
}

void HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_(STACK_FRAME Option_30119F result, HAMR_SW_Monitor_Impl_Operational_Api this) {
  DeclNewStackFrame(caller, "Monitor_Impl_Api.scala", "HAMR.SW.Monitor_Impl_Operational_Api", "get_Observed", 0);

  sfUpdateLoc(49);
  Option_30119F value;
  DeclNewOption_8E9F45(t_1);
  art_Art_getValue(SF (Option_8E9F45) &t_1, HAMR_SW_Monitor_Impl_Operational_Api_Observed_Id_(this));
  Option_8E9F45 t_0 = ((Option_8E9F45) &t_1);
  B match_49_47 = F;
  if (!match_49_47) {
    IS_C4F575 v_50_41;
    match_49_47 = HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_50_12_8E9F45(SF t_0, this, &v_50_41);
    if (match_49_47) {
      DeclNewSome_8D03B1(t_2);
      Some_8D03B1_apply(SF &t_2, (IS_C4F575) v_50_41);
      value = (Option_30119F) (&t_2);
    }
  }
  if (!match_49_47) {
    art_DataContent v_51_17;
    match_49_47 = HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_51_12_8E9F45(SF t_0, this, &v_51_17);
    if (match_49_47) {

      sfUpdateLoc(52);
      {
        DeclNewString(t_3);
        String_string_(SF (String) &t_3, string("Unexpected payload on port Observed.  Expecting 'Base_Types.Bits_Payload' but received "));
        art_DataContent_string_(SF (String) &t_3, v_51_17);
        String_string_(SF (String) &t_3, string(""));
        art_Art_logError(SF HAMR_SW_Monitor_Impl_Operational_Api_id_(this), (String) ((String) &t_3));
      }
      DeclNewNone_3026C5(t_4);
      None_3026C5_apply(SF &t_4);
      value = (Option_30119F) (&t_4);
    }
  }
  if (!match_49_47) {
    match_49_47 = HAMR_SW_Monitor_Impl_Operational_Api_get_Observed_extract_54_12_8E9F45(SF t_0, this);
    if (match_49_47) {
      DeclNewNone_3026C5(t_5);
      None_3026C5_apply(SF &t_5);
      value = (Option_30119F) (&t_5);
    }
  }
  sfAssert(match_49_47, "Error when pattern matching.");
  Type_assign(result, value, sizeof(union Option_30119F));
  return;
}