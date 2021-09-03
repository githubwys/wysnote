# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project( wystest )

# 设置编译模式
set( CMAKE_BUILD_TYPE "Debug" )
#set(CMAKE_CXX_FLAGS   "-std=c++11")

set(OpenCV_DIR "/home/tonglu/pkg/opencv3.2/opencv-3.2.0/install/share/OpenCV")
find_package(OpenCV 3 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})


# 编译库
include_directories(include)
add_library(matchtemplate SHARED src/matchtemplate.cpp)

include_directories(include)
add_library(test SHARED src/test.cpp)

# 添加一个可执行程序
# 语法：add_executable( 程序名 源代码文件 ）
add_executable( pointer src/pointer.cpp )
#add_executable( test src/test.cpp )
#add_executable(checkvector checkvector.cpp)
target_link_libraries(test ${OpenCV_LIBS})

add_executable( main src/main.cpp )
target_link_libraries(main matchtemplate ${OpenCV_LIBS})

add_executable( main2 src/main2.cpp )
target_link_libraries(main2 test)

add_executable( testptr src/testptr.cpp)

add_executable( testformat src/testformat.cpp )

add_executable( testqueue src/testqueue.cpp )

add_executable( testinit src/testinit.cpp )
target_link_libraries(testinit  ${OpenCV_LIBS})

add_executable( testopencv src/testopencv.cpp )
target_link_libraries(testopencv  ${OpenCV_LIBS})

add_executable( testjson src/testjson.cpp )
target_link_libraries(testjson ${OpenCV_LIBS})

add_executable( testusbcamera src/testusbcamera.cpp )
target_link_libraries(testusbcamera ${OpenCV_LIBS})
