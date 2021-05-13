#include <mainwindow.h>
#include <ui_mainwindow.h>
#include "windows.h"
#include <QTranslator>
#include <QStyleFactory>
#include <QFileDialog>
#include <QFile>
#include <QApplication>
#include <QTextStream>
#include <mainwindow2.h>
#include <history.h>
#include <studywindow.h>
#include "resource.h"

bool chenger = true;
QString Save = "Сохранен";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Ru = true;
    changed = false;
    position = 0;
    SetIcons();
}

MainWindow::~MainWindow()
{
    delete ui;
};

/* Выход из программы */
void MainWindow::on_exit_triggered()
{
    QApplication::quit();
}
/**<---------------------------------------------------->**/

/* Присваивания иконок фракментам*/
void MainWindow::SetIcons(){
    ui->sound->setIcon(QIcon(":/img/sound.png"));
    ui->openFile->setIcon(QIcon(":/img/folder.png"));
    ui->saveFile->setIcon(QIcon(":/img/save.png"));
    ui->exit->setIcon(QIcon(":/img/exit.png"));
    ui->toRussion->setIcon(QIcon(":/img/russia flag icon.png"));
    ui->toEnglish->setIcon(QIcon(":/img/usa flag icon.png"));
    ui->toTojik->setIcon(QIcon(":/img/tajikistan flag icon.png"));
    ui->language->setIcon(QIcon(":/img/language.png"));
    ui->view->setIcon(QIcon(":/img/icons view.png"));
    ui->study->setIcon(QIcon(":/img/learn.png"));
    ui->menu_6->setIcon(QIcon(":/img/test.png"));
    ui->letters->setIcon(QIcon(":/img/letters.png"));
    ui->words->setIcon(QIcon(":/img/words.png"));
    ui->sentences->setIcon(QIcon(":/img/sentences.png"));
    ui->nightMode->setIcon(QIcon(":/img/dark-mode.png"));
    ui->Thems->setIcon(QIcon(":/img/themes.png"));
}
/**<---------------------------------------------------->**/

/* Воспроизвести шифр Морзе */
void MainWindow::on_sound_triggered()
{
    QString toM = ui->textBrowser->toPlainText();
    for (int i = 0; i < toM.size()-1; ++i) {
        if (toM[i] == '-') {
            Beep(1000, 500);
            Sleep(100);
        } else if (toM[i] == ' ' && toM[i+1] == ' ') {
            Sleep(700);
            i += 3;
        } else if(toM[i] == ' ') {
            Sleep(100);
        } else if (toM[i] == '\n') {
            Sleep(700);
        } else {
            Beep(1000, 250);
            Sleep(100);
        }
    }
}
/**<---------------------------------------------------->**/

/* Combo box для выбора языка перевода*/
void MainWindow::on_comboBox_activated(int index)
{
    switch (index) {
    case 0:
        ui->label_2->setText(QObject::tr("Азбука Морзе"));
        Ru = true;
        changed = false;
        if(position == 0) {
            // Ничего
        } else if (position == 1) {
            QString text = ui->textBrowser->toPlainText();
            QString morze = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(morze);
            ui->textInputFields->setPlainText(text);
        } else {
            QString text = ui->textBrowser->toPlainText();
            QString morze = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(morze);
            ui->textInputFields->setPlainText(text);
        }
        position = 0;
        ui->sound->setEnabled(true);
        break;
    case 1:
        ui->label_2->setText(QObject::tr("Английский язык"));
        Ru = false;
        changed = true;
        if(position == 0) {
            QString text = ui->textBrowser->toPlainText();
            QString morze = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(morze);
            ui->textInputFields->setPlainText(text);
        } else if (position == 1) {
            // Ничего
        } else {
            ui->textBrowser->setText("");
            QString str = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(toREP(str));
        }
        position = 1;
        ui->sound->setEnabled(false);
        break;
    case 2:
        ui->label_2->setText(QObject::tr("Русский язык"));
        Ru = true;
        changed = true;
        if(position == 0) {
            QString text = ui->textBrowser->toPlainText();
            QString morze = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(morze);
            ui->textInputFields->setPlainText(text);
        } else if (position == 1) {
            ui->textBrowser->setText("");
            QString str = ui->textInputFields->toPlainText();
            ui->textBrowser->setText(toREP(str));
        } else {
            // Ничего
        }
        position = 2;
        ui->sound->setEnabled(false);
        break;
    default:
        break;
    }
}
/**<---------------------------------------------------->**/

