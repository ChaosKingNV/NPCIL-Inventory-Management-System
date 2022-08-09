#include "cremove.h"
#include "ui_cremove.h"

CRemove::CRemove(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRemove)
{
    ui->setupUi(this);
    ui->label_24->setText("");
    hideAllElements();
}

CRemove::~CRemove()
{
    delete ui;
}

void CRemove::on_findButton_3_clicked()
{
    qDebug() << "in CRemove::on_findButton_clickec()";

    QString cId = ui->id_3->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select Name, Quantity, Date, Storage, Comment from consumables where Id='" + cId + "'");

    if(!query.exec()){
       qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_24->setText("Unable to Find Item");}

    else
       qDebug() << "read was successful "<< query.lastQuery();


    char flag = -1;

    while(query.next())
    {
       flag = 1;
       ui->Name_3->setText(query.value(0).toString());
       ui->Quantity_3->setText(query.value(1).toString());
       ui->Date_3->setText(query.value(2).toString());
       ui->Storage_3->setText(query.value(3).toString());
       ui->Comment_3->setText(query.value(4).toString());
    }

    if(flag == 1)
    {
        showAllElements();
    }
}


void CRemove::on_removeButton_clicked()
{
    QString cId = ui->id_3->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.clear();


    query.prepare("delete from consumables where ID = '" +cId+ "'");

   if(!query.exec())
   {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->label_24->setText("Unable to Remove Item");
   }
   else
   {
       qDebug() << "read was successful "<< query.lastQuery();
       hideAllElements();
       ui->label_24->setText("Record Removed successfully!");

   }
}

void CRemove::showAllElements()
{
    ui->Name_3->show();ui->label_18->show();
    ui->Quantity_3->show();ui->label_19->show();
    ui->Date_3->show();ui->label_20->show();
    ui->Storage_3->show();ui->label_21->show();
    ui->Comment_3->show();ui->label_22->show();
    ui->removeButton->show();
}

void CRemove::hideAllElements()
{
    ui->Name_3->hide();ui->label_18->hide();
    ui->Quantity_3->hide();ui->label_19->hide();
    ui->Date_3->hide();ui->label_20->hide();
    ui->Storage_3->hide();ui->label_21->hide();
    ui->Comment_3->hide();ui->label_22->hide();
    ui->removeButton->hide();
}

