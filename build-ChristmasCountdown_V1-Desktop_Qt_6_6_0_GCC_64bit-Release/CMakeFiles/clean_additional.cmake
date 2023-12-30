# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/ChristmasCountdown_V1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ChristmasCountdown_V1_autogen.dir/ParseCache.txt"
  "ChristmasCountdown_V1_autogen"
  )
endif()
