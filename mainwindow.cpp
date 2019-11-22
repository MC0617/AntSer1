#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>

#include "serial.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    serial *st = new serial;
    st->initSerPort();



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Ant_Update_clicked()
{
    //加载文件
        //获取文件名

    //解析文件
    //
    //发送bin
    //
}

void MainWindow::on_pushButton_Ant_File_clicked()
{
    QString sFullFileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "", tr("All File (*.*);;Hex (*.hex);;Bin (*.bin)"));
    qDebug() << "选中文件为:" << sFullFileName;
    ui->lineEdit->setText(sFullFileName);
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    qDebug() << "arg1: " << arg1;
    qDebug() << "lineText: " << ui->lineEdit->text();
   // return ui->lineEdit->text();

}

void MainWindow::on_pushButton_Ant_OpenFile_clicked()
{
    QString sFullFileName = QFileDialog::getOpenFileName(this, tr("打开文件"), "", tr("All File (*.*);;Hex (*.hex);;Bin (*.bin)"));
    qDebug() << "选中文件为:" << sFullFileName;
    ui->lineEdit->setText(sFullFileName);

}
