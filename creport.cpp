#include "creport.h"
#include "ui_creport.h"

CReport::CReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CReport)
{
    ui->setupUi(this);
    updateUI();
}

CReport::~CReport()
{
    delete ui;
}


void CReport::updateUI()
{
       qDebug() << "in init()";
       QSqlQueryModel * model = new QSqlQueryModel(this);

       QSqlQuery query( MyDB::getInstance()->getDBInstance());
       query.prepare("select * from consumables");

       if(!query.exec())
          qDebug() << query.lastError().text() << query.lastQuery();
       else
          qDebug() << "== success query fetch()";

       while(query.next())
       qDebug()<<query.value(0).toString();

       model->setQuery(query);
       ui->tableView->setModel(model);
       qDebug() << "rows are : " << model->rowCount();
       ui->tableView->show();
}
