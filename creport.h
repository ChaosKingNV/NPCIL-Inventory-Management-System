#ifndef CREPORT_H
#define CREPORT_H

#include <QDialog>
#include "MyDB.h"

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
    void updateUI();
};

#endif // CREPORT_H
