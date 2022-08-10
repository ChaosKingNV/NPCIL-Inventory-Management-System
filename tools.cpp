#include "tools.h"
#include "ui_tools.h"
#include "tadd.h"
#include "tupdate.h"
#include "tfind.h"
#include "tremove.h"
#include "treport.h"

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
    TAdd *tadd = new TAdd(this);

    tadd->exec();
}


void Tools::on_pushButtonTUpdate_clicked()
{
    TUpdate *tupdate = new TUpdate(this);

    tupdate->exec();
}


void Tools::on_pushButtonTFind_clicked()
{
    TFind *tfind = new TFind(this);

    tfind->exec();
}


void Tools::on_pushButtonTRemove_clicked()
{
    TRemove *tremove = new TRemove(this);

    tremove->exec();
}


void Tools::on_pushButtonTReport_clicked()
{
    TReport *treport = new TReport(this);

    treport->exec();
}

