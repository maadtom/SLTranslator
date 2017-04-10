#ifndef STREAMCAPTURETEST_H
#define STREAMCAPTURETEST_H


#include <QObject>
#include <StreamCapture.h>

class StreamCaptureTest : public QObject
{
    Q_OBJECT
public:
    explicit StreamCaptureTest(QObject *parent = 0);

signals:

private slots:
    void hasConstructorProperParameters();
    void hasParametrizedConstructorProperParameters();
    void isStreamCaptured();
};

#endif // STREAMCAPTURETEST_H
