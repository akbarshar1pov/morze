/********************************************************************************
** Form generated from reading UI file 'mainwindow3.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW3_H
#define UI_MAINWINDOW3_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow3
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow3)
    {
        if (MainWindow3->objectName().isEmpty())
            MainWindow3->setObjectName(QString::fromUtf8("MainWindow3"));
        MainWindow3->resize(575, 375);
        MainWindow3->setMinimumSize(QSize(575, 375));
        MainWindow3->setMaximumSize(QSize(575, 375));
        centralwidget = new QWidget(MainWindow3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 220, 161, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 140, 141, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(480, 10, 97, 57));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/usa flag icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton->setIcon(icon);
        radioButton->setChecked(true);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/russia flag icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButton_2->setIcon(icon1);

        verticalLayout->addWidget(radioButton_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(222, 180, 141, 22));
        MainWindow3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 575, 26));
        MainWindow3->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow3->setStatusBar(statusbar);

        retranslateUi(MainWindow3);

        QMetaObject::connectSlotsByName(MainWindow3);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow3)
    {
        MainWindow3->setWindowTitle(QCoreApplication::translate("MainWindow3", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow3", "New Word!!!", nullptr));
        label->setText(QString());
        radioButton->setText(QCoreApplication::translate("MainWindow3", "English", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow3", "Russian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow3: public Ui_MainWindow3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW3_H
