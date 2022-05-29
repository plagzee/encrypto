#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMessageBox>
#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("N/A");
}

char get_operating_system()
{
    #ifdef Q_OS_WIN
        return 'w';
    #elif defined(Q_OS_LINUX)
        return 'l';
    #elif defined(Q_OS_MAC)
        return 'm';
    #else
        return 'o';
    #endif
}

void MainWindow::on_browse_btn_clicked()
{

    QString default_file_location = "N/A";


    char os = get_operating_system();
    if(os == 'w') {
        default_file_location = "C://";
    } else if (os == 'l') {
        default_file_location = "/home/";
    } else if (os == 'm') {
        default_file_location = "/Users/";
    } else {
        default_file_location = "/";
    }

    QString file_name = QFileDialog::getOpenFileName(this, "Choose a file", QDir::homePath());

    if(file_name.isEmpty()) {
        QMessageBox::information(this, "Error", "No file selected");
        return;
    }

    if(file_name.isNull()) {
        QMessageBox::information(this, "Error", "No file selected");
        return;
    }

    if(file_name == "") {
        QMessageBox::information(this, "Error", "No file selected");
        return;
    }

    ui->label->setText(file_name);
}


MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    return;
}

