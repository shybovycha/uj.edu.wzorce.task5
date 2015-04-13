#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MyTextEdit* edit = new MyTextEdit();
    ui->gridLayout->addWidget(edit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
