#ifndef CREPORT_H
#define CREPORT_H

#include <QDialog>

namespace Ui {
class CReport;
}

class CReport : public QDialog
{
    Q_OBJECT

public:
    explicit CReport(QWidget *parent = nullptr);
    ~CReport();

private:
    Ui::CReport *ui;
};

#endif // CREPORT_H
