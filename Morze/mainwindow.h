#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>

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
    void on_words_triggered();
    void on_sentences_triggered();
    void on_textInputFields_textChanged();
    void on_save_file_triggered();
    void on_history_2_triggered();
    void on_study_triggered();

    void on_history_triggered();

    void on_actionSaveInHistory_triggered();

    void on_saveFile_triggered();

private:
    bool Ru;
    bool changed;
    int position;
    bool is_russian(QChar ch);
    Ui::MainWindow *ui;
    QString to_morze(const QString & str);
    QString toREP(QString str);
    const QString RussianMorseCode[33] = {"•-", "-•••", "•--",  "--•",  "-••",  "•",  "•",  "•••-",  "--••",  "••",  "•---",  "-•-",  "•-••",  "--",  "-•",  "---",  "•--•",  "•-•",  "•••",  "-",  "••-",  "••-•",  "••••",  "-•-•",  "---•",  "----",  "--•-",  "--•--",  "-•--",  "-••-",  "••-••",  "••--",  "•-•-"};
    const QString RussianLetters[33] = {"а", "б", "в",  "г",  "д",  "е",  "ё",  "ж",  "з",  "и",  "й",  "к",  "л",  "м",  "н",  "о",  "п",  "р",  "с",  "т",  "у",  "ф",  "х",  "ц",  "ч",  "ш",  "щ",  "ъ",  "ы",  "ь",  "э",  "ю",  "я"};
    const QString RumberAndPunct[25] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ".", ",", ":", ";", "(", ")", "\'", "\"", "-", "/", "?", "!", "@", " ", "\n"};
    const QString NumberAndPunctMorseCode[25] = {"-----", "•----", "••---", "•••--", "••••-", "•••••", "-••••", "--•••", "---••", "----•", "••••••", "•-•-•-", "---•••", "-•-•-", "-•--•-", "-•--•-", "•----•", "•-••-•", "-••••-", "-••-•", "••--••", "--••--", "•--•-•", "", "\n"};
    const QString EnglishLetters[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    const QString EnglishMorseCode[26] = {"•-", "-•••", "-•-•", "-••", "•", "••-•", "--•", "••••", "••", "•---", "-•-", "•-••", "--", "-•", "---", "•--•", "--•-", "•-•", "•••", "-", "••-", "•••-", "•--", "-••-", "-•--", "--••"};
};

#endif // MAINWINDOW_H
