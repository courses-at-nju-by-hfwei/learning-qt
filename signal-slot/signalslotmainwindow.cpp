#include "signalslotmainwindow.h"
#include "ui_signalslotmainwindow.h"

SignalSlotMainWindow::SignalSlotMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignalSlotMainWindow)
{
    ui->setupUi(this);

    connect(ui->verticalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
    connect(ui->verticalSlider, SIGNAL(valueChanged(int)),
            ui->horizontalSlider, SLOT(setValue(int)));
}

SignalSlotMainWindow::~SignalSlotMainWindow()
{
    delete ui;
}
