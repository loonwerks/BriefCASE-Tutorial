add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(RadioDriver_Attestation_Impl_SW_RadioDriver_RadioDriver
                        muslc)
endif()