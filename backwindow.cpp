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

void BackWindow::on_pushButton_4_clicked()
{
    qApp->exit();
}
