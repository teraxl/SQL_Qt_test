#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConnect_Database_triggered()
{
    login = new Login();
    login->show();
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit(0);
}
