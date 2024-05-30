#ifndef DOIMATKHAU_H
#define DOIMATKHAU_H

#include <QDialog>

namespace Ui {
class Doimatkhau;
}

class Doimatkhau : public QDialog
{
    Q_OBJECT

public:
    explicit Doimatkhau(QWidget *parent = nullptr);
    ~Doimatkhau();
    void doimatkhau(QString,QString);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Doimatkhau *ui;
    QString Mkcu;
    QString Tentk;
};

#endif // DOIMATKHAU_H
