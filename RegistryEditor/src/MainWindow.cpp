#include "../include/MainWindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/img/window_icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
