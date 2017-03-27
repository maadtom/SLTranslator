#include "sltmenu.h"
#include "ui_sltmenu.h"

SLTMenu::SLTMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SLTMenu)
{
    ui->setupUi(this);
}

SLTMenu::~SLTMenu()
{
    delete ui;
}
