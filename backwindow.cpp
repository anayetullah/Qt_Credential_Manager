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


void BackWindow::on_clearButton_clicked()
{
    ui->accEdit->clear();
    ui->usrEdit->clear();
    ui->passEdit->clear();
}

void BackWindow::on_saveButton_clicked()
{
    QString accSave = ui->accEdit->text();
    QString usrSave = ui->usrEdit->text();
    QString passSave = ui->passEdit->text();

    if(accSave == NULL || usrSave == NULL || passSave == NULL)
    {
        ui->saveLabel->setText(" Please enter all fields - account , username and password \n then press save button");
    }
    else
    {
        accList.push_back(Accounts(accSave,usrSave,passSave));

        ui->accEdit->clear();
        ui->usrEdit->clear();
        ui->passEdit->clear();
    }

}

void BackWindow::on_loadButton_clicked()
{
    QString accLoad = ui->accEdit->text();
    bool found = false;
    for(int i=0; i<accList.size(); i++)
    {
        if(accLoad == accList[i].accName)
        {
            found = true;
            ui->usrEdit->setText(accList[i].name);
            ui->passEdit->setText(accList[i].pass);
            break;
        }
    }
    if(found == false)
    {
        ui->saveLabel->setText("Account information not found. \nPlease enter a corrent account name.");
        ui->accEdit->clear();
        ui->usrEdit->clear();
        ui->passEdit->clear();
    }
}

void BackWindow::on_quitButton_clicked()
{
     qApp->exit();
}
