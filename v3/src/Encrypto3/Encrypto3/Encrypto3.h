#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Encrypto3.h"

class Encrypto3 : public QMainWindow
{
    Q_OBJECT

public:
    Encrypto3(QWidget *parent = nullptr);
    ~Encrypto3();

private:
    Ui::Encrypto3Class ui;
};
