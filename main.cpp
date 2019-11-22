#include "mainwindow.h"
#include <QApplication>



#include <QDebug>
#include <QProcess>
#include <QDateTime>
void testFunc()
{

    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz");
    qDebug() << current_date << endl;

    current_date_time = QDateTime::currentDateTime();
    current_date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz");

    QString path = "D:\\test.txt";
    QProcess *program = new QProcess();
    program->start("notepad " + path);
    qDebug() << "PID:" << program->processId();

}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    testFunc();



    return a.exec();
}
