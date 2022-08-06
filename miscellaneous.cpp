#include "miscellaneous.h"
#include "ui_miscellaneous.h"

Miscellaneous::Miscellaneous(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Miscellaneous)
{
    ui->setupUi(this);
}

Miscellaneous::~Miscellaneous()
{
    delete ui;
}