/* Язык интерфейса приложения */
void MainWindow::on_toEnglish_triggered()
{
    setWindowTitle("Morse code");
    ui->comboBox->setItemText(0, "Morse code");
    ui->comboBox->setItemText(1, "English");
    ui->comboBox->setItemText(2, "Russian language");
    ui->menu->setTitle("Menu");
    ui->control->setTitle("Control");
    ui->view->setTitle("View");
    ui->language->setTitle("Language");
    ui->menu_5->setTitle("Study/test");
    ui->exit->setText("Exit");
    ui->sound->setText("Play");
    ui->Thems->setTitle("Select type");
    ui->letters->setText("Letters");
    ui->words->setText("Words");
    ui->sentences->setText("Оffers");
    ui->study->setText("Learning");
    ui->openFile->setText("Open file");
    ui->saveFile->setText("Save in file");
    if(position == 0) {
        ui->label_2->setText("Morse code");
    } else if (position == 1) {
        ui->label_2->setText("English");
    } else if (position == 2) {
        ui->label_2->setText("Russian language");
    }
    Save = "Save";
}

void MainWindow::on_toRussion_triggered()
{
    setWindowTitle("Азбука Морзе");
    ui->comboBox->setItemText(0, "Азбука Морзе");
    ui->comboBox->setItemText(1, "Английский язык");
    ui->comboBox->setItemText(2, "Русский язык");
    ui->menu->setTitle("Меню");
    ui->menu->setTitle("Управление");
    ui->view->setTitle("Вид");
    ui->language->setTitle("Выбор языка");
    ui->menu_5->setTitle("Обучения/тест");
    ui->exit->setText("Выход");
    ui->sound->setText("Воспроизвести");
    ui->Thems->setTitle("Выбрать вид");
    ui->letters->setText("Буквы");
    ui->words->setText("Слова");
    ui->sentences->setText("Предложения");
    ui->study->setText("Обучения");
    ui->openFile->setText("Открыть файл");
    ui->saveFile->setText("Сохранить в файл");
    if(position == 0) {
        ui->label_2->setText("Азбука Морзе");
    } else if (position == 1) {
        ui->label_2->setText("Английский язык");
    } else if (position == 2) {
        ui->label_2->setText("Русский язык");
    }
    Save = "Сохранен";
}

/**<---------------------------------------------------->**/

/*** Темы для окон ***/
void MainWindow::on_Fusion_triggered()
{
    qApp->setStyle(QStyleFactory::create("Fusion"));
}

void MainWindow::on_Windows_triggered()
{
    qApp->setStyle(QStyleFactory::create("windows"));
}

void MainWindow::on_WindowsXP_triggered()
{
    qApp->setStyle(QStyleFactory::create("windowsxp"));
}

void MainWindow::on_WindowVista_triggered()
{
    qApp->setStyle(QStyleFactory::create("windowsvista"));
}
/**<---------------------------------------------------->**/

/*Способо изучения*/
void MainWindow::on_letters_triggered()
{
    MainWindow2 *test = new MainWindow2();
    test->show();
}


/**<---------------------------------------------------->**/

/* Ночной режым*/
void MainWindow::on_night_mode_triggered()
{
    if(chenger){
        // Создаём палитру для тёмной темы оформления
        QPalette darkPalette;
        // Настраиваем палитру для цветовых ролей элементов интерфейса
        darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::WindowText, Qt::white);
        darkPalette.setColor(QPalette::Base, QColor(25, 25, 25));
        darkPalette.setColor(QPalette::AlternateBase, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
        darkPalette.setColor(QPalette::ToolTipText, Qt::white);
        darkPalette.setColor(QPalette::Text, Qt::white);
        darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
        darkPalette.setColor(QPalette::ButtonText, Qt::white);
        darkPalette.setColor(QPalette::BrightText, Qt::red);
        darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::HighlightedText, Qt::black);
        // Устанавливаем данную палитру
        qApp->setPalette(darkPalette);
        ui->nightMode->setText("Light");
        ui->nightMode->setIcon(QIcon(":/img/light-mode.png"));
    }
    else{
        // Для возврата к светлой палитре достаточно
        // будет установить стандартную палитру из темы оформления
        qApp->setPalette(style()->standardPalette());
        ui->nightMode->setText("Dark");
        ui->nightMode->setIcon(QIcon(":/img/dark-mode.png"));
    }
    chenger = !chenger;
}

void MainWindow::on_nightMode_triggered()
{
    MainWindow::on_night_mode_triggered();
}
/**<---------------------------------------------------->**/

/*Перевод текста из файла */
void MainWindow::on_openFile_triggered()
{
    QString filePath = QFileDialog::getOpenFileName(this,tr("Open Document"),
                                                    QDir::currentPath(),
                                                    tr("text files (*.txt)"));
    QFile mFile(filePath);

    if(!mFile.open(QFile::ReadOnly | QFile::Text)) {
        ui->statusBar->showMessage(QObject::tr("Файл нe является текстовым"));
        return;
    }

    QTextStream stream(&mFile);
    QString buffer = stream.readAll();
    ui->textInputFields->setPlainText(buffer);
    ui->statusBar->showMessage(QObject::tr("Файл успешно открыт"));
    mFile.flush();
    mFile.close();
    MainWindow::on_textInputFields_textChanged();
}
/**<---------------------------------------------------->**/

