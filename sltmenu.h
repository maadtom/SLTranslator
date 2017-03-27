#ifndef SLTMENU_H
#define SLTMENU_H

#include <QWidget>

namespace Ui {
class SLTMenu;
}

class SLTMenu : public QWidget
{
    Q_OBJECT

public:
    explicit SLTMenu(QWidget *parent = 0);
    ~SLTMenu();

private:
    Ui::SLTMenu *ui;
};

#endif // SLTMENU_H
