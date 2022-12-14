#include "consumables.h"
#include "ui_consumables.h"
#include "cadd.h"
#include "cupdate.h"
#include "cfind.h"
#include "cremove.h"
#include "creport.h"

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
    CAdd *cadd = new CAdd(this);

    cadd->exec();
}


void Consumables::on_pushButtonCUpdate_clicked()
{
    CUpdate *cupdate = new CUpdate(this);

    cupdate->exec();
}


void Consumables::on_pushButtonCFind_clicked()
{
    CFind *cfind = new CFind(this);

    cfind->exec();
}


void Consumables::on_pushButtonCRemove_clicked()
{
    CRemove *cremove = new CRemove(this);

    cremove->exec();
}


void Consumables::on_pushButtonCReport_clicked()
{
    CReport *creport = new CReport(this);

    creport->exec();
}

