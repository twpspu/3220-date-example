#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->calendarWidget->setVisible(false);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chooseDateButton_clicked()
{
    ui->calendarWidget->setVisible(true);
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    ui->dateEditTest->setDate(date);
    ui->calendarWidget->setVisible(false);
}
