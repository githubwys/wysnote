#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
    cv::Point3f point;
    std::cout <<point.x<<std::endl;

    cv::Mat src, dst;
    src = cv::Mat::eye(3,2, CV_32F);
    src.at<float>(0,0) = 0.4;
    src.at<float>(0,1) = 0.3;
    src.at<float>(1,0) = 0.2;
    std::cout<<src<<std::endl;
    cv::threshold(src, dst, 0.3, 4, cv::ThresholdTypes::THRESH_BINARY);//binary : 0 or maxvalue
    std::cout<<dst<<std::endl;

    cv::Size rsize(10,10);
    cv::Rect rect(cv::Rect(cv::Point(10,10),rsize));

    std::vector<cv::Point2f> srcPoints,dstPoints;
    //cv::findHomography(srcPoints,dstPoints,0);
    
}