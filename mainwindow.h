#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>
#include <QTextEdit>
//#include <QtGui>
#include "aes.h"
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QApplication *app);
    ~MainWindow();
    
private slots:
    void on_buttonEncrypt_clicked();
    void on_buttonDecrypt_clicked();

    void on_OpenFileButton_clicked();
    void on_SaveFileButton_clicked();

    void on_SpeedTestButton_clicked();

    void on_RSpeedTestButton_clicked();

private:
    classAES aes;
    Ui::MainWindow *ui;
    QTextEdit *textEdit;
    QTime time;
};

#endif // MAINWINDOW_H
