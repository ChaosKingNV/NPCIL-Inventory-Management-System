#include "cadd.h"
#include "ui_cadd.h"

CAdd::CAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAdd)
{
    ui->setupUi(this);
}

CAdd::~CAdd()
{
    delete ui;
}
