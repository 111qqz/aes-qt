#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QTime>

/*
================
MainWindow::MainWindow
Constructor
================
*/
MainWindow::MainWindow(QApplication *app) :
    QMainWindow(),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("AES-128 加密软件");
    connect(ui->buttonQuit, SIGNAL(clicked()), app, SLOT(quit()));
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_buttonEncrypt_clicked()
{
    time.start();
    int returncode = aes.InputForEncrypt(ui->lineEditInput->toPlainText().toStdString(), ui->lineEditKey->text().toStdString());

    if (returncode == 1) {
        ui->statusBar->showMessage(tr("没有输入明文"));
    }
    else if (returncode == 2) {
        ui->statusBar->showMessage(tr("秘钥最多１６位"));
    }
    else if (returncode == 3) {
        ui->statusBar->showMessage(tr("秘钥为空"));
    }
    else {
        ui->statusBar->clearMessage();

        string str = aes.Encrypt();

        ui->lineEditEncrypted->clear();
        ui->lineEditEncrypted->append(QString::fromUtf8( str.data(), str.size() ));
    }
}


void MainWindow::on_buttonDecrypt_clicked()
{
    time.start();
    int returncode = aes.InputForDecrypt(ui->lineEditEncrypted->toPlainText().toStdString(), ui->lineEditKey->text().toStdString());

    if (returncode == 1) {
        ui->statusBar->showMessage(tr("不是有效的密文"));
    }
    else if (returncode == 2) {
        ui->statusBar->showMessage(tr("秘钥最多１６位"));
    }
    else if (returncode == 3) {
        ui->statusBar->showMessage(tr("秘钥为空"));
    }
    else {
        ui->statusBar->clearMessage();

        string str = aes.Decrypt();

        ui->lineEditDecrypted->clear();
        ui->lineEditDecrypted->append(QString::fromUtf8( str.data(), str.size() ));
    }
}



void MainWindow::on_OpenFileButton_clicked()
{
    QString path = QFileDialog::getOpenFileName(this,
                                                tr("Open File"),
                                                ".",
                                                tr("Text Files(*.txt)"));

//     qDebug()<<"path:"<<path<<endl;

    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QMessageBox::warning(this, tr("Read File"),
                                 tr("无法打开文件:\n%1").arg(path));
            return;
        }
        QTextStream in(&file);
        QString QtextSt = in.readAll();
        ui->lineEditInput->setText(QtextSt);

        ui->InputFilePathLabel->setText(path);
       // textEdit->setText(QtextSt);

        //qDebug()<<QtextSt<<" ";
        file.close();
    } else {
        QMessageBox::warning(this, tr("Path"),
                             tr("你没有选择任何文件"));
    }

}



void MainWindow::on_SaveFileButton_clicked()
{
    QString path = QFileDialog::getSaveFileName(this,
                                                tr("Open File"),
                                                ".",
                                                tr("Text Files(*.txt)"));
    if(!path.isEmpty()) {
        QFile file(path);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, tr("Write File"),
                                       tr("Cannot open file:\n%1").arg(path));
            return;
        }
        QTextStream out(&file);
       // out << textEdit->toPlainText();
        ui->OutputFilePathLabel->setText(path);
        out<<ui->lineEditEncrypted->toPlainText();
        file.close();
    } else {
        QMessageBox::warning(this, tr("Path"),
                             tr("You did not select any file."));
    }
}

void MainWindow::on_SpeedTestButton_clicked()
{
    ui->SpeedTestLabel->setText(QString::number(time.elapsed())+"ms");
    //速度测试只进行一次
    ui->SpeedTestButton->setEnabled(false);
}

void MainWindow::on_RSpeedTestButton_clicked()
{
    ui->RSpeedTestLabel->setText(QString::number(time.elapsed())+"ms");
    //速度测试只进行一次
    ui->RSpeedTestButton->setEnabled(false);
}
