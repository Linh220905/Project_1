#include "mainwindow.h"
#include"giaodienchinh.h"
#include"giaodiennguoidung.h"


#include <QApplication>
QString Docstylesheet(QString path)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"loi";

    }
    QTextStream in(&file);
    return in.readAll();

}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString styleSheet = Docstylesheet("Adaptic.qss");
    if (!styleSheet.isEmpty()) {
        a.setStyleSheet(styleSheet);
    }

    Giaodienchinh w;
    w.show();

    return a.exec();
}
