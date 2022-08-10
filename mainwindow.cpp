#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "consumables.h"
#include "tools.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   /* QPixmap bkgnd("/home/user/Pictures/background.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);*/
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButtonConsumables_clicked()
{
    Consumables *consumables = new Consumables(this);

    consumables->exec();
}


void MainWindow::on_pushButtonTools_clicked()
{
    Tools *tools = new Tools(this);

    tools->exec();
}

