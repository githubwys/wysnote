#include <stdio.h>
#include <iostream>
#include "opencv2/calib3d.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
using namespace cv;

int main(){
    //mat.checkvector
    //elemChannels	Number of channels or number of columns the matrix should have.
    //2-D
    //row column channel 
    Mat mat1(20, 1, CV_32FC3);
    int n = mat1.checkVector(3); // n=20
    cout<<"n="<<n<<endl;
    Mat mat2(2, 3, CV_32FC1);
    int m = mat2.checkVector(3); // m=20
    cout<<"m="<<m<<endl;
    
    //3-D 
    //plane row column
    Mat mat3,mat4;
    int dims[] = {3, 1, 5}; // 1 plane, every plane has 3 rows and 5 columns
    mat3.create(3, dims, CV_32FC1); // for 3-d mat, it MUST have only 1 channel
    int n2 = mat3.checkVector(5); // the 5 columns are considered as 1 element
    cout<<"n2="<<n2<<endl;

    int dims2[] = {6, 1, 7}; // 3 planes, every plane has 1 row and 5 columns
    mat4.create(3, dims2, CV_32FC1);
    int m2 = mat4.checkVector(7 ); // the 5 columns are considered as 1 element
    cout<<"m2="<<m2<<endl;
	return 0;
}