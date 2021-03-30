/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_history
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *text_2;
    QTextBrowser *text_morze_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName(QString::fromUtf8("history"));
        history->resize(700, 377);
        centralwidget = new QWidget(history);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(41, 21, 611, 291));
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setEnabled(true);
        comboBox_2->setMinimumSize(QSize(200, 20));

        horizontalLayout_3->addWidget(comboBox_2);

        horizontalSpacer_2 = new QSpacerItem(200, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        splitter->addWidget(widget);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        text_2 = new QTextBrowser(widget1);
        text_2->setObjectName(QString::fromUtf8("text_2"));

        horizontalLayout_4->addWidget(text_2);

        text_morze_2 = new QTextBrowser(widget1);
        text_morze_2->setObjectName(QString::fromUtf8("text_morze_2"));

        horizontalLayout_4->addWidget(text_morze_2);

        splitter->addWidget(widget1);
        history->setCentralWidget(centralwidget);
        menubar = new QMenuBar(history);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 26));
        history->setMenuBar(menubar);
        statusbar = new QStatusBar(history);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        history->setStatusBar(statusbar);

        retranslateUi(history);

        QMetaObject::connectSlotsByName(history);
    } // setupUi

    void retranslateUi(QMainWindow *history)
    {
        history->setWindowTitle(QCoreApplication::translate("history", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
