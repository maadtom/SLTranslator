#ifndef STREAMCAPTURE_H
#define STREAMCAPTURE_H

#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;


class StreamCapture
{
private:
    VideoCapture capturedStream;
    Mat capturedFrame;
    int cameraID;


public:
    StreamCapture(VideoCapture capturedStream);
    StreamCapture(VideoCapture capturedStream,int cameraID);

    VideoCapture getCapturedStream();
    Mat getCapturedFrame();
    int getCameraID();

    void changeCamera();

};

#endif // STREAMCAPTURE_H
