#include "cupdate.h"
#include "ui_cupdate.h"

CUpdate::CUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CUpdate)
{
    ui->setupUi(this);
}

CUpdate::~CUpdate()
{
    delete ui;
}
