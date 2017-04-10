#include <QtTest/QTest>
#include <imagehandlertest.h>
#include <streamcapturetest.h>


int main()
{
    ImageHandlerTest imageHandlerTest;
    StreamCaptureTest streamCaptureTest;

    QTest::qExec(&imageHandlerTest);
    QTest::qExec(&streamCaptureTest);

    return 0;
}
