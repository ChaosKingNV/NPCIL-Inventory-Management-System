#include "tools.h"
#include "ui_tools.h"

Tools::Tools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tools)
{
    ui->setupUi(this);
}

Tools::~Tools()
{
    delete ui;
}

void Tools::on_pushButtonTAdd_clicked()
{

}

