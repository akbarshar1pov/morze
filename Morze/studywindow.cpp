#include "studywindow.h"
#include "ui_studywindow.h"

studywindow::studywindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studywindow)
{}

studywindow::~studywindow()
{
    delete ui;
}
