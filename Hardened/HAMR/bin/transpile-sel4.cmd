::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

val RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver",
  "--name", "RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver",
  "--apps", "HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=5;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=5",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.cmake",
  "--forward", "art.ArtNative=HAMR.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.RadioDriver",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver/RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner",
  "--name", "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner",
  "--apps", "HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.cmake",
  "--forward", "art.ArtNative=HAMR.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.FlightPlanner",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner/FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val FlightController_Impl_SW_FlightController_FlightController: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/FlightController_Impl_SW_FlightController_FlightController",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/FlightController_Impl_SW_FlightController_FlightController",
  "--name", "FlightController_Impl_SW_FlightController_FlightController",
  "--apps", "HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_FlightController_Impl_SW_FlightController_FlightController.cmake",
  "--forward", "art.ArtNative=HAMR.FlightController_Impl_SW_FlightController_FlightController.FlightController",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/FlightController_Impl_SW_FlightController_FlightController/FlightController_Impl_SW_FlightController_FlightController_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val AttestationManager_Impl_SW_AttestationManager_AttestationManager: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/AttestationManager_Impl_SW_AttestationManager_AttestationManager",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/AttestationManager_Impl_SW_AttestationManager_AttestationManager",
  "--name", "AttestationManager_Impl_SW_AttestationManager_AttestationManager",
  "--apps", "HAMR.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=3;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=3",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_AttestationManager_Impl_SW_AttestationManager_AttestationManager.cmake",
  "--forward", "art.ArtNative=HAMR.AttestationManager_Impl_SW_AttestationManager_AttestationManager.AttestationManager",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationManager_Impl_SW_AttestationManager_AttestationManager/AttestationManager_Impl_SW_AttestationManager_AttestationManager_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val AttestationGate_Impl_SW_AttestationGate_AttestationGate: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/AttestationGate_Impl_SW_AttestationGate_AttestationGate",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/AttestationGate_Impl_SW_AttestationGate_AttestationGate",
  "--name", "AttestationGate_Impl_SW_AttestationGate_AttestationGate",
  "--apps", "HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=3;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=3",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_AttestationGate_Impl_SW_AttestationGate_AttestationGate.cmake",
  "--forward", "art.ArtNative=HAMR.AttestationGate_Impl_SW_AttestationGate_AttestationGate.AttestationGate",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationGate_Impl_SW_AttestationGate_AttestationGate/AttestationGate_Impl_SW_AttestationGate_AttestationGate_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val Filter_Impl_SW_Filter_Filter: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/Filter_Impl_SW_Filter_Filter",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/Filter_Impl_SW_Filter_Filter",
  "--name", "Filter_Impl_SW_Filter_Filter",
  "--apps", "HAMR.Filter_Impl_SW_Filter_Filter.Filter",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Filter_Impl_SW_Filter_Filter.cmake",
  "--forward", "art.ArtNative=HAMR.Filter_Impl_SW_Filter_Filter.Filter",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/Filter_Impl_SW_Filter_Filter/Filter_Impl_SW_Filter_Filter_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val Monitor_Impl_SW_Monitor_Monitor: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/Monitor_Impl_SW_Monitor_Monitor",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/Monitor_Impl_SW_Monitor_Monitor",
  "--name", "Monitor_Impl_SW_Monitor_Monitor",
  "--apps", "HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=3;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=3",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_Monitor_Impl_SW_Monitor_Monitor.cmake",
  "--forward", "art.ArtNative=HAMR.Monitor_Impl_SW_Monitor_Monitor.Monitor",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/Monitor_Impl_SW_Monitor_Monitor/Monitor_Impl_SW_Monitor_Monitor_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val AttestationTester_Impl_SW_AttestationTester_AttestationTester: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--name", "AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--apps", "HAMR.AttestationTester_Impl_SW_AttestationTester_AttestationTester.AttestationTester",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=16384",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_AttestationTester_Impl_SW_AttestationTester_AttestationTester.cmake",
  "--forward", "art.ArtNative=HAMR.AttestationTester_Impl_SW_AttestationTester_AttestationTester.AttestationTester",
  "--stack-size", "1048576",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/AttestationTester_Impl_SW_AttestationTester_AttestationTester/AttestationTester_Impl_SW_AttestationTester_AttestationTester_adapter.c",
  "--exclude-build", "HAMR.SW.RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,HAMR.SW.FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,HAMR.SW.FlightController_Impl_SW_FlightController_FlightController,HAMR.SW.AttestationManager_Impl_SW_AttestationManager_AttestationManager,HAMR.SW.AttestationGate_Impl_SW_AttestationGate_AttestationGate,HAMR.SW.Filter_Impl_SW_Filter_Filter,HAMR.SW.Monitor_Impl_SW_Monitor_Monitor,HAMR.SW.AttestationTester_Impl_SW_AttestationTester_AttestationTester",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/HAMR/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../CAmkES/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "HAMR.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "64",
  "--string-size", "256",
  "--sequence-size", "1",
  "--sequence", s"IS[Z,B]=16384",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=HAMR.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver,
  FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner,
  FlightController_Impl_SW_FlightController_FlightController,
  AttestationManager_Impl_SW_AttestationManager_AttestationManager,
  AttestationGate_Impl_SW_AttestationGate_AttestationGate,
  Filter_Impl_SW_Filter_Filter,
  Monitor_Impl_SW_Monitor_Monitor,
  AttestationTester_Impl_SW_AttestationTester_AttestationTester,
  SlangTypeLibrary
)

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

for(p <- projects) {
  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
}

//ops.ISZOps(projects).parMap(p =>
//  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
//)
