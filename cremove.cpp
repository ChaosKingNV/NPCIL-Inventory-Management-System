#include "cremove.h"
#include "ui_cremove.h"

CRemove::CRemove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRemove)
{
    ui->setupUi(this);
}

CRemove::~CRemove()
{
    delete ui;
}
