#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_Ant_Update_clicked();
    void on_pushButton_Ant_File_clicked();
    void on_lineEdit_textChanged(const QString &arg1);
    void on_pushButton_Ant_OpenFile_clicked();
};

#endif // MAINWINDOW_H
