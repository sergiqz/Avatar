/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_4;
    QComboBox *caritas;
    QLabel *l_area;
    QComboBox *ojitos;
    QLabel *label;
    QLabel *label_2;
    QComboBox *boquitas;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(554, 326);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 10, 46, 13));
        caritas = new QComboBox(centralWidget);
        caritas->setObjectName(QStringLiteral("caritas"));
        caritas->setGeometry(QRect(430, 30, 69, 22));
        l_area = new QLabel(centralWidget);
        l_area->setObjectName(QStringLiteral("l_area"));
        l_area->setGeometry(QRect(30, 10, 321, 261));
        ojitos = new QComboBox(centralWidget);
        ojitos->setObjectName(QStringLiteral("ojitos"));
        ojitos->setGeometry(QRect(430, 90, 69, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(430, 70, 46, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 130, 46, 13));
        boquitas = new QComboBox(centralWidget);
        boquitas->setObjectName(QStringLiteral("boquitas"));
        boquitas->setGeometry(QRect(430, 150, 69, 22));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 200, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 554, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "cara", 0));
        caritas->clear();
        caritas->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ninguno", 0)
         << QApplication::translate("MainWindow", "cara 1", 0)
         << QApplication::translate("MainWindow", "cara 2", 0)
         << QApplication::translate("MainWindow", "cara 3", 0)
        );
        l_area->setText(QApplication::translate("MainWindow", "lab", 0));
        ojitos->clear();
        ojitos->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ninguno", 0)
         << QApplication::translate("MainWindow", "enojado", 0)
         << QApplication::translate("MainWindow", "feliz", 0)
         << QApplication::translate("MainWindow", "pro", 0)
        );
        label->setText(QApplication::translate("MainWindow", "ojitos", 0));
        label_2->setText(QApplication::translate("MainWindow", "boca", 0));
        boquitas->clear();
        boquitas->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ninguno", 0)
         << QApplication::translate("MainWindow", "bocafeliz", 0)
         << QApplication::translate("MainWindow", "bocatriste", 0)
         << QApplication::translate("MainWindow", "bocaserio", 0)
        );
        pushButton->setText(QApplication::translate("MainWindow", "dibujar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
