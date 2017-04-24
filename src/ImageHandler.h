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

static const int DEFAULT_CAMERA = 1;

class ImageHandler : public QOpenGLWidget, protected QOpenGLFunctions_2_0
{

private:

    QImage renderedImg;
    QImage resizedImg;
    Mat orgImage;
    ImgDimensions imgDimensions;
    int cameraID;

public:

    ImageHandler(){}
    ImageHandler(Mat capturedImg) : orgImage(capturedImg) , cameraID(DEFAULT_CAMERA){}
    void imageCapture();
    void imageRefresh();

    /***********************GETTERS***********************/

    QImage getRenderedImg() const;
    QImage getResizedImg() const;
    Mat getOrgImage() const;
    int getCameraID() const;

    /***********************SETTERS***********************/

    void setRenderedImg(const QImage &value);
    void setResizedImg(const QImage &value);
    void setOrgImage(const Mat &value);
    void setCameraID(int value);
};

#endif // IMAGEHANDLER_H
