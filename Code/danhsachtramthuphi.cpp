#include "danhsachtramthuphi.h"
#include <QRandomGenerator>
#include"QDebug"
#include"QFile"

Danhsachtramthuphi::Danhsachtramthuphi(QObject *parent) : QObject(parent)
{

}

TramThuPhi Danhsachtramthuphi::layThongTinTram()
{

    int index = QRandomGenerator::global()->bounded(0, danhSachTram.size());
    return danhSachTram.at(index);
}
bool Danhsachtramthuphi::docTramTuFile( QString filePath,QString loaixe)
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Không thể mở file:" << filePath;
        return false;
    }

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList park = line.split(":::");

        TramThuPhi tram(park[0]);


        for (int i = 1; i < park.size(); ++i) {
            QStringList park1 = park[i].split(",");
            if (park1.size() == 2 && park1[0]==loaixe) {
                QString tien=park1[1];
                tram.tien=tien.toDouble();
            }
        }

        danhSachTram.append(tram);
    }

    file.close();
    return true;
}
void Danhsachtramthuphi::clear()
{
    danhSachTram.clear();
}
