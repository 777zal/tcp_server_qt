# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/socket_tcp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/socket_tcp_autogen.dir/ParseCache.txt"
  "socket_tcp_autogen"
  )
endif()
