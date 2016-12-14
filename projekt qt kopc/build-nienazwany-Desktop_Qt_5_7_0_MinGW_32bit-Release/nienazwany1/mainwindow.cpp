#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_editingFinished()
{

   N= ui->spinBox->value();

}





void MainWindow::on_pushButton_clicked()
{

    qint32 d[N + 1],tempint;

    temp = ui -> lineEdit ->text();

        temp.split(tempint);

    d[p+1]=tempint;
    d[p++];

  QString str ,liczby ;



            d[1] =1;
            d[2] =2;
            d[3]=3;
            d[4]=4;
            d[5]=3;
            d[6]=10;
            d[7]=11;
            d[8]=9;
            d[9] =2;
            d[10] =3;


// Budujemy kopiec

  for(i = 2; i <= N; i++)
  {
    j = i; k = j / 2;
    x = d[i];
    while((k > 0) && (d[k] < x))
    {
      d[j] = d[k];
      j = k; k = j / 2;
    }
    d[j] = x;
  }

// Prezentujemy wyniki

  x = (N + 1) / 2; k = 2;
  for(i = 1; i <= N; i++)
  {
    for(j = 1; j <= x - 1; j++)  ui -> label_3 ->setText(" ");

    str.setNum(d[i]);
   ui -> label_3 ->  setText( str );
    for(j = 1; j <= x; j++) ui -> label_3 ->setText(" ");
    if(i + 1 == k)
    {
      k += k; x /= 2;
    }
  }
}


