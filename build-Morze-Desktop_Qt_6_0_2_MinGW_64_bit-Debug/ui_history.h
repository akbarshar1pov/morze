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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *start;
    QDateEdit *start_from_date;
    QLabel *end;
    QDateEdit *end_from_date;
    QPushButton *sorted;
    QComboBox *data_of_translates;
    QSpacerItem *horizontal_spacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *text_2;
    QTextBrowser *text_morze_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *history)
    {
        if (history->objectName().isEmpty())
            history->setObjectName(QString::fromUtf8("history"));
        history->resize(933, 473);
        centralwidget = new QWidget(history);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        start = new QLabel(layoutWidget);
        start->setObjectName(QString::fromUtf8("start"));

        horizontalLayout_3->addWidget(start);

        start_from_date = new QDateEdit(layoutWidget);
        start_from_date->setObjectName(QString::fromUtf8("start_from_date"));

        horizontalLayout_3->addWidget(start_from_date);

        end = new QLabel(layoutWidget);
        end->setObjectName(QString::fromUtf8("end"));

        horizontalLayout_3->addWidget(end);

        end_from_date = new QDateEdit(layoutWidget);
        end_from_date->setObjectName(QString::fromUtf8("end_from_date"));

        horizontalLayout_3->addWidget(end_from_date);

        sorted = new QPushButton(layoutWidget);
        sorted->setObjectName(QString::fromUtf8("sorted"));

        horizontalLayout_3->addWidget(sorted);

        data_of_translates = new QComboBox(layoutWidget);
        data_of_translates->setObjectName(QString::fromUtf8("data_of_translates"));
        data_of_translates->setMinimumSize(QSize(400, 0));

        horizontalLayout_3->addWidget(data_of_translates);

        horizontal_spacer = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontal_spacer);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        text_2 = new QTextBrowser(layoutWidget1);
        text_2->setObjectName(QString::fromUtf8("text_2"));

        horizontalLayout_4->addWidget(text_2);

        text_morze_2 = new QTextBrowser(layoutWidget1);
        text_morze_2->setObjectName(QString::fromUtf8("text_morze_2"));

        horizontalLayout_4->addWidget(text_morze_2);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        history->setCentralWidget(centralwidget);
        menubar = new QMenuBar(history);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 933, 26));
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
        start->setText(QCoreApplication::translate("history", "\320\236\321\202", nullptr));
        end->setText(QCoreApplication::translate("history", "\320\224\320\276", nullptr));
        sorted->setText(QCoreApplication::translate("history", "\320\235\320\260\320\271\321\202\320\270", nullptr));
#if QT_CONFIG(shortcut)
        sorted->setShortcut(QCoreApplication::translate("history", "Enter, Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class history: public Ui_history {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
