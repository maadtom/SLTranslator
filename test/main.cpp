#include <QtTest/QTest>
#include <ImageHandlerTest.h>



int main()
{
    ImageHandlerTest imageHandlerTest;
    QTest::qExec(&imageHandlerTest);

    return 0;
}