/* Проверка поля ввода текста на изминения */
void MainWindow::on_textInputFields_textChanged()
{
    QString forTranslate = ui->textInputFields->toPlainText();
    forTranslate = forTranslate.toLower();
    if (changed) {
        QString str = toREP(forTranslate);
        if (str.isEmpty() && forTranslate.size() > 5) {
            ui->statusBar->showMessage(QObject::tr("Пустой ввод"), 3000);
        }
        ui->textBrowser->setText(str);
    } else {
        QString str = to_morze(forTranslate);
        ui->textBrowser->setText(str);
    }
}
/**<---------------------------------------------------->**/

/* Сохранения в файл */

void MainWindow::on_saveFile_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this,
        tr("Save Address Book"), "",
        tr("File name (*.txt);;All Files (*)"));

    QFile mFile(filePath);

    if(!mFile.open(QIODevice::ReadWrite)) {
        ui->statusBar->showMessage(QObject::tr("Файл нe является текстовым"));
        return;
    }
    QTextStream stream(&mFile);
    stream << ui->textBrowser->toPlainText();
    mFile.flush();
    mFile.close();
}

/**<---------------------------------------------------->**/

/* Перевод в морзе */
QString MainWindow::to_morze(const QString & str)
{
    QString _return;
    for (int i = 0; i < str.size(); ++i) {
        if (is_russian(str[i]))
            for (int j = 0; j < 33; ++j) {
                if (str[i] == RussianLetters[j]) {
                    _return += RussianMorseCode[j];
                    _return += " ";
                }
            }
        else
            for (int j = 0; j < 26; ++j) {
                if (str[i] == EnglishLetters[j]) {
                    _return += EnglishMorseCode[j];
                    _return += " ";
                }
            }
        for (int j = 0; j < 25; ++j) {
            if (str[i] == RumberAndPunct[j]) {
                _return += NumberAndPunctMorseCode[j];
                _return += " ";
            }
        }
    }
    return _return;
}
/**<---------------------------------------------------->**/

/* Проверка на кирилицу */
bool MainWindow::is_russian(QChar ch)
{
    for (int j = 0; j < 33; ++j) {
        if (ch == RussianLetters[j]) {
            return true;
        }
    }
    return false;
}
/**<---------------------------------------------------->**/

/* фигня для переноса текста с одного поля на другое*/
QString MainWindow::toREP(QString str)
{
    QString _return;
    QString morz;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '.') {
            str[i] = RussianMorseCode[5].at(0);
        }
    }
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') {
            morz += str[i];
        } else {
            if (Ru) {
                for (int i = 0; i < 33; ++i) {
                    if (morz == RussianMorseCode[i]) {
                        _return += RussianLetters[i];
                        break;
                    }
                }
            }  else {
                for (int i = 0; i < 26; ++i) {
                    if (morz == EnglishMorseCode[i]) {
                        _return += EnglishLetters[i];
                        break;
                    }
                }
            }
            for (int i = 0; i < 25; ++i) {
                if (morz == NumberAndPunctMorseCode[i]) {
                    _return += RumberAndPunct[i];
                    break;
                }
            }
            morz = "";
        }
    }
    return _return;
}
/**<---------------------------------------------------->**/

void MainWindow::on_history_2_triggered()
{
    history *test = new history();
    test->show();
}

void MainWindow::on_history_triggered()
{
    history *test = new history();
    test->show();
}

void MainWindow::on_study_triggered()
{
    studywindow *study = new studywindow();
    study->show();
}

/* сохраняем перевод в истории */
void MainWindow::on_actionSaveInHistory_triggered()
{
    QDateTime time = QDateTime();
    QString datatime = time.currentDateTime().toString(Qt::ISODate);
    QString text = ui->textInputFields->toPlainText();
    QString translate = ui->textBrowser->toPlainText();
    QDir dir;
    if (!dir.exists(HISTORY_PATH))
        dir.mkpath(HISTORY_PATH);
    QFile file(HISTORY_PATH + HISTORY_FILE_NAME);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Append)){
        ui->statusBar->showMessage(HISTORY_PATH, 5000);
        return;
    }
    else{
        QTextStream stream(&file);
                stream << "#QData\n"<< datatime << "\n#QStart\n" << text << "\n#QTranslate\n" << translate << "\n#QEnd\n";
                file.flush();
                file.close();
                ui->statusBar->showMessage(Save, 5000);
    }
    file.close();
}
/**<---------------------------------------------------->**/
