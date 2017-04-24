#include <QtTest/QTest>
#include <ImageHandlerTest.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ImageHandlerTest imageHandlerTest;
    QTest::qExec(&imageHandlerTest);

    return a.exec();
}
