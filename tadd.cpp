#include "tadd.h"
#include "ui_tadd.h"

TAdd::TAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TAdd)
{
    ui->setupUi(this);
}

TAdd::~TAdd()
{
    delete ui;
}
