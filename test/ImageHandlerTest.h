#ifndef IMAGEHANDLERTEST_H
#define IMAGEHANDLERTEST_H

#include <QObject>
#include <QTest>
#include <ImageHandler.h>
#include <QDebug>

using namespace std;

class ImageHandlerTest : public QObject
{
    Q_OBJECT
public:
    explicit ImageHandlerTest(QObject *parent = 0);

private slots:
    void isParametrizedConstructorWorking();
    void isFrameFromStreamCaptured();

};

#endif // IMAGEHANDLERTEST_H
