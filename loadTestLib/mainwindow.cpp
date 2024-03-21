#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <test_lib_baru/test_lib_baru.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::onPushButtonClicked);
//    connect(ui.pushButton .pushButton, &QPushButton::clicked, this, &Widget::onPushButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPushButtonClicked()
{
    Test_lib_baru libBaru(this);

    libBaru.exec();
}

