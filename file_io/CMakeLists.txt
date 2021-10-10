set(LIB_FILE_NAME "FileIO")
add_library(${LIB_FILE_NAME} src/filesize.h src/filesize.c)
target_include_directories(${LIB_FILE_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR/src}")