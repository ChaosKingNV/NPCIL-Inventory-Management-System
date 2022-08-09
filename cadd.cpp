#include "cadd.h"
#include "ui_cadd.h"

CAdd::CAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAdd)
{
    ui->setupUi(this);
    ui->label_8->setText("");
}

CAdd::~CAdd()
{
    delete ui;
}

void CAdd::on_pushButtonCAddAdd_clicked()
{
    QString cId = ui->lineEditCAddID->text();
    QString cName = ui->lineEditCAddName->text();
    QString cQuantity = ui->lineEditCAddQrantity->text();
    QString cDate = ui->lineEditCAddDate->text();
    QString cStorage = ui->lineEditCAdStorage->text();
    QString cComment = ui->textEditCAddComment->toPlainText();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("insert into consumables(Id, Name, Quantity, Date, Storage, Comment) values ('"+cId+"', '"+cName+"', '"+cQuantity+"', '"+cDate+"', '"+cStorage+"', '"+cComment+"');");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_8->setText("Unable to Add Item");
    }
    else
    {
        if(query.numRowsAffected() > 0)
        {
            qDebug() <<"read was successful "<< query.lastQuery();
            ui->label_8->setText("Item Added Successfully!");
            //resetElements();
        }
        else
            qDebug() <<"Unable to Add new Item";
     }

}


void CAdd::on_pushButtonCAddReset_clicked()
{
    ui->lineEditCAddID->clear();
    ui->lineEditCAddName->clear();
    ui->lineEditCAddQrantity->clear();
    ui->lineEditCAddDate->clear();
    ui->lineEditCAdStorage->clear();
    ui->textEditCAddComment->clear();
}

