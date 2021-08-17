cmake -D CMAKE_INSTALL_PREFIX=../install ..



cmake -D CMAKE_INSTALL_PREFIX=../install OPENCV_EXTRA_MODULES_PATH=/home/tonglu/pkg/opencv4/opencv_contrib-4.5.1/modules ..



cmake -D CMAKE_INSTALL_PREFIX=../install -DOPENCV_EXTRA_MODULES_PATH=/home/tonglu/pkg/opencv3.2/opencv_contrib-3.2.0/modules -DENABLE_PRECOMPILED_HEADERS=OFF -D CMAKE_BUILD_TYPE=Release ..



cmake -D CMAKE_INSTALL_PREFIX=../install -DOPENCV_EXTRA_MODULES_PATH=/home/tonglu/pkg/opencv3.2/opencv_contrib-3.2.0/modules -DENABLE_PRECOMPILED_HEADERS=OFF -D CMAKE_BUILD_TYPE=Release -DEIGEN_INCLUDE_PATH=/usr/include/eigen3 ..



cmake -D CMAKE_INSTALL_PREFIX=../install -DOPENCV_EXTRA_MODULES_PATH=/home/tonglu/pkg/opencv4/opencv_contrib-4.5.1/modules -DENABLE_PRECOMPILED_HEADERS=OFF -D CMAKE_BUILD_TYPE=Release -DEIGEN_INCLUDE_PATH=/usr/include/eigen3 -DOPENCV_ENABLE_NONFREE=ON ..
