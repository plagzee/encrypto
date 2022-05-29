/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *browse_btn;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *keyEdit;
    QPushButton *encrypt_btn;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 800, 600));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: rgb(31, 31, 31)\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        browse_btn = new QPushButton(frame);
        browse_btn->setObjectName(QString::fromUtf8("browse_btn"));
        browse_btn->setGeometry(QRect(610, 60, 141, 51));
        browse_btn->setCursor(QCursor(Qt::PointingHandCursor));
        browse_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 22px;\n"
"	background-color: rgb(0, 255, 127);\n"
"	color: black;\n"
"	border-radius: 24px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: white;\n"
"	color: black;\n"
"	border: 6px solid rgb(0, 255, 127)\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 451, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-size: 18px;\n"
"	color: white;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(780, 580, 16, 16));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        keyEdit = new QLineEdit(frame);
        keyEdit->setObjectName(QString::fromUtf8("keyEdit"));
        keyEdit->setGeometry(QRect(50, 210, 291, 31));
        keyEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	font-size: 18px;\n"
"}"));
        encrypt_btn = new QPushButton(frame);
        encrypt_btn->setObjectName(QString::fromUtf8("encrypt_btn"));
        encrypt_btn->setGeometry(QRect(580, 200, 191, 41));
        encrypt_btn->setCursor(QCursor(Qt::PointingHandCursor));
        encrypt_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 18px;\n"
"	color: white;\n"
"	background-color: rgb(255, 90, 90)\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(188, 255, 183);\n"
"	color: black;\n"
"}"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 390, 801, 211));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	background-color: #2d2d2d;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 47, 13));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 70, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 90, 71, 16));
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 50, 47, 13));
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: green;\n"
"}"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 70, 47, 13));
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: green;\n"
"}"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(150, 90, 47, 13));
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: green;\n"
"}"));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 85, 80, 26));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        browse_btn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        encrypt_btn->setText(QCoreApplication::translate("MainWindow", "Encrpyt", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "OS Detected", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Keys Folder", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "/keys", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
