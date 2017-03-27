#include "sltmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SLTMenu w;
    w.show();

    return a.exec();
}
