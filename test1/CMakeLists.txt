cmake_minimum_required (VERSION 3.10) # 设置CMake的最低版本要求
project (TEST1) # 定义项目名称

set(CMAKE_CXX_STANDARD 11) # 设置C++标准为C++11

include_directories(${INC_PATH}) # 包含头文件目录

file(GLOB SRC_LIST ./*.cpp) # 查找当前目录下的所有.cpp文件

#aux_source_directory(./ SRC_LIST) # 另一种添加源文件的方法，暂时注释掉

link_directories(${LIB_PATH}) # 链接静态库目录

add_executable(test1 ${SRC_LIST}) # 添加可执行文件test1

target_link_libraries(test1 calc) # 链接calc库

add_definitions(-DDEBUG) # 添加DEBUG宏定义

set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH}) # 设置可执行文件的输出路径