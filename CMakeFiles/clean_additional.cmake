# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/sominnn-examples_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/sominnn-examples_autogen.dir/ParseCache.txt"
  "sominnn-examples_autogen"
  )
endif()
