#include "tupdate.h"
#include "ui_tupdate.h"

TUpdate::TUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TUpdate)
{
    ui->setupUi(this);
}

TUpdate::~TUpdate()
{
    delete ui;
}
