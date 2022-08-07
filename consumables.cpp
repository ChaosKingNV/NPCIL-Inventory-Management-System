#include "consumables.h"
#include "ui_consumables.h"

Consumables::Consumables(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Consumables)
{
    ui->setupUi(this);
}

Consumables::~Consumables()
{
    delete ui;
}

void Consumables::on_pushButtonCAdd_clicked()
{

}

