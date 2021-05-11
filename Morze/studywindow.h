#ifndef STUDYWINDOW_H
#define STUDYWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QDesktopServices>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class studywindow;
}

class studywindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit studywindow(QWidget *parent = nullptr);
    ~studywindow();

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::studywindow *ui;
};

#endif // STUDYWINDOW_H
