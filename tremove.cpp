#include "tremove.h"
#include "ui_tremove.h"

TRemove::TRemove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TRemove)
{
    ui->setupUi(this);
}

TRemove::~TRemove()
{
    delete ui;
}
