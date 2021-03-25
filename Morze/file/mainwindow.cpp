#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <bits/stdc++.h>

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

void MainWindow::on_pushButton_clicked()
{
    srand(time(0));
    QString line = ui->lineEdit->text();
    QFile file(line);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        ui->statusBar->showMessage(line + " error open!", 5000);
        ui->textBrowser->clear();
        return;
    }
    QString text;
    QTextStream stream(&file), lineIn(&text);
    int N = rand()%2000+1;
    for(int i=1;!stream.atEnd();++i){
        text = stream.readLine();
        if(i == N){
            ui->textBrowser->setText(QString::number(N) + "  " + text);
            return;
        }
    }
}
