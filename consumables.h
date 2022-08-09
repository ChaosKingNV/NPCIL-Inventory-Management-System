#ifndef CONSUMABLES_H
#define CONSUMABLES_H

#include <QDialog>

namespace Ui {
class Consumables;
}

class Consumables : public QDialog
{
    Q_OBJECT

public:
    explicit Consumables(QWidget *parent = nullptr);
    ~Consumables();

private slots:
    void on_pushButtonCAdd_clicked();

    void on_pushButtonCUpdate_clicked();

    void on_pushButtonCFind_clicked();

    void on_pushButtonCRemove_clicked();

    void on_pushButtonCReport_clicked();

private:
    Ui::Consumables *ui;
};

#endif // CONSUMABLES_H
