#ifndef STUDYWINDOW_H
#define STUDYWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QDesktopServices>

namespace Ui {
class studywindow;
}

class studywindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit studywindow(QWidget *parent = nullptr);
    ~studywindow();

private:
    Ui::studywindow *ui;
};

#endif // STUDYWINDOW_H
