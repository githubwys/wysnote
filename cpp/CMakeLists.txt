# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project( pointer )

# 设置编译模式
set( CMAKE_BUILD_TYPE "Debug" )
#set(CMAKE_CXX_FLAGS   "-std=c++11")

find_package(OpenCV  REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
# 添加一个可执行程序
# 语法：add_executable( 程序名 源代码文件 ）
add_executable( pointer pointer.cpp )
add_executable( test test.cpp )
add_executable(checkvector checkvector.cpp)

target_link_libraries(test ${OpenCV_LIBS})
