#ifndef SIGNALSLOTMAINWINDOW_H
#define SIGNALSLOTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SignalSlotMainWindow;
}

class SignalSlotMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignalSlotMainWindow(QWidget *parent = 0);
    ~SignalSlotMainWindow();

private:
    Ui::SignalSlotMainWindow *ui;
};

#endif // SIGNALSLOTMAINWINDOW_H
