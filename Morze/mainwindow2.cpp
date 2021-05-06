#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <windows.h>
#include "resource.h"

QString word;
bool RussianLanguage = false;
bool EnglishLanguage = true;
int positivePoints = 0;
int negativePoints = 0;


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    positivePoints = 0;
    negativePoints = 0;
    ui->Replay->setEnabled(false);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

/*Выбор языка*/

void swapLanguage(){
    EnglishLanguage = !EnglishLanguage;
    RussianLanguage = !RussianLanguage;
}


void MainWindow2::on_russian_language_clicked(){
    swapLanguage();
}

void MainWindow2::on_english_language_clicked(){
    swapLanguage();
}

/**<---------------------------------------------------->**/

void MainWindow2::on_new_latter_clicked(){
    ui->question->setAlignment(Qt::AlignCenter);
    if(RussianLanguage){
        int N = rand()%32;
        word = RussianMorseCode[N];
        ui->question->setText(word + "  " +RussianLetters[N]);
    }
    else if(EnglishLanguage){
        int N = rand()%26;
        word = EnglishMorseCode[N];
        ui->question->setText(word + "  " + QString(char(65+N)));
    }
    if(ui->Replay->isEnabled()){
         on_replay_clicked();
    }

}

void MainWindow2::on_OK_clicked()
{
    QString word2 = ui->answer->text();
    if(word.replace(L'•', '.') == word2){
        ++positivePoints;
       ui->_True->setText(QString::number(positivePoints));
       ui->answer->clear();
       on_new_latter_clicked();
    }
    else{
        ++negativePoints;
        ui->_False->setText(QString::number(negativePoints));
    }
}

void MainWindow2::on_replay_clicked()
{
    for(int i=0; i < word.size(); ++i){
        if(word[i] == '.'){
            Beep(1000,250);
        }
        else if(word[i] == '-'){
            Beep(1000,500);
        }
    }
    Sleep(500);
}

void MainWindow2::on_russian_language_triggered()
{
    ui->menuLenguage->setTitle("Язык");
    ui->RusLan->setText("Русский язык");
    ui->EngLan->setText("Английский язык");
}

void MainWindow2::on_english_language_triggered()
{
    ui->menuLenguage->setTitle("Lenguage");
    ui->RusLan->setText("Russian lenguage");
    ui->EngLan->setText("English lenguage");
}

void MainWindow2::on_sound_type_stateChanged(int arg1)
{
    if(arg1 == 0){
        ui->Replay->setEnabled(false);
    }
    else {
        ui->Replay->setEnabled(true);
    }
}
