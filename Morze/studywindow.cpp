#include "studywindow.h"
#include "ui_studywindow.h"


studywindow::studywindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studywindow)
{
    ui->setupUi(this);
    QPixmap pix("");
    ui->label->setStyleSheet("border-image:url(:/img/englishAlphabet.png)");
    ui->label_2->setStyleSheet("border-image:url(:/img/numbers.jpg)");
    ui->label->setPixmap(pix);
    ui->label_2->setPixmap(pix);
    if(QLocale::system().name() == "ru_RU") {
        on_action_triggered();
    } else {
        on_action_2_triggered();
    }
}

studywindow::~studywindow()
{
    delete ui;
}

void studywindow::on_action_triggered()
{
    QFile russianFile(":/russianFile.txt");

    if(!russianFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "title", "file not open");
    }
    QTextStream in(&russianFile);
    QString text = in.readAll();
    ui->textBrowser->setPlainText(text);
    qDebug() << text;
    russianFile.close();
}

void studywindow::on_action_2_triggered()
{
    QFile englishFile(":/englishFile.txt");

    if(!englishFile.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "title", "file not open");
    }
    QTextStream in(&englishFile);
    QString text = in.readAll();
    ui->textBrowser->setPlainText(text);
    qDebug() << text;

    englishFile.close();
}
