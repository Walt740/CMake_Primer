cmake_minimum_required(VERSION 3.10) # 设置CMake的最低版本要求
project(test) # 定义项目名称
set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # 导出编译命令到compile_commands.json

# 定义变量
set(LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib) # 设置静态库生成的路径
set(EXEC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin) # 设置测试程序生成的路径
set(INC_PATH ${CMAKE_CURRENT_SOURCE_DIR}/include) # 设置头文件目录

# 添加子目录
add_subdirectory(calc) # 添加calc子目录
add_subdirectory(sort) # 添加sort子目录
add_subdirectory(test1) # 添加test1子目录
add_subdirectory(test2) # 添加test2子目录