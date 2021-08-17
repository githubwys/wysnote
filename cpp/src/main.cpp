// #include <iostream>
// #include <opencv2/opencv.hpp>
#include "matchtemplate.h"
#include <iostream>
#include <opencv2/opencv.hpp>

int main(){
    std::string file = "/home/tonglu/slam/data/image/0.png";
    cv::Mat image;
    image = cv::imread(file, cv::COLOR_RGB2GRAY);

    // std::cout << (int)image.at<cv::Vec3b>(0, 0)[0] << ','; //利用 Fn 1 介绍的方法输出一下像素值到控制台
    // std::cout << (int)image.at<cv::Vec3b>(0, 0)[1] << ',';
    // std::cout << (int)image.at<cv::Vec3b>(0, 0)[2] << std::endl;

    cv::imshow("image",image);
    cv::waitKey();

    cv::Mat templ ;
    cv::Rect rect = cv::Rect(10,10,100,100);
    image(rect).copyTo(templ);

    cv::imshow("templ", templ);
    cv::waitKey();

    cv::Mat mask, result;
    templatematch(image, templ, result);

    cv::matchTemplate(image, templ, result, cv::TM_CCOEFF_NORMED, mask);
    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc);
    printf("%f %f \n",minVal, maxVal);
    printf("%d %d \n", maxLoc.x, maxLoc.y);
    // // cv::imshow("result", result);
    // // cv::waitKey();
    // // double value = result.at<cv::Vec3b>(0,0)[0];
    // double value = (double)result.at<uchar>(0,0);
    // printf("%f \n", value);
    // std::cout<<value<<std::endl;
    // printf("%d %d \n", result.size().height, result.size().width);
    // std::cout<<result.size()<<std::endl;

    // cv::Mat m = cv::Mat::zeros(100,100,CV_8UC1);
    // cv::Rect rect1(0,0,50,100);
    // m(rect1).setTo(255);
    // cv::imshow("m", m);
    // cv::waitKey();
    // std::cout<<"test = "<<(int)m.at<uchar>(80,10)<<std::endl;
    // std::cout<<"test = "<<(int)m.at<uchar>(10,80)<<std::endl;

    return 0;

}