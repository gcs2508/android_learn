# CMake 最低版本号
cmake_minimum_required(VERSION 2.8)

project(jni_hello)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -pedantic")

#target_link_libraries(jni_hello -llog)
add_library(jni_hello SHARED JniTest.c)
target_link_libraries(jni_hello -llog)



