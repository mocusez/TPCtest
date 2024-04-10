cmake_minimum_required(VERSION 3.10)  # 设置CMake的最低版本要求
project(MyProject)                    # 定义项目名称

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 添加可执行文件
add_executable(myProgram main.cpp Table.cpp Structs.cpp)
