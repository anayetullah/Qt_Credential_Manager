#include "backwindow.h"
#include "ui_backwindow.h"

BackWindow::BackWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BackWindow)
{
    ui->setupUi(this);
}

BackWindow::~BackWindow()
{
    delete ui;
}
