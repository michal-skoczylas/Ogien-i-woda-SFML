/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *select_level_button;
    QComboBox *level_combo_box;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(661, 455);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        select_level_button = new QPushButton(centralwidget);
        select_level_button->setObjectName("select_level_button");
        select_level_button->setGeometry(QRect(230, 70, 80, 25));
        level_combo_box = new QComboBox(centralwidget);
        level_combo_box->addItem(QString());
        level_combo_box->setObjectName("level_combo_box");
        level_combo_box->setGeometry(QRect(130, 110, 181, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 70, 141, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 70, 54, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 70, 141, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 661, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        select_level_button->setText(QCoreApplication::translate("MainWindow", "Wybierz", nullptr));
        level_combo_box->setItemText(0, QCoreApplication::translate("MainWindow", "Level 1", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Wybierz poziom", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Punkty:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\"Ilosc punkt\303\263w\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
