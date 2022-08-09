#include "cupdate.h"
#include "ui_cupdate.h"

CUpdate::CUpdate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CUpdate)
{
    ui->setupUi(this);
    ui->label_8->setText("");
    hideAllElements();
}

CUpdate::~CUpdate()
{
    delete ui;
}

void CUpdate::on_findButton_clicked()
{
    qDebug() << "in CUpdate::on_findButton_clickec()";

    QString cId = ui->id->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select Name, Quantity, Date, Storage, Comment from consumables where Id='" + cId + "'");

    if(!query.exec()){
       qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_8->setText("Unable to Find Item");}

    else
       qDebug() << "read was successful "<< query.lastQuery();


    char flag = -1;

    while(query.next())
    {
       qDebug() << "Show";
       flag = 1;
       ui->Name->setText(query.value(0).toString());
       ui->Quantity->setText(query.value(1).toString());
       ui->Date->setText(query.value(2).toString());
       ui->Storage->setText(query.value(3).toString());
       ui->Comment->setText(query.value(4).toString());
    }

    if(flag == 1)
    {
        showAllElements();
    }
}


void CUpdate::on_updateButton_clicked()
{
    QString cId = ui->id->text();
    QString cName = ui->Name->text();
    QString cQuantity = ui->Quantity->text();
    QString cDate = ui->Date->text();
    QString cStorage = ui->Storage->text();
    QString cComment = ui->Comment->toPlainText();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.clear();


    query.prepare("update consumables set Name= '" +cName+ "',Quantity= '" +cQuantity+ "',Date= '" +cDate+ "',Storage ='" +cStorage+ "', Comment = '" +cComment+ "'where Id = '" +cId+ "'");

   if(!query.exec())
   {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->label_8->setText("Unable to Update Item");
   }
   else
   {
       qDebug() << "read was successful "<< query.lastQuery();
       hideAllElements();
       ui->label_8->setText("Record updated successfully!");

   }
   //changin default style of seats those are available
}

void CUpdate::showAllElements()
{
    ui->Name->show();ui->label_2->show();
    ui->Quantity->show();ui->label_3->show();
    ui->Date->show();ui->label_4->show();
    ui->Storage->show();ui->label_5->show();
    ui->Comment->show();ui->label_6->show();
    ui->updateButton->show();
    qDebug() << "Show";
}

void CUpdate::hideAllElements()
{
    ui->Name->hide();ui->label_2->hide();
    ui->Quantity->hide();ui->label_3->hide();
    ui->Date->hide();ui->label_4->hide();
    ui->Storage->hide();ui->label_5->hide();
    ui->Comment->hide();ui->label_6->hide();
    ui->updateButton->hide();
     qDebug() << "Hide";
}
