/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit;
    QAction *sound;
    QAction *toRussion;
    QAction *toEnglish;
    QAction *toTojik;
    QAction *openFile;
    QAction *saveFile;
    QAction *Fusion;
    QAction *Windows;
    QAction *WindowsXP;
    QAction *WindowVista;
    QAction *letters;
    QAction *words;
    QAction *sentences;
    QAction *nightMode;
    QAction *night_mode;
    QAction *study;
    QAction *history;
    QAction *history_2;
    QAction *actionSaveInHistory;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *textInputFields;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *textBrowser;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *view;
    QMenu *language;
    QMenu *Thems;
    QMenu *control;
    QMenu *menu_5;
    QMenu *menu_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 320);
        MainWindow->setMinimumSize(QSize(550, 320));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(34, 34));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("img/Icon_close.svg"), QSize(), QIcon::Normal, QIcon::Off);
        exit->setIcon(icon1);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        exit->setFont(font);
        sound = new QAction(MainWindow);
        sound->setObjectName(QString::fromUtf8("sound"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        sound->setIcon(icon2);
        toRussion = new QAction(MainWindow);
        toRussion->setObjectName(QString::fromUtf8("toRussion"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("img/russia-flag-icon-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        toRussion->setIcon(icon3);
        toEnglish = new QAction(MainWindow);
        toEnglish->setObjectName(QString::fromUtf8("toEnglish"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("img/united-states-of-america-flag-icon-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        toEnglish->setIcon(icon4);
        toTojik = new QAction(MainWindow);
        toTojik->setObjectName(QString::fromUtf8("toTojik"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("img/tajikistan-flag-icon-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        toTojik->setIcon(icon5);
        openFile = new QAction(MainWindow);
        openFile->setObjectName(QString::fromUtf8("openFile"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("img/Tilda_Icons_30_system_folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        openFile->setIcon(icon6);
        saveFile = new QAction(MainWindow);
        saveFile->setObjectName(QString::fromUtf8("saveFile"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("img/Tilda_Icons_30_system_save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        saveFile->setIcon(icon7);
        Fusion = new QAction(MainWindow);
        Fusion->setObjectName(QString::fromUtf8("Fusion"));
        Windows = new QAction(MainWindow);
        Windows->setObjectName(QString::fromUtf8("Windows"));
        WindowsXP = new QAction(MainWindow);
        WindowsXP->setObjectName(QString::fromUtf8("WindowsXP"));
        WindowVista = new QAction(MainWindow);
        WindowVista->setObjectName(QString::fromUtf8("WindowVista"));
        letters = new QAction(MainWindow);
        letters->setObjectName(QString::fromUtf8("letters"));
        words = new QAction(MainWindow);
        words->setObjectName(QString::fromUtf8("words"));
        sentences = new QAction(MainWindow);
        sentences->setObjectName(QString::fromUtf8("sentences"));
        nightMode = new QAction(MainWindow);
        nightMode->setObjectName(QString::fromUtf8("nightMode"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/dark-mode.png"), QSize(), QIcon::Normal, QIcon::Off);
        nightMode->setIcon(icon8);
        night_mode = new QAction(MainWindow);
        night_mode->setObjectName(QString::fromUtf8("night_mode"));
        night_mode->setIcon(icon8);
        study = new QAction(MainWindow);
        study->setObjectName(QString::fromUtf8("study"));
        history = new QAction(MainWindow);
        history->setObjectName(QString::fromUtf8("history"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/history.png"), QSize(), QIcon::Normal, QIcon::Off);
        history->setIcon(icon9);
        history_2 = new QAction(MainWindow);
        history_2->setObjectName(QString::fromUtf8("history_2"));
        history_2->setIcon(icon9);
        actionSaveInHistory = new QAction(MainWindow);
        actionSaveInHistory->setObjectName(QString::fromUtf8("actionSaveInHistory"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveInHistory->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        textInputFields = new QPlainTextEdit(layoutWidget);
        textInputFields->setObjectName(QString::fromUtf8("textInputFields"));
        textInputFields->setMinimumSize(QSize(256, 180));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        textInputFields->setFont(font1);

        verticalLayout_2->addWidget(textInputFields);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 22));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Sans Serif"));
        font2.setPointSize(10);
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(layoutWidget1);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setFont(font1);

        verticalLayout->addWidget(textBrowser);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 550, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        view = new QMenu(menuBar);
        view->setObjectName(QString::fromUtf8("view"));
        language = new QMenu(view);
        language->setObjectName(QString::fromUtf8("language"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("img/icons8-language-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        language->setIcon(icon11);
        Thems = new QMenu(view);
        Thems->setObjectName(QString::fromUtf8("Thems"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("img/wive_icon.svg"), QSize(), QIcon::Normal, QIcon::Off);
        Thems->setIcon(icon12);
        control = new QMenu(menuBar);
        control->setObjectName(QString::fromUtf8("control"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        menu_6 = new QMenu(menu_5);
        menu_6->setObjectName(QString::fromUtf8("menu_6"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(textInputFields, textBrowser);

        mainToolBar->addAction(sound);
        mainToolBar->addSeparator();
        mainToolBar->addAction(nightMode);
        mainToolBar->addSeparator();
        mainToolBar->addAction(history);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSaveInHistory);
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(control->menuAction());
        menuBar->addAction(view->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(openFile);
        menu->addAction(saveFile);
        menu->addAction(exit);
        view->addAction(language->menuAction());
        view->addAction(Thems->menuAction());
        view->addAction(night_mode);
        language->addAction(toRussion);
        language->addAction(toEnglish);
        Thems->addAction(Fusion);
        Thems->addAction(Windows);
        Thems->addAction(WindowsXP);
        Thems->addAction(WindowVista);
        control->addAction(sound);
        control->addAction(history_2);
        menu_5->addAction(study);
        menu_5->addAction(menu_6->menuAction());
        menu_6->addAction(letters);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\267\320\261\321\203\320\272\320\260 \320\234\320\276\321\200\320\267\320\265", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
#if QT_CONFIG(tooltip)
        exit->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        exit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        sound->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        sound->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        toRussion->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        toEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        toTojik->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\261\320\276\320\275\320\270 \321\202\320\276\322\267\320\270\320\272\323\243", nullptr));
        openFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
#if QT_CONFIG(shortcut)
        openFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        saveFile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
#if QT_CONFIG(shortcut)
        saveFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        Fusion->setText(QCoreApplication::translate("MainWindow", "Fusion", nullptr));
        Windows->setText(QCoreApplication::translate("MainWindow", "Windows", nullptr));
        WindowsXP->setText(QCoreApplication::translate("MainWindow", "Windows Xp", nullptr));
        WindowVista->setText(QCoreApplication::translate("MainWindow", "Window Vista", nullptr));
        letters->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\272\320\262\321\213", nullptr));
        words->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\262\320\260", nullptr));
        sentences->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\320\273\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        nightMode->setText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
        night_mode->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\321\207\320\275\320\276\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
        study->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\203\321\207\320\270\321\202", nullptr));
        history->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
#if QT_CONFIG(shortcut)
        history->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_CONFIG(shortcut)
        history_2->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        actionSaveInHistory->setText(QCoreApplication::translate("MainWindow", "SaveInHistory", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202 \342\206\222 \320\272\320\276\320\264 \320\234\320\276\321\200\320\267\320\265", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \320\234\320\276\321\200\320\267\320\265 \342\206\222 \320\260\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\320\276\320\264 \320\234\320\276\321\200\320\267\320\265 \342\206\222 \321\200\321\203\321\201\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\320\220\320\267\320\261\321\203\320\272\320\260 \320\234\320\276\321\200\320\267\320\265", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        view->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264", nullptr));
        language->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\217\320\267\321\213\320\272\320\260", nullptr));
        Thems->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\202\320\265\320\274\321\213", nullptr));
        control->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\267\321\203\321\207\320\265\320\275\320\270\321\217/\321\202\320\265\321\201\321\202", nullptr));
        menu_6->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
