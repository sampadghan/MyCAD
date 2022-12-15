#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MYCAD.h"

class MYCAD : public QMainWindow
{
    Q_OBJECT

public:
    MYCAD(QWidget *parent = nullptr);
    ~MYCAD();
    

private:
    Ui::MYCADClass ui;
};
