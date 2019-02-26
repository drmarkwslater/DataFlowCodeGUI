# - Declare the build of the static DataFlowCodeGUI library
add_library(DataFlowCodeGUI STATIC
  DataFlowCodeGUI.cpp
  DataFlowCodeGUI.hpp
  ConsoleOutputWindow.hpp
  ConsoleOutputWindow.cpp
  olcPixelGameEngine.h
  )

target_include_directories(DataFlowCodeGUI
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}
  )

## - Add the lib directory to the build
target_include_directories(DataFlowCodeGUI
  PRIVATE lib /opt/X11/include
)

target_compile_features(DataFlowCodeGUI
  PUBLIC cxx_auto_type cxx_range_for cxx_uniform_initialization
  )

add_compile_definitions(OLC_PGE_APPLICATION)
