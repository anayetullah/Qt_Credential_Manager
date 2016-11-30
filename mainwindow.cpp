#include "mainwindow.h"
#include "backwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    usr.name = "anayet";
    usr.pass = "admin";
    ui->passEdit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    QString u = ui->unameEdit->text();
    QString p = ui->passEdit->text();
    if(u == usr.name && p == usr.pass )
    {
        b.show();
        this->close();
    }
    else
    {
        ui->unameEdit->clear();
        ui->passEdit->clear();
        ui->mainWinLabel->setText("Wrong username or password \nTry again ... ");
    }

}
