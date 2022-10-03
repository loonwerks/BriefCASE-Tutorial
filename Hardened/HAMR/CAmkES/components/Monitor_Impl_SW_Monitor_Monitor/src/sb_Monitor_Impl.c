// This file will be regenerated, do not edit

#include <sb_Monitor_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <Monitor_Impl_SW_Monitor_Monitor_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_Observed_recv_queue;

/************************************************************************
 * sb_Observed_dequeue_poll:
 ************************************************************************/
bool sb_Observed_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_Observed_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_Observed_dequeue:
 ************************************************************************/
bool sb_Observed_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_Observed_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_Observed_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_Observed_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_Observed_recv_queue);
}

bool sb_Output_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_Output_queue_1, (union_art_DataContent*) data);
  sb_Output_1_notification_emit();

  return true;
}

/************************************************************************
 * sb_Alert_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_Alert_enqueue(void) {
  // sb_Alert_counter is a dataport (shared memory) that is written by the sender
  // and read by the receiver(s). This counter is monotonicly increasing,
  // but can wrap.
  (*sb_Alert_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_Alert_counter_release();

  sb_Alert_emit();

  return true;
}


// send Output: Out EventDataPort Data_Types__Mission
Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Output_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_Monitor_Impl.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Output_Send", 0);

  sb_Output_enqueue(d);
}

// send Alert: Out EventPort
Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Alert_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_Monitor_Impl.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Alert_Send", 0);

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_Alert_enqueue();
}

// is_empty Observed: In EventDataPort
B HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Observed_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Observed_is_empty();
}

// receive Observed: In EventDataPort union_art_DataContent
Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Observed_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_Monitor_Impl.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_seL4Nix_Observed_Receive", 0);

  union_art_DataContent val;
  if(sb_Observed_dequeue((union_art_DataContent *) &val)) {
    // wrap payload in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &val);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
}


void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_Monitor_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of Monitor_Impl_SW_Monitor_Monitor\n");

  // initialise data structure for incoming event data port Observed
  sb_queue_union_art_DataContent_1_Recv_init(&sb_Observed_recv_queue, sb_Observed_queue);

  // initialise data structure for outgoing event data port Output
  sb_queue_union_art_DataContent_1_init(sb_Output_queue_1);

  // initialise shared counter for event port Alert
  *sb_Alert_counter = 0;

  // initialise slang-embedded components/ports
  HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of Monitor_Impl_SW_Monitor_Monitor\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_Monitor_Impl.c", "", "run", 0);


  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
#endif
