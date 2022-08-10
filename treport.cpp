#include "treport.h"
#include "ui_treport.h"

TReport::TReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TReport)
{
    ui->setupUi(this);
    updateUI();
}

TReport::~TReport()
{
    delete ui;
}

void TReport::updateUI()
{
       qDebug() << "in init()";
       QSqlQueryModel * model = new QSqlQueryModel(this);

       QSqlQuery query( MyDB::getInstance()->getDBInstance());
       query.prepare("select * from tools");

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
