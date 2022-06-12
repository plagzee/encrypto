/********************************************************************************
** Form generated from reading UI file 'Encrypto3.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTO3_H
#define UI_ENCRYPTO3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Encrypto3Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Encrypto3Class)
    {
        if (Encrypto3Class->objectName().isEmpty())
            Encrypto3Class->setObjectName(QString::fromUtf8("Encrypto3Class"));
        Encrypto3Class->resize(600, 400);
        menuBar = new QMenuBar(Encrypto3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Encrypto3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Encrypto3Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Encrypto3Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Encrypto3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Encrypto3Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Encrypto3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Encrypto3Class->setStatusBar(statusBar);

        retranslateUi(Encrypto3Class);

        QMetaObject::connectSlotsByName(Encrypto3Class);
    } // setupUi

    void retranslateUi(QMainWindow *Encrypto3Class)
    {
        Encrypto3Class->setWindowTitle(QCoreApplication::translate("Encrypto3Class", "Encrypto3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Encrypto3Class: public Ui_Encrypto3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTO3_H
