#include "history.h"
#include "ui_history.h"
#include "QFile"
#include "QDir"
#include"QComboBox"
#include "resource.h"

QString FilePath = HISTORY_PATH + HISTORY_FILE_NAME;

history::history(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::history)
{
    ui->setupUi(this);
    parsHistory();
}

history::~history()
{
    delete ui;
}


void history::parsHistory(){
    QFile history_file(FilePath);
    QString text = "";
    if(history_file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream stream(&history_file);
        for(int i=0;!stream.atEnd();++i){
            text = stream.readLine();
            if(text == "#QData"){
                text = stream.readLine();
                ui->data_of_translates->addItem(text);
                continue;
            }
        }
    }
    on_data_of_translates_activated(0);
}


void history::on_sorted_clicked()
{
    ui->data_of_translates->clear();
    ui->text_2->clear();
    ui->text_morze_2->clear();
    QDate start = ui->start_from_date->date();
    QDate end = ui->end_from_date->date();
    if(start > end){
        qSwap(start, end);
    }

    QFile history_file(FilePath);
    QString text = "";

    if(history_file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream stream(&history_file);
        for(int i=0;!stream.atEnd();++i){
            text = stream.readLine();
            if(text == "#QData"){
                text = stream.readLine();
                QDate date(text.split('-')[0].toInt(),text.split('-')[1].toInt(),text.split('-')[2].split("T")[0].toInt());
                if(date >= start && date <= end ){
                    ui->data_of_translates->addItem(text);
                }
                continue;
            }
        }
    }
    on_data_of_translates_activated(0);
}


void history::on_data_of_translates_activated(int index)
{
    QString data = ui->data_of_translates->currentText();
    QFile history_file(FilePath);
    QString text = "";
    if(history_file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream stream(&history_file);
        bool start = false, translate = false;
        for(int i=0;!stream.atEnd();++i){
            text = stream.readLine();
            if(text == data){
                do{
                    text = stream.readLine();
                    if(text == "#QEnd"){
                        break;
                    }
                    else if(text == "#QStart"){
                        start = true;
                        translate = false;
                        continue;
                    }
                    else if(text == "#QTranslate"){
                        start = false;
                        translate = true;
                        continue;
                    }
                    if(start){
                        ui->text_2->setPlainText(text);
                    }
                    else if (translate) {
                        ui->text_morze_2->setPlainText(text);
                    }
                }while(true);
            }
        }
    }
}
