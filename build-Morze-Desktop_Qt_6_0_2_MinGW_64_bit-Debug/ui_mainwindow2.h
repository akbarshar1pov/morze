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
    QAction *actionTajik;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *TRUE;
    QLabel *FALSE;
    QVBoxLayout *verticalLayout_6;
    QLabel *_True;
    QLabel *_False;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Replay;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *EngLan;
    QRadioButton *RusLan;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_8;
    QLineEdit *otvet;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *_TEXT;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuLenguage;

    void setupUi(QMainWindow *MainWindow2)
    {
        if (MainWindow2->objectName().isEmpty())
            MainWindow2->setObjectName(QString::fromUtf8("MainWindow2"));
        MainWindow2->resize(470, 230);
        MainWindow2->setMinimumSize(QSize(470, 230));
        MainWindow2->setMaximumSize(QSize(470, 230));
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
        actionTajik = new QAction(MainWindow2);
        actionTajik->setObjectName(QString::fromUtf8("actionTajik"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/tajikistan flag icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTajik->setIcon(icon3);
        centralwidget = new QWidget(MainWindow2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 140, 104, 43));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        TRUE = new QLabel(layoutWidget);
        TRUE->setObjectName(QString::fromUtf8("TRUE"));

        verticalLayout_5->addWidget(TRUE);

        FALSE = new QLabel(layoutWidget);
        FALSE->setObjectName(QString::fromUtf8("FALSE"));

        verticalLayout_5->addWidget(FALSE);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        _True = new QLabel(layoutWidget);
        _True->setObjectName(QString::fromUtf8("_True"));

        verticalLayout_6->addWidget(_True);

        _False = new QLabel(layoutWidget);
        _False->setObjectName(QString::fromUtf8("_False"));

        verticalLayout_6->addWidget(_False);


        horizontalLayout_2->addLayout(verticalLayout_6);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 101, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Replay = new QPushButton(layoutWidget1);
        Replay->setObjectName(QString::fromUtf8("Replay"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        Replay->setIcon(icon4);

        horizontalLayout_4->addWidget(Replay);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(330, 0, 152, 57));
        verticalLayout_7 = new QVBoxLayout(layoutWidget2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        EngLan = new QRadioButton(layoutWidget2);
        EngLan->setObjectName(QString::fromUtf8("EngLan"));
        EngLan->setIcon(icon2);
        EngLan->setChecked(true);

        verticalLayout_7->addWidget(EngLan);

        RusLan = new QRadioButton(layoutWidget2);
        RusLan->setObjectName(QString::fromUtf8("RusLan"));
        RusLan->setIcon(icon1);

        verticalLayout_7->addWidget(RusLan);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(330, 152, 135, 31));
        verticalLayout_8 = new QVBoxLayout(layoutWidget3);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        otvet = new QLineEdit(layoutWidget3);
        otvet->setObjectName(QString::fromUtf8("otvet"));

        verticalLayout_8->addWidget(otvet);

        layoutWidget4 = new QWidget(centralwidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(-20, 60, 501, 63));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        _TEXT = new QLineEdit(layoutWidget4);
        _TEXT->setObjectName(QString::fromUtf8("_TEXT"));

        verticalLayout_9->addWidget(_TEXT);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        OK = new QPushButton(layoutWidget4);
        OK->setObjectName(QString::fromUtf8("OK"));

        horizontalLayout_5->addWidget(OK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_9);

        horizontalSpacer_4 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        MainWindow2->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow2->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 470, 26));
        menuLenguage = new QMenu(menubar);
        menuLenguage->setObjectName(QString::fromUtf8("menuLenguage"));
        MainWindow2->setMenuBar(menubar);

        menubar->addAction(menuLenguage->menuAction());
        menuLenguage->addAction(actionRussian);
        menuLenguage->addAction(actionEnglish);
        menuLenguage->addAction(actionTajik);

        retranslateUi(MainWindow2);

        QMetaObject::connectSlotsByName(MainWindow2);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow2)
    {
        MainWindow2->setWindowTitle(QCoreApplication::translate("MainWindow2", "MainWindow", nullptr));
        actionRussian->setText(QCoreApplication::translate("MainWindow2", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow2", "English", nullptr));
        actionTajik->setText(QCoreApplication::translate("MainWindow2", "\320\242\320\276\322\267\320\270\320\272\323\243", nullptr));
        TRUE->setText(QCoreApplication::translate("MainWindow2", "True", nullptr));
        FALSE->setText(QCoreApplication::translate("MainWindow2", "False", nullptr));
        _True->setText(QCoreApplication::translate("MainWindow2", "0", nullptr));
        _False->setText(QCoreApplication::translate("MainWindow2", "0", nullptr));
        Replay->setText(QString());
#if QT_CONFIG(shortcut)
        Replay->setShortcut(QCoreApplication::translate("MainWindow2", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        EngLan->setText(QCoreApplication::translate("MainWindow2", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        RusLan->setText(QCoreApplication::translate("MainWindow2", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271 \321\217\320\267\321\213\320\272", nullptr));
        OK->setText(QCoreApplication::translate("MainWindow2", "OK", nullptr));
#if QT_CONFIG(shortcut)
        OK->setShortcut(QCoreApplication::translate("MainWindow2", "Enter, Return", nullptr));
#endif // QT_CONFIG(shortcut)
        menuLenguage->setTitle(QCoreApplication::translate("MainWindow2", "\320\257\320\267\321\213\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow2: public Ui_MainWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW2_H
