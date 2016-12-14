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

private slots:
    void on_pushButton_clicked();

    void on_spinBox_editingFinished();



private:
    Ui::MainWindow *ui;

qint32 N;
 qint32 i,j,k,x;
 qint32 p=0;
 QString temp=0;
};

#endif // MAINWINDOW_H
