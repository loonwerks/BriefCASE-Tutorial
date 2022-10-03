#ifndef SIREUM_TYPE_H_org_sireum_Option_A0CA6B
#define SIREUM_TYPE_H_org_sireum_Option_A0CA6B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

#include <type-org_sireum_None_BA6ABF.h>
#include <type-org_sireum_Some_9C7E56.h>

typedef union Option_A0CA6B *Option_A0CA6B;
union Option_A0CA6B {
  TYPE type;
  struct None_BA6ABF None_BA6ABF;
  struct Some_9C7E56 Some_9C7E56;
};

#define DeclNewOption_A0CA6B(x) union Option_A0CA6B x = { 0 }

#ifdef __cplusplus
}
#endif

#endif