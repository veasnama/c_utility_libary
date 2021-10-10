set(LIB_NAME "B_CON")
set(SOURCES  src/byte_converter.h src/byte_converter.c)
add_library(${LIB_NAME} ${SOURCES})
target_include_directories(${LIB_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR/src}")