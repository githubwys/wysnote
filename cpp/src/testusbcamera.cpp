#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    VideoCapture cap;
    cap.open(2);//2&4
    while (1)
    {
        Mat frame; //定义一个变量把视频源一帧一帧显示
        cap >> frame;
        if (frame.empty())
        {
            cout << "Finish" << endl;
            break;
        }
        //imshow("Input video", frame);
        cout<<frame.rows<<" / "<<frame.cols<<endl;
        std::vector<KeyPoint> keyPoints;
        // construction of the orb feature detector object
        Ptr<FeatureDetector> orb = ORB::create();
        orb->detect(frame,keyPoints);

        drawKeypoints(frame, keyPoints, frame, Scalar(0, 0, 255), DrawMatchesFlags::DRAW_OVER_OUTIMG);
        imshow("Input video", frame);
        waitKey(30);
    }
    cap.release();
    return 0;
}
