#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    sfmlProcess = new QProcess(this);
    connect(ui->select_level_button, &QPushButton::clicked, this, &MainWindow::on_select_level_button_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_select_level_button_clicked()
{

    QString sfmlAppPath = "/home/michal/Studia/PSIO/Projekt/build/projekt";

    sfmlProcess->start(sfmlAppPath);
}

