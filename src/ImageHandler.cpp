#include "ImageHandler.h"


/***********************GETTERS***********************/

QImage ImageHandler::getRenderedImg() const
{
    return renderedImg;
}

QImage ImageHandler::getResizedImg() const
{
    return resizedImg;
}

Mat ImageHandler::getOrgImage() const
{
    return orgImage;
}

int ImageHandler::getCameraID() const
{
    return cameraID;
}

/***********************SETTERS***********************/

void ImageHandler::setResizedImg(const QImage &value)
{
    resizedImg = value;
}

void ImageHandler::setRenderedImg(const QImage &value)
{
    renderedImg = value;
}

void ImageHandler::setOrgImage(const Mat &value)
{
    orgImage = value;
}

void ImageHandler::setCameraID(int value)
{
    cameraID = value;
}


bool ImageHandler::imageCapture(VideoCapture streamReciever)
{
    Mat frame;

    if(!streamReciever.isOpened()) //check if stream recieving is started
            return 0;

     streamReciever >> frame; // get a new frame from camera
     cvtColor(frame,this->orgImage, CV_BGR2GRAY); //change image to grayscale

     return 1;
}
