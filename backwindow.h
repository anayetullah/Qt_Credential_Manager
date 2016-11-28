#ifndef BACKWINDOW_H
#define BACKWINDOW_H

#include <QMainWindow>

namespace Ui {
class BackWindow;
}

class BackWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BackWindow(QWidget *parent = 0);
    ~BackWindow();

private:
    Ui::BackWindow *ui;
};

#endif // BACKWINDOW_H
