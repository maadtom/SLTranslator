#include "StreamCaptureTest.h"

StreamCaptureTest::StreamCaptureTest(QObject *parent) : QObject(parent)
{

}

void StreamCaptureTest::hasConstructorProperParameters()
{

}

void StreamCaptureTest::hasParametrizedConstructorProperParameters()
{

}

/*
Test method : isStreamCaptured()

Checks if stream is captured by number of catched frames.

PASS: There is more than 1 captured frames
FAIL: No frames available
*/
void StreamCaptureTest::isStreamCaptured()
{
    VideoCapture testVC = StreamCapture::captureStream();

    QVERIFY2(testVC.get(CV_CAP_PROP_FRAME_COUNT)>1,"No frames available!!");
}
