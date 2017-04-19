#include <QtTest/QTest>
#include <ImageHandlerTest.h>
#include <StreamCaptureTest.h>


int main()
{
    ImageHandlerTest imageHandlerTest;
    StreamCaptureTest streamCaptureTest;

    QTest::qExec(&imageHandlerTest);
    QTest::qExec(&streamCaptureTest);

    return 0;
}
