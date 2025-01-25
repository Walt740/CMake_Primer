cmake_minimum_required (VERSION 3.10)
#工程命名
project (CALCLIB)
#指定C++标准
set(CMAKE_CXX_STANDARD 11)
#指定头文件目录
include_directories(${INC_PATH})
#指定库文件生成路径
set(LIBRARY_OUTPUT_PATH ${LIB_PATH})
#指定源文件目录
file(GLOB SRC_LIST ./*.cpp)
#aux_source_directory(./ SRC_LIST)
#生成静态库
#add_library(calc STATIC ${SRC_LIST})
#生成动态库
add_library(calc SHARED ${SRC_LIST})