#ifndef TOOLS_H
#define TOOLS_H

#include <QDialog>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>


namespace Ui {
class Tools;
}

class Tools : public QDialog
{
    Q_OBJECT

public:
    explicit Tools(QWidget *parent = nullptr);
    ~Tools();

private slots:
    void on_pushButtonTAdd_clicked();

    void on_pushButtonTUpdate_clicked();

    void on_pushButtonTFind_clicked();

    void on_pushButtonTRemove_clicked();

    void on_pushButtonTReport_clicked();

private:
    Ui::Tools *ui;
    void graphInit();

    int getOutOfOrderToolCount();
    int getAvailableToolCount();
    int getInUseToolCount();
};

#endif // TOOLS_H
