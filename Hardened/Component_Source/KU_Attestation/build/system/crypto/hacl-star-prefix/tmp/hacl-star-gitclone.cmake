
if(NOT "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitinfo.txt" IS_NEWER_THAN "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone --no-checkout --progress "https://github.com/project-everest/hacl-star/" "hacl-star"
    WORKING_DIRECTORY "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/project-everest/hacl-star/'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout 50db8e4147258a5dc8e18c940c1b045ce5558723 --
  WORKING_DIRECTORY "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '50db8e4147258a5dc8e18c940c1b045ce5558723'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git"  submodule update --recursive --init 
    WORKING_DIRECTORY "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star"
    RESULT_VARIABLE error_code
    )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitinfo.txt"
    "/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/vagrant/workspace/Shapshot_9/Component_Source/KU_Attestation/build/system/crypto/hacl-star-prefix/src/hacl-star-stamp/hacl-star-gitclone-lastrun.txt'")
endif()

