#ifndef BACKWINDOW_H
#define BACKWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "accounts.h"
#include "user.h"


namespace Ui {
class BackWindow;
}

class BackWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BackWindow(QWidget *parent = 0);
    ~BackWindow();

private slots:

    void on_clearButton_clicked();

    void on_saveButton_clicked();

    void on_loadButton_clicked();

    void on_quitButton_clicked();

private:
    Ui::BackWindow *ui;
    QVector<Accounts> accList;

};

#endif // BACKWINDOW_H
