#! /bin/bash
#

PROJECT_DIR=$1
if [ -z "$PROJECT_DIR" ]
then
      PROJECT_DIR=..
fi
# Build in CAmkES
rm -rf ~/CASE/camkes/build_CAmkES/* && ${PROJECT_DIR}/HAMR/CAmkES/bin/run-camkes.sh -o "-DPLATFORM=x86_64 -DSIMULATION=TRUE -DCAKEML_ASSEMBLIES_PRESENT=ON -DCAKEML_DUMP_BUFFERS=ON" -n -s

