#include "ImageHandlerTest.h"

ImageHandlerTest::ImageHandlerTest(QObject *parent) : QObject(parent)
{

}

void ImageHandlerTest::isParametrizedConstructorWorking()
{
    Mat testMatrix = Mat::ones(2, 2, CV_32S);
    ImageHandler *testImage = new ImageHandler(testMatrix);

    QVERIFY2(testImage->getOrgImage().at<int>(0,0) == 1 && testImage->getOrgImage().at<int>(1,1) == 1,
             "Declared matrix has different values than 1");
    QVERIFY2(testImage->getOrgImage().cols == 2 && testImage->getOrgImage().rows == 2,
             "Declared matrix has different size than 2x2");

}

void ImageHandlerTest::isFrameFromStreamCaptured()
{
    VideoCapture streamer(DEFAULT_CAMERA);
    ImageHandler *testImage = new ImageHandler();
    testImage->imageCapture(streamer);

    QVERIFY2(testImage->getOrgImage().cols > 0 && testImage->getOrgImage().rows > 0,
             "Captured matrix object is empty");

}



