#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>
#include "QDir"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_exit_triggered();
    void on_sound_triggered();
    void on_comboBox_activated(int index);
    void on_toEnglish_triggered();
    void on_toRussion_triggered();
    void on_openFile_triggered();
    void SetIcons();
    void on_night_mode_triggered();
    void on_Fusion_triggered();
    void on_Windows_triggered();
    void on_WindowsXP_triggered();
    void on_WindowVista_triggered();
    void on_nightMode_triggered();
    void on_letters_triggered();
    void on_textInputFields_textChanged();
    void on_save_file_triggered();
    void on_history_2_triggered();
    void on_study_triggered();
    void on_history_triggered();
    void on_actionSaveInHistory_triggered();
    void on_saveFile_triggered();

    void on_comboBox_activated(const QString &arg1);

private:
    bool Ru;
    bool changed;
    int position;
    bool is_russian(QChar ch);
    Ui::MainWindow *ui;
    QString to_morze(const QString & str);
    QString toREP(QString str);
};

#endif // MAINWINDOW_H
