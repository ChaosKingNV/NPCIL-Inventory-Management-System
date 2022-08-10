#include "treport.h"
#include "ui_treport.h"

TReport::TReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TReport)
{
    ui->setupUi(this);
}

TReport::~TReport()
{
    delete ui;
}
