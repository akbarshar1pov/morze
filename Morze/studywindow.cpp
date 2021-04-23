#include "studywindow.h"
#include "ui_studywindow.h"

studywindow::studywindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studywindow)
{
    ui->setupUi(this);
}

studywindow::~studywindow()
{
    delete ui;
}
