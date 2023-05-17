# CMakeList.txt : CMake project for virtual_function, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (virtual_function "virtual_function.cpp" "virtual_function.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET virtual_function PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
