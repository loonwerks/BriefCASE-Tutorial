#include <all.h>

B art_Art_initialized_ = F;

Z _art_Art_maxComponents;
struct MS_83D5EB _art_Art_bridges;

void art_Art_init(STACK_FRAME_ONLY) {
  if (art_Art_initialized_) return;
  art_Art_initialized_ = T;
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "<init>", 0);
  art_Art_init_maxComponents(SF_LAST);
  art_Art_init_bridges(SF_LAST);
}

Z art_Art_maxComponents(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return _art_Art_maxComponents;
}

MS_83D5EB art_Art_bridges(STACK_FRAME_ONLY) {
  art_Art_init(CALLER_LAST);
  return (MS_83D5EB) &_art_Art_bridges;
}

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logInfo", 0);

  sfUpdateLoc(78);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(79);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logInfo(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(81);
    {
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logInfo(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logDebug(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logDebug", 0);

  sfUpdateLoc(94);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(95);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logDebug(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(97);
    {
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logDebug(SF (String) string(""), (String) msg);
    }
  }
}

Unit art_Art_logError(STACK_FRAME Z bridgeId, String msg) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "logError", 0);

  sfUpdateLoc(86);
  B t_0;
  {
    B t_1 = Option_7BBFBE_nonEmpty_(SF MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
    t_0 = t_1;
  }
  if (t_0) {

    sfUpdateLoc(87);
    {
      DeclNewart_Bridge(t_2);
      Option_7BBFBE_get_(SF (art_Bridge) &t_2, MS_83D5EB_at(art_Art_bridges(SF_LAST), bridgeId));
      DeclNewString(t_3);
      art_Bridge_name_(SF (String) &t_3, ((art_Bridge) &t_2));
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logError(SF (String) ((String) &t_3), (String) msg);
    }
  } else {

    sfUpdateLoc(89);
    {
      HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_logError(SF (String) string(""), (String) msg);
    }
  }
}

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, Z portId) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "getValue", 0);
  DeclNewOption_8E9F45(t_0);
  HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_getValue(SF (Option_8E9F45) &t_0, portId);
  Type_assign(result, ((Option_8E9F45) &t_0), sizeof(union Option_8E9F45));
  return;
}

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "putValue", 0);

  sfUpdateLoc(62);
  {
    HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_putValue(SF portId, (art_DataContent) data);
  }
}

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "sendOutput", 0);

  sfUpdateLoc(70);
  {
    HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_sendOutput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds) {
  DeclNewStackFrame(caller, "Art.scala", "art.Art", "receiveInput", 0);

  sfUpdateLoc(58);
  {
    HAMR_AttestationTester_Impl_SW_AttestationTester_AttestationTester_AttestationTester_receiveInput(SF (IS_82ABD8) eventPortIds, (IS_82ABD8) dataPortIds);
  }
}

void art_Art_init_maxComponents(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _art_Art_maxComponents = Z_C(1);
};

void art_Art_init_bridges(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  DeclNewNone_734370(t_0);
  None_734370_apply(SF &t_0);
  DeclNewMS_83D5EB(t_1);
  MS_83D5EB_create(SF (MS_83D5EB) &t_1, art_Art_maxComponents(SF_LAST), (Option_7BBFBE) (&t_0));
  Type_assign(&_art_Art_bridges, ((MS_83D5EB) &t_1), sizeof(struct MS_83D5EB));
};