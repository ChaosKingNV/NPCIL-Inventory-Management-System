#include "cfind.h"
#include "ui_cfind.h"

CFind::CFind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CFind)
{
    ui->setupUi(this);
    hideAllElements();
    ui->label_8->setText("");
}

CFind::~CFind()
{
    delete ui;
}

void CFind::on_findButton_clicked()
{
    qDebug() << "in CFind::on_findButton_clickec()";

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
void CFind::showAllElements()
{
    ui->Name->show();ui->label_2->show();
    ui->Quantity->show();ui->label_3->show();
    ui->Date->show();ui->label_4->show();
    ui->Storage->show();ui->label_5->show();
    ui->Comment->show();ui->label_6->show();
}

void CFind::hideAllElements()
{
    ui->Name->hide();ui->label_2->hide();
    ui->Quantity->hide();ui->label_3->hide();
    ui->Date->hide();ui->label_4->hide();
    ui->Storage->hide();ui->label_5->hide();
    ui->Comment->hide();ui->label_6->hide();
}

