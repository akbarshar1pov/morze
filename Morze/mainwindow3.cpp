#include <mainwindow3.h>
#include <ui_mainwindow3.h>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>


QString NameLan = ":/file/English.txt";

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_pushButton_clicked()
{
        srand(time(0));
        QFile file(NameLan);
        if(!file.open(QFile::ReadOnly | QFile::Text)){
            ui->statusbar->showMessage(NameLan + " error open",5000);
            return;
        }
        QString text;
        QTextStream stream(&file), lineIn(&text);
        int N = rand()%20000+1;
        for(int i=0;!stream.atEnd();++i){
            text = stream.readLine();
            if(i == N){
                ui->label->setText(text);
                lineIn.flush();
                return;
            }
        }
}

void MainWindow3::on_radioButton_toggled(bool checked)
{
    if(checked){
        NameLan = ":/file/English.txt";
    }
}

void MainWindow3::on_radioButton_2_toggled(bool checked)
{
    if(checked){
        NameLan = ":/file/Russian.txt";
    }
}
