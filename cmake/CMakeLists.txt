# ## 整体编译
# cmake_minimum_required(VERSION 2.8.0)

# project(hhhhh)

# set( CMAKE_BUILD_TYPE "Debug")

# include_directories(include)

# #AUX_SOURCE_DIRECTORY(src DIR_SRCS)

# # add_executable(main ${DIR_SRCS})
# add_executable(main src/main.cpp src/testmath.cpp)
# #TARGET_LINK_LIBRARIES(main m)



## 先编译库文件，再编译
cmake_minimum_required(VERSION 2.8.0)

project(cmaketest)

set( CMAKE_BUILD_TYPE "Debug")

include_directories(include)
add_library(testmath SHARED src/testmath.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main testmath)

# cool bingo