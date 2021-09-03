#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
    cv::Mat image;
    image = cv::imread("/home/wys/Pictures/0201.jpeg");
    cv::imshow("02",image);
    cv::waitKey(0);
}