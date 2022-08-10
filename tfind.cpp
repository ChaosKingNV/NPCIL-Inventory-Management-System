#include "tfind.h"
#include "ui_tfind.h"

TFind::TFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TFind)
{
    ui->setupUi(this);
}

TFind::~TFind()
{
    delete ui;
}
