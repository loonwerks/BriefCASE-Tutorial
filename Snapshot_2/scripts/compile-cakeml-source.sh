#! /bin/bash

PROJECT_DIR=$1
if [ -z "$PROJECT_DIR" ]
then
      PROJECT_DIR=..
fi
# Compile Attestation Manager
echo Compiling the Attestation Manager
pushd ${PROJECT_DIR}/Component_Source/KU_Attestation/build; cmake .. && make heli_am; popd

# Compile SPLAT components
echo Compiling SPLAT components
pushd ${PROJECT_DIR}/Component_Source/SW_AttestationGate; ./make.sh SW_AttestationGate; popd
mv ${PROJECT_DIR}/Component_Source/SW_AttestationGate/SW_AttestationGate.S ${PROJECT_DIR}/Component_Source/SW_AttestationGate/AttestationGate.S

pushd ${PROJECT_DIR}/Component_Source/SW_Filter; ./make.sh SW_Filter; popd
mv ${PROJECT_DIR}/Component_Source/SW_Filter/SW_Filter.S ${PROJECT_DIR}/Component_Source/SW_Filter/Filter.S

pushd ${PROJECT_DIR}/Component_Source/SW_Monitor; ./make.sh SW_Monitor; popd
mv ${PROJECT_DIR}/Component_Source/SW_Monitor/SW_Monitor.S ${PROJECT_DIR}/Component_Source/SW_Monitor/Monitor.S

echo ----------------------------------------
echo -- compile-cakeml-source.sh completed --
echo ----------------------------------------
