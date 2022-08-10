#include "tremove.h"
#include "ui_tremove.h"

TRemove::TRemove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TRemove)
{
    ui->setupUi(this);
    hideAllElements();
    ui->label_17->setText("");
}

TRemove::~TRemove()
{
    delete ui;
}

void TRemove::on_findButton_2_clicked()
{
    qDebug() << "in TRemove::on_findButton_clickec()";

    QString tId = ui->id_2->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select Name, Quantity, Status, Date, Storage, Comment from tools where Id='" + tId + "'");

    if(!query.exec()){
       qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_17->setText("Unable to Find Item");}

    else
       qDebug() << "read was successful "<< query.lastQuery();


    char flag = -1;

    while(query.next())
    {
       flag = 1;
       ui->Name_2->setText(query.value(0).toString());
       ui->Quantity_2->setText(query.value(1).toString());
       ui->Status->setCurrentIndex(ui->Status->findText(query.value(2).toString()));
       ui->Date_2->setText(query.value(3).toString());
       ui->Storage_2->setText(query.value(4).toString());
       ui->Comment_2->setText(query.value(5).toString());
    }

    if(flag == 1)
    {
        showAllElements();
    }
}


void TRemove::on_removeButton_clicked()
{
    qDebug() << "in TRemove::on_findButton_clickec()";

    QString tId = ui->id_2->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("delete from tools where ID = '" +tId+ "'");

    if(!query.exec()){
       qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_17->setText("Unable to Remove Item");}

    else
    {
       qDebug() << "read was successful "<< query.lastQuery();
       ui->label_17->setText("Record Removed successfully!");
    }
}

void TRemove::showAllElements()
{
    ui->Name_2->show();ui->label_11->show();
    ui->Quantity_2->show();ui->label_12->show();
    ui->Status->show();ui->label_16->show();
    ui->Date_2->show();ui->label_13->show();
    ui->Storage_2->show();ui->label_14->show();
    ui->Comment_2->show();ui->label_15->show();
    ui->removeButton->show();
}

void TRemove::hideAllElements()
{
    ui->Name_2->hide();ui->label_11->hide();
    ui->Quantity_2->hide();ui->label_12->hide();
    ui->Status->hide();ui->label_16->hide();
    ui->Date_2->hide();ui->label_13->hide();
    ui->Storage_2->hide();ui->label_14->hide();
    ui->Comment_2->hide();ui->label_15->hide();
    ui->removeButton->hide();
}



