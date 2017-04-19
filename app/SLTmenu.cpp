#include "SLTmenu.h"
#include "ui_SLTmenu.h"

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
