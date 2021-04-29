#include "history.h"
#include "ui_history.h"
#include "QFile"

void parsHistory();

history::history(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::history)
{
    ui->setupUi(this);
    QString NameLan = ":/file/history.txt";
    QFile history_file(NameLan);
    QString text = "";
    if(history_file.open(QFile::ReadOnly | QFile::Text)){
        QTextStream stream(&history_file);
        bool start = false, end = false;
        for(int i=0;!stream.atEnd();++i){
            text = stream.readLine();
            if(text[0] == '#'){
                start = true;
                end = false;
                continue;
            }
            else if(text[0] == '@'){
                start = false;
                end = true;
                continue;
            }
            if(start){
                ui->text_2->setPlaceholderText(text);
            }
            else if (end) {
                ui->text_morze_2->setPlaceholderText(text);
            }

        }
    }
    else{
    }
}

history::~history()
{
    delete ui;
}


void parsHistory(){


}
