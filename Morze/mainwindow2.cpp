#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <windows.h>
#include "resource.h"

QString word = "start";
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
    word = "start";
    RussianLanguage = false;
    EnglishLanguage = true;
    ui->Replay->setEnabled(false);
    if(QLocale::system().name() == "ru_RU"){
        on_russian_language_triggered();
    }
    else{
        on_english_language_triggered();
    }
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

void MainWindow2::on_EngLan_clicked()
{
    swapLanguage();
}

void MainWindow2::on_RusLan_clicked()
{
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
         on_Replay_clicked();
    }

}

void MainWindow2::on_OK_clicked()
{
    if(ui->OK->text() == "Start" || ui->OK->text() == "Начать"){
        ui->OK->setText("Ok");
        on_new_latter_clicked();
    }
    else{
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

void MainWindow2::on_Replay_clicked()
{
    for (int i = 0; i < word.size(); ++i) {
        if (word[i] == '-') {
            Beep(1000, 500);
            Sleep(100);
        } else if (word[i] == ' ' && word[i+1] == ' ') {
            Sleep(700);
            i += 3;
        } else {
            Beep(1000, 250);
            Sleep(100);
        }
    }
}

void MainWindow2::on_answer_textChanged(const QString &arg1)
{
    QString text = arg1;
    ui->answer->setText(text.replace('.', L'•'));

}
