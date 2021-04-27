#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    /*open an exisiting directory*/
        QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                         "C://",
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
        qDebug()<<"Your chosen directories is:"<<dir;

       /*To open a file*/
         QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        "/home",
                                                        tr("Images (*.png *.xpm *.jpg)"));
        qDebug()<<"Your chosen files is:"<<fileName;

       /*Open multiple files*/
         QStringList files = QFileDialog::getOpenFileNames(
                                this,
                                "Select one or more files to open",
                                "/home",
                                "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
         qDebug()<<"Your chosen directories is:"<<files;

        /* Save a file*/
         QString file_Name = QFileDialog::getSaveFileName(this, tr("Save File"),
                                    "/home/jana/untitled.png",
                                    tr("Images (*.png *.xpm *.jpg)"));
        qDebug()<<"Your chosen file name is:"<<file_Name;


}
