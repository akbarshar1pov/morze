/********************************************************************************
** Form generated from reading UI file 'mainwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW2_H
#define UI_MAINWINDOW2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow2
{
public:
    QAction *actionRussian;
    QAction *actionEnglish;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *sound_type;
    QPushButton *Replay;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *EngLan;
    QRadioButton *RusLan;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *question;
    QLineEdit *answer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *TRUE;
    QLabel *_True;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *FALSE;
    QLabel *_False;
    QVBoxLayout *verticalLayout_8;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuLenguage;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(694, 324);
        MainWindow2->setMinimumSize(QSize(470, 230));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow2->setWindowIcon(icon);
        MainWindow2->setIconSize(QSize(24, 24));
        actionRussian = new QAction(MainWindow2);
        actionRussian->setObjectName(QString::fromUtf8("actionRussian"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/russia flag icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRussian->setIcon(icon1);
        actionEnglish = new QAction(MainWindow2);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/usa flag icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnglish->setIcon(icon2);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        sound_type = new QCheckBox(centralwidget);
        sound_type->setObjectName(QString::fromUtf8("sound_type"));

        verticalLayout_10->addWidget(sound_type);


        horizontalLayout_4->addLayout(verticalLayout_10);

        Replay = new QPushButton(centralwidget);
        Replay->setObjectName(QString::fromUtf8("Replay"));
        Replay->setMinimumSize(QSize(50, 50));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        Replay->setIcon(icon3);

        horizontalLayout_4->addWidget(Replay);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        EngLan = new QRadioButton(centralwidget);
        EngLan->setObjectName(QString::fromUtf8("EngLan"));
        EngLan->setIcon(icon2);
        EngLan->setChecked(true);

        verticalLayout_7->addWidget(EngLan);

        RusLan = new QRadioButton(centralwidget);
        RusLan->setObjectName(QString::fromUtf8("RusLan"));
        RusLan->setIcon(icon1);

        verticalLayout_7->addWidget(RusLan);


        horizontalLayout_7->addLayout(verticalLayout_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        question = new QLabel(centralwidget);
        question->setObjectName(QString::fromUtf8("question"));

        verticalLayout_9->addWidget(question);

        answer = new QLineEdit(centralwidget);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setEnabled(true);

        verticalLayout_9->addWidget(answer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        OK = new QPushButton(centralwidget);
        OK->setObjectName(QString::fromUtf8("OK"));

        horizontalLayout_5->addWidget(OK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_9);

        horizontalSpacer_4 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TRUE = new QLabel(centralwidget);
        TRUE->setObjectName(QString::fromUtf8("TRUE"));

        verticalLayout_5->addWidget(TRUE);


        horizontalLayout_2->addLayout(verticalLayout_5);

        _True = new QLabel(centralwidget);
        _True->setObjectName(QString::fromUtf8("_True"));

        horizontalLayout_2->addWidget(_True);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        FALSE = new QLabel(centralwidget);
        FALSE->setObjectName(QString::fromUtf8("FALSE"));

        verticalLayout_6->addWidget(FALSE);


        horizontalLayout_3->addLayout(verticalLayout_6);

        _False = new QLabel(centralwidget);
        _False->setObjectName(QString::fromUtf8("_False"));

        horizontalLayout_3->addWidget(_False);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));

        horizontalLayout_3->addLayout(verticalLayout_8);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 694, 26));
        menuLenguage = new QMenu(menubar);
        menuLenguage->setObjectName(QString::fromUtf8("menuLenguage"));
        MainWindow2->setMenuBar(menubar);

        menubar->addAction(menuLenguage->menuAction());
        menuLenguage->addAction(actionRussian);
        menuLenguage->addAction(actionEnglish);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        actionRussian->setText(QCoreApplication::translate("MainWindow2", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow2", "English", nullptr));
        sound_type->setText(QCoreApplication::translate("MainWindow2", "\320\227\320\262\321\203\320\272", nullptr));
        Replay->setText(QString());
#if QT_CONFIG(shortcut)
        Replay->setShortcut(QCoreApplication::translate("MainWindow2", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        EngLan->setText(QCoreApplication::translate("MainWindow2", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        RusLan->setText(QCoreApplication::translate("MainWindow2", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        question->setText(QString());
        OK->setText(QCoreApplication::translate("MainWindow2", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        OK->setShortcut(QCoreApplication::translate("MainWindow2", "Enter, Return", nullptr));
#endif // QT_CONFIG(shortcut)
        TRUE->setText(QCoreApplication::translate("MainWindow2", "\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
        _True->setText(QCoreApplication::translate("MainWindow2", "0", nullptr));
        FALSE->setText(QCoreApplication::translate("MainWindow2", "\320\275\320\265\320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \320\276\321\202\320\262\320\265\321\202\320\276\320\262", nullptr));
        _False->setText(QCoreApplication::translate("MainWindow2", "0", nullptr));
        menuLenguage->setTitle(QCoreApplication::translate("MainWindow2", "\320\257\320\267\321\213\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
