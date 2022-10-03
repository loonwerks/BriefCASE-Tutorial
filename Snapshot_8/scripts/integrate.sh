#! /bin/bash
#

PROJECT_DIR=$1
if [ -z "$PROJECT_DIR" ]
then
      PROJECT_DIR=..
fi

# Run the transpiler
echo Running the transpiler...
pushd ${PROJECT_DIR}/HAMR/bin; ./transpile-sel4.cmd; popd

# Apply patches to CMakeLists.txt, and component basis files;
echo Patching...
pushd ${PROJECT_DIR}/HAMR; patch -p0 < ../scripts/integrate.patch; popd

echo Copying component implementations to HAMR build directory
# Insert attestation manager library
cp -f ${PROJECT_DIR}/Component_Source/KU_Attestation/build/apps/case-tool-assessment/libheli_am_c.a \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationManager_Impl_SW_AttestationManager_AttestationManager/src

# Insert attestation tester library
cp -f ${PROJECT_DIR}/Component_Source/KU_Attestation/build/apps/case-tool-assessment/libheli_am_c.a \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationTester_Impl_SW_AttestationTester_AttestationTester/src

# Add basis_ffi to Filter
cp -f ${PROJECT_DIR}/Component_Source/SW_Filter/basis_ffi.c \
      ${PROJECT_DIR}/HAMR/CAmkES/components/Filter_Impl_SW_Filter_Filter/src/

# Add basis_ffi to AttestationGate
cp -f ${PROJECT_DIR}/Component_Source/SW_AttestationGate/basis_ffi.c \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationGate_Impl_SW_AttestationGate_AttestationGate/src/

# Add basis_ffi to Monitor
cp -f ${PROJECT_DIR}/Component_Source/SW_Monitor/basis_ffi.c \
      ${PROJECT_DIR}/HAMR/CAmkES/components/Monitor_Impl_SW_Monitor_Monitor/src/

# Common C implementation
cp -f ${PROJECT_DIR}/Component_Source/ext/ext.h \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/ext.h
cp -f ${PROJECT_DIR}/Component_Source/ext/ext.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/ext.c

# Insert attestation tester implementation
cp -f ${PROJECT_DIR}/Component_Source/SW_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester.c

cp -f ${PROJECT_DIR}/Component_Source/SW_AttestationTester/Pass/user_am.S \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationTester_Impl_SW_AttestationTester_AttestationTester/src/user_am.S

# Insert radio driver attestation implementation
cp -f ${PROJECT_DIR}/Component_Source/SW_RadioDriver_Attestation/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.c

# Insert attestation manager implementation
cp -f ${PROJECT_DIR}/Component_Source/ext/AttestationManager_Impl_SW_AttestationManager_AttestationManager.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager.c

cp -f ${PROJECT_DIR}/Component_Source/KU_Attestation/build/heli_am.S \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationManager_Impl_SW_AttestationManager_AttestationManager/src/heli_am.S

# Insert attestation gate implementation
cp -f ${PROJECT_DIR}/Component_Source/ext/AttestationGate_Impl_SW_AttestationGate_AttestationGate.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate.c

cp -f ${PROJECT_DIR}/Component_Source/SW_AttestationGate/AttestationGate.S \
      ${PROJECT_DIR}/HAMR/CAmkES/components/AttestationGate_Impl_SW_AttestationGate_AttestationGate/src/AttestationGate.S

# Insert filter implementation
cp -f ${PROJECT_DIR}/Component_Source/ext/Filter_Impl_SW_Filter_Filter.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter.c

cp -f ${PROJECT_DIR}/Component_Source/SW_Filter/Filter.S \
      ${PROJECT_DIR}/HAMR/CAmkES/components/Filter_Impl_SW_Filter_Filter/src/Filter.S

# Insert flight planner implementation
cp -f ${PROJECT_DIR}/Component_Source/SW_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c

# Insert monitor implementation
cp -f ${PROJECT_DIR}/Component_Source/ext/Monitor_Impl_SW_Monitor_Monitor.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor.c

cp -f ${PROJECT_DIR}/Component_Source/SW_Monitor/Monitor.S \
      ${PROJECT_DIR}/HAMR/CAmkES/components/Monitor_Impl_SW_Monitor_Monitor/src/Monitor.S

# Insert flight controller implementation
cp -f ${PROJECT_DIR}/Component_Source/SW_FlightController/FlightController_Impl_SW_FlightController_FlightController.c \
      ${PROJECT_DIR}/HAMR/src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController.c

# Build in CAmkES
echo Build in CAmkES
rm -rf ~/CASE/camkes/build_CAmkES/* && ${PROJECT_DIR}/HAMR/CAmkES/bin/run-camkes.sh -o "-DPLATFORM=x86_64 -DSIMULATION=TRUE -DCAKEML_ASSEMBLIES_PRESENT=ON" -n

echo ----------------------------
echo -- integrate.sh completed --
echo ----------------------------
