/********************************************************************************
** Form generated from reading UI file 'studywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDYWINDOW_H
#define UI_STUDYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studywindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studywindow)
    {
        if (studywindow->objectName().isEmpty())
            studywindow->setObjectName(QString::fromUtf8("studywindow"));
        studywindow->resize(1000, 638);
        action = new QAction(studywindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(studywindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(studywindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        textBrowser->setFont(font);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        studywindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studywindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        studywindow->setMenuBar(menubar);
        statusbar = new QStatusBar(studywindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        studywindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(studywindow);

        QMetaObject::connectSlotsByName(studywindow);
    } // setupUi

    void retranslateUi(QMainWindow *studywindow)
    {
        studywindow->setWindowTitle(QCoreApplication::translate("studywindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("studywindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        action_2->setText(QCoreApplication::translate("studywindow", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("studywindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:21px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:x-large; font-weight:600; background-color:#ffffff;\"><br /></p></body></html>", nullptr));
        menu->setTitle(QCoreApplication::translate("studywindow", "\320\257\320\267\321\213\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studywindow: public Ui_studywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDYWINDOW_H
