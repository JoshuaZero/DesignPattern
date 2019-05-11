//
// Created by st007 on 19-4-3.
//
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>
#include "UseVideoCapture.h"

using namespace cv;
using namespace std;


UseVideoCapture::UseVideoCapture() {

}

UseVideoCapture::~UseVideoCapture() {

}

int UseVideoCapture::openVideo() {
    cout << "Built with OpenCV " << CV_VERSION << endl;
    Mat image;
    VideoCapture capture;
    //open the camera default
    //capture.open(0);
    //mp4: Ch1_20181205035312.mp4、Ch2_20181205010658.mp4、Ch3_20181206164948.mp4、ch03_20181205000000.mp4
    //avi: 181205024500_15.avi
    //dav: NVR_ch2_main_20181205050000_20181205060000.dav
    capture.open("/data/ST007/st007_Win/sharedfile/video/181205024500_15.avi");
    if(capture.isOpened())
    {
        cout << "Capture is opened" << endl;
        for(;;)
        {
            capture >> image;
            if(image.empty())
                break;
            drawText(image);
            imshow("Sample", image);
            if(waitKey(10) >= 0)
                break;
        }
    }
    else
    {
        cout << "No capture" << endl;
        image = Mat::zeros(480, 640, CV_8UC1);
        drawText(image);
        imshow("Sample", image);
        waitKey(0);
    }
    return 0;
}

int UseVideoCapture::drawText(cv::Mat & image) {
    putText(image, "Hello OpenCV",
            Point(1920, 1080),
            FONT_HERSHEY_COMPLEX, 1, // font face and scale
            Scalar(255, 255, 255), // white
            1, LINE_AA); // line thickness and type
}