#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
#include <fstream>

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


void MainWindow::on_pushButton_write_clicked()
{
    std::string file_name = (ui->lineEdit_filename->text()).toStdString();
    std::string text = (ui -> lineEdit_text->text()).toStdString();
    std::ofstream file;
    file.open(file_name, std::ios::trunc);
    if (file.is_open()){
        file << text;
        QMessageBox::information(this, "Done.", "The text is written to the file.\n Check out the file now.");
        file.close();
        exit(0);
    } else {
        QMessageBox::critical(this, "Error", QString::fromStdString("Couldn't open the file named " + file_name + ". Please, try again."));
    }
}

void MainWindow::on_pushButton_cancel_clicked()
{
    exit(0);
}
