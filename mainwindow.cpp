#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(btnFun()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::btnFun()
{
    QString vehicle=ui->comboBox->currentText();
    QString days=ui->lineEdit->text();
    int days_int=days.toInt();
    int bill=0;
    if (vehicle=="car")
        bill=4000*days_int;

}

