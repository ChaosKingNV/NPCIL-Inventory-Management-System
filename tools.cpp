#include "tools.h"
#include "ui_tools.h"
#include "tadd.h"
#include "tupdate.h"
#include "tfind.h"
#include "tremove.h"
#include "treport.h"
#include "MyDB.h"

using namespace QtCharts;

Tools::Tools(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tools)
{
    ui->setupUi(this);
    graphInit();
    getOutOfOrderToolCount();
    getAvailableToolCount();
    getInUseToolCount();
}

void Tools::graphInit()
{
    // Assign names to the set of bars used
    QBarSet *set0 = new QBarSet("In Use");
    QBarSet *set1 = new QBarSet("Available");
    QBarSet *set2 = new QBarSet("Out of Order");

    // Assign values for each bar
    *set0 << getInUseToolCount();
    *set1 << getAvailableToolCount();
    *set2 << getOutOfOrderToolCount();

    QBarSeries *series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Status of Inventory");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << " " ;
    //7:05
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,50);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setAlignment(Qt::AlignBottom);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    //chartView->setGeometry(0,100,300,200);
    chartView->resize(200,150);
    //this->setCentralWidget(chartView);
    ui->verticalLayoutGraph->addWidget(chartView);
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

int Tools::getOutOfOrderToolCount()
{
    qDebug() << "in MyDB::getOutOfOrderLaptopCount()";

    QSqlQuery query( MyDB::getInstance()->getDBInstance());

    //first check if SerialNo already exist
    query.prepare("select count(Id) from tools where Status = 'Out Of Order'");
    int count = -1;
    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //flag = 1;
    }
    else
    {
        qDebug() << "read was successful "<< query.lastQuery();
        query.next();

        count = query.value(0).toInt();
        qDebug()<< "Out of Order Count is : "<<count;
        return count;
    }
    return 0;
}

int Tools::getAvailableToolCount()
{
    qDebug() <<"in MyDB::getAvailableLaptopCount()";

    QSqlQuery query( MyDB::getInstance()->getDBInstance());

    //first check if SerialNo already exist
    query.prepare("select count(Id) from tools where Status = 'Available'");
    int count = -1;
    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //flag = 1;
    }
    else
    {
        qDebug() << "read was successful "<< query.lastQuery();
        query.next();

        count = query.value(0).toInt();
        qDebug()<< "Available Count is : "<<count;
        return count;
    }
    return 0;
}

int Tools::getInUseToolCount()
{
    qDebug() <<" in MyDB::getInUseLaptopCount()";

    QSqlQuery query( MyDB::getInstance()->getDBInstance());

    //first check if SerialNo already exist
    query.prepare("select count(Id) from tools where Status = 'In Use'");
    int count = -1;
    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        //flag = 1;
    }
    else
    {
        qDebug() << "read was successful "<< query.lastQuery();
        query.next();

        count = query.value(0).toInt();
        qDebug()<< "In Use Count is : "<<count;
        return count;
    }
    return 0;
}
