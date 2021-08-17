#include "matchtemplate.h"

//TM_CCOEFF_NORMED
void templatematch(cv::InputArray image, cv::InputArray templ, cv::OutputArray result)
{
    std::cout << "==========aver===========" << std::endl;

    //norm
    cv::Mat imagegray, templgray;
    // image.copyTo(imagegray);
    // templ.copyTo(templgray);
    cv::cvtColor(image, imagegray, cv::COLOR_RGB2GRAY);//CV_RGB2GRAY
    cv::cvtColor(templ, templgray, cv::COLOR_RGB2GRAY);

    int imagerows, imagecols;
    int templrows, templcols;
    imagerows = imagegray.size().height;//not right
    imagecols = imagegray.size().width;
    double imagegrayAver = 0, templgrayAver = 0;
    int count = 0;

    templrows = templgray.size().height;
    templcols = templgray.size().width;
    count = 0;
    for (int i = 0; i < templrows; i++)
    {
        for (int j = 0; j < templcols; j++)
        {
            if((int)imagegray.at<uchar>(i, j) != 0){
                templgrayAver += (int)templgray.at<uchar>(i, j);
                count++;
            }
            // templgrayAver += (int)templgray.at<uchar>(i, j);
            // count++;
        }
    }
    templgrayAver = templgrayAver / count;


    std::cout << "==========calculate===========" << std::endl;
    //calculate
    double imagetemplvalue, imagevalue, templvalue;
    double maxcorrvalue = 0, corrcurrent = 0;
    double corrmat[imagerows - templrows + 1][imagecols - templcols + 1];
    //cv::Mat result(imagerows - templrows + 1, imagecols - templcols + 1, CV_8UC1);
    
    cv::Point maxpoint;

    for (int i = 0; i < imagerows - templrows + 1; i++)
    {
        for (int j = 0; j < imagecols - templcols + 1; j++)
        {
            imagetemplvalue = 0, imagevalue = 0, templvalue = 0;
            
            //aver of (image of the templ size)
            count = 0; imagegrayAver = 0;
            for (int m = 0; m < templrows; m++)
            {
                for (int n = 0; n < templcols; n++)
                {
                    if((int)imagegray.at<uchar>(i+m, j+n) != 0){
                        imagegrayAver += (int)imagegray.at<uchar>(i+m, j+n);
                        count++;
                    }
                    // imagegrayAver += (int)imagegray.at<uchar>(i+m, j+n);
                    // count++;
                }
            }
            imagegrayAver = imagegrayAver/count;

            for (int m = 0; m < templrows; m++)
            {
                for (int n = 0; n < templcols; n++)
                {
                    imagetemplvalue += ((int)imagegray.at<uchar>(i + m, j + n) - imagegrayAver) * ((int)templgray.at<uchar>(m, n) - templgrayAver);
                    imagevalue += pow(((int)imagegray.at<uchar>(i + m, j + n) - imagegrayAver), 2);
                    templvalue += pow(((int)templgray.at<uchar>(m, n) - templgrayAver), 2);
                }
            }
            corrcurrent = imagetemplvalue / sqrt(imagevalue * templvalue);

            //result.at<uchar>(i, j) = corrvalue;//to be continue
            corrmat[i][j] = corrcurrent;
            if (corrcurrent > maxcorrvalue)
            {
                maxcorrvalue = corrcurrent;
                maxpoint.x = i;
                maxpoint.y = j;
            }
        }
    }
    std::cout << "maxcorrvalue = " << maxcorrvalue << std::endl;
    std::cout << "maxpoint.x = " << maxpoint.x << "  maxpoint.y = " << maxpoint.y << std::endl;
    for (int i = 0; i < 20; i++)
    {
        std::cout << "corrmat = " << corrmat[maxpoint.x][i] << std::endl;
    }
}
