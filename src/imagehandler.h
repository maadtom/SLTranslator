#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H

#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_2_0>


using namespace cv;


struct ImgDimensions
{
    float imgRatio;  // height/width ratio
    int imgWidth;
    int imgHeight;
    int imgPosX;
    int imgPosY;
};


class ImageHandler : public QOpenGLWidget, protected QOpenGLFunctions_2_0
{

private:

    QImage renderedImg;
    QImage resizedImg;
    cv::Mat orgImage;
    ImgDimensions imgDimensions;

public:
    ImageHandler(cv::Mat capturedImg);
    ~ImageHandler();
};

#endif // IMAGEHANDLER_H
