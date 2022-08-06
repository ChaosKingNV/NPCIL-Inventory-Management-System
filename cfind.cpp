#include "cfind.h"
#include "ui_cfind.h"

CFind::CFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFind)
{
    ui->setupUi(this);
}

CFind::~CFind()
{
    delete ui;
}
