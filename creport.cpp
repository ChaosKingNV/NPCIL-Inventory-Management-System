#include "creport.h"
#include "ui_creport.h"

CReport::CReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CReport)
{
    ui->setupUi(this);
}

CReport::~CReport()
{
    delete ui;
}
