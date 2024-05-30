#ifndef HOMTHU_H
#define HOMTHU_H

#include <QDialog>
#include"hienthiykiien.h"

namespace Ui {
class Homthu;
}

class Homthu : public QDialog
{
    Q_OBJECT

public:
    explicit Homthu(QWidget *parent = nullptr);
    ~Homthu();
    void docykientufile();
    void Themykien(QString,QString,int);
    void setbang();

private slots:
    void on_tableWidget_doubleClicked(const QModelIndex &index);

private:
    Ui::Homthu *ui;
    Hienthiykiien *ptrhienthi;

};

#endif // HOMTHU_H
