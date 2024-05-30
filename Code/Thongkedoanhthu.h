#ifndef THONGKEDOANHTHU_H
#define THONGKEDOANHTHU_H

#include <QDialog>
#include"danhthu.h"
#include"QVector"

namespace Ui {
class Doanhthu;
}

class Doanhthu : public QDialog
{
    Q_OBJECT

public:
    explicit Doanhthu(QWidget *parent = nullptr);
    ~Doanhthu();
    void doctentram();
    void thongkedoanhthu();
    void thongkevaobang();
    void themdanhthu(QString,QString,QString,int);

private:
    Ui::Doanhthu *ui;
    QVector<Danhthu> danhthu;
};

#endif // THONGKEDOANHTHU_H
