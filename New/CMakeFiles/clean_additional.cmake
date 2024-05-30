# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2_autogen.dir\\ParseCache.txt"
  "Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2_autogen"
  )
endif()
