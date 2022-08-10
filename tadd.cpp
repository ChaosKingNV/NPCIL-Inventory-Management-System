#include "tadd.h"
#include "ui_tadd.h"

TAdd::TAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TAdd)
{
    ui->setupUi(this);
    ui->label_9->setText("");
}

TAdd::~TAdd()
{
    delete ui;
}

void TAdd::on_add_clicked()
{
    QString tId = ui->lineEditCAddID->text();
    QString tName = ui->lineEditCAddName->text();
    QString tQuantity = ui->lineEditCAddQrantity->text();
    QString tStatus   = ui->comboBox->currentText();
    QString tDate = ui->lineEditCAddDate->text();
    QString tStorage = ui->lineEditCAdStorage->text();
    QString tComment = ui->textEditCAddComment->toPlainText();

    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("insert into tools(Id, Name, Quantity, Status, Date, Storage, Comment) values ('"+tId+"', '"+tName+"', '"+tQuantity+"', '"+tStatus+"', '"+tDate+"', '"+tStorage+"', '"+tComment+"');");

    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->label_9->setText("Unable to Add Item");
    }
    else
    {
        if(query.numRowsAffected() > 0)
        {
            qDebug() <<"read was successful "<< query.lastQuery();
            ui->label_9->setText("Item Added Successfully!");
            //resetElements();
        }
        else
            qDebug() <<"Unable to Add new Item";
     }
}


void TAdd::on_reset_clicked()
{
    ui->lineEditCAddID->clear();
    ui->lineEditCAddName->clear();
    ui->lineEditCAddQrantity->clear();
    ui->lineEditCAddDate->clear();
    ui->lineEditCAdStorage->clear();
    ui->textEditCAddComment->clear();

}

