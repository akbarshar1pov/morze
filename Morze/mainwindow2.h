#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

private slots:
    void on_new_latter_clicked();
    void on_OK_clicked();
    void on_russian_language_triggered();
    void on_english_language_triggered();
    void on_sound_type_stateChanged(int arg1);
    void on_Replay_clicked();

    void on_EngLan_clicked();

    void on_RusLan_clicked();

private:
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
