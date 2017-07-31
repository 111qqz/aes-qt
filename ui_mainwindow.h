/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *OpenFileButton;
    QTextEdit *lineEditInput;
    QLabel *labelInput;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonQuit;
    QLabel *labelDecrypted;
    QHBoxLayout *horizontalLayout;
    QLabel *OutputFilePathLabel;
    QPushButton *buttonDecrypt;
    QPushButton *RSpeedTestButton;
    QLabel *RSpeedTestLabel;
    QLineEdit *lineEditKey;
    QLabel *labelEncrypted;
    QLabel *labelKey;
    QPushButton *SaveFileButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *InputFilePathLabel;
    QPushButton *buttonEncrypt;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *SpeedTestButton;
    QLabel *SpeedTestLabel;
    QTextEdit *lineEditEncrypted;
    QTextEdit *lineEditDecrypted;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(973, 590);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        OpenFileButton = new QPushButton(centralWidget);
        OpenFileButton->setObjectName(QStringLiteral("OpenFileButton"));

        verticalLayout_2->addWidget(OpenFileButton);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        lineEditInput = new QTextEdit(centralWidget);
        lineEditInput->setObjectName(QStringLiteral("lineEditInput"));

        gridLayout->addWidget(lineEditInput, 0, 1, 1, 1);

        labelInput = new QLabel(centralWidget);
        labelInput->setObjectName(QStringLiteral("labelInput"));

        gridLayout->addWidget(labelInput, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonQuit = new QPushButton(centralWidget);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));
        buttonQuit->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_3->addWidget(buttonQuit);


        gridLayout->addLayout(horizontalLayout_3, 7, 1, 1, 1);

        labelDecrypted = new QLabel(centralWidget);
        labelDecrypted->setObjectName(QStringLiteral("labelDecrypted"));

        gridLayout->addWidget(labelDecrypted, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        OutputFilePathLabel = new QLabel(centralWidget);
        OutputFilePathLabel->setObjectName(QStringLiteral("OutputFilePathLabel"));
        OutputFilePathLabel->setFrameShape(QFrame::StyledPanel);
        OutputFilePathLabel->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(OutputFilePathLabel);

        buttonDecrypt = new QPushButton(centralWidget);
        buttonDecrypt->setObjectName(QStringLiteral("buttonDecrypt"));
        buttonDecrypt->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(buttonDecrypt);

        RSpeedTestButton = new QPushButton(centralWidget);
        RSpeedTestButton->setObjectName(QStringLiteral("RSpeedTestButton"));
        RSpeedTestButton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(RSpeedTestButton);

        RSpeedTestLabel = new QLabel(centralWidget);
        RSpeedTestLabel->setObjectName(QStringLiteral("RSpeedTestLabel"));
        RSpeedTestLabel->setMaximumSize(QSize(1200000, 16777215));
        RSpeedTestLabel->setFrameShape(QFrame::StyledPanel);
        RSpeedTestLabel->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(RSpeedTestLabel);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        lineEditKey = new QLineEdit(centralWidget);
        lineEditKey->setObjectName(QStringLiteral("lineEditKey"));

        gridLayout->addWidget(lineEditKey, 2, 1, 1, 1);

        labelEncrypted = new QLabel(centralWidget);
        labelEncrypted->setObjectName(QStringLiteral("labelEncrypted"));

        gridLayout->addWidget(labelEncrypted, 3, 0, 1, 1);

        labelKey = new QLabel(centralWidget);
        labelKey->setObjectName(QStringLiteral("labelKey"));

        gridLayout->addWidget(labelKey, 2, 0, 1, 1);

        SaveFileButton = new QPushButton(centralWidget);
        SaveFileButton->setObjectName(QStringLiteral("SaveFileButton"));

        gridLayout->addWidget(SaveFileButton, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        InputFilePathLabel = new QLabel(centralWidget);
        InputFilePathLabel->setObjectName(QStringLiteral("InputFilePathLabel"));
        InputFilePathLabel->setEnabled(true);
        InputFilePathLabel->setFrameShape(QFrame::StyledPanel);
        InputFilePathLabel->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(InputFilePathLabel);

        buttonEncrypt = new QPushButton(centralWidget);
        buttonEncrypt->setObjectName(QStringLiteral("buttonEncrypt"));
        buttonEncrypt->setMaximumSize(QSize(80, 16777215));
        buttonEncrypt->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(buttonEncrypt);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        SpeedTestButton = new QPushButton(centralWidget);
        SpeedTestButton->setObjectName(QStringLiteral("SpeedTestButton"));
        SpeedTestButton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout_4->addWidget(SpeedTestButton);

        SpeedTestLabel = new QLabel(centralWidget);
        SpeedTestLabel->setObjectName(QStringLiteral("SpeedTestLabel"));
        SpeedTestLabel->setMaximumSize(QSize(1200000, 16777215));
        SpeedTestLabel->setFrameShape(QFrame::StyledPanel);
        SpeedTestLabel->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(SpeedTestLabel);


        horizontalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        lineEditEncrypted = new QTextEdit(centralWidget);
        lineEditEncrypted->setObjectName(QStringLiteral("lineEditEncrypted"));

        gridLayout->addWidget(lineEditEncrypted, 4, 1, 1, 1);

        lineEditDecrypted = new QTextEdit(centralWidget);
        lineEditDecrypted->setObjectName(QStringLiteral("lineEditDecrypted"));

        gridLayout->addWidget(lineEditDecrypted, 6, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditInput, buttonEncrypt);
        QWidget::setTabOrder(buttonEncrypt, lineEditKey);
        QWidget::setTabOrder(lineEditKey, buttonDecrypt);
        QWidget::setTabOrder(buttonDecrypt, lineEditDecrypted);
        QWidget::setTabOrder(lineEditDecrypted, buttonQuit);

        retranslateUi(MainWindow);

        buttonEncrypt->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        OpenFileButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\230\216\346\226\207\346\226\207\344\273\266", Q_NULLPTR));
        lineEditInput->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\346\226\207\346\263\211\351\251\277\347\255\211\345\256\275\345\276\256\347\261\263\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\267\350\276\223\345\205\245\346\230\216\346\226\207\343\200\200\345\226\265\345\226\265\345\226\265</p></body></html>", Q_NULLPTR));
        labelInput->setText(QApplication::translate("MainWindow", "\346\230\216\346\226\207", Q_NULLPTR));
        buttonQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        labelDecrypted->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        OutputFilePathLabel->setText(QString());
        buttonDecrypt->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206", Q_NULLPTR));
        RSpeedTestButton->setText(QApplication::translate("MainWindow", "\350\247\243\345\257\206\346\227\266\351\227\264", Q_NULLPTR));
        RSpeedTestLabel->setText(QString());
        lineEditKey->setText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\247\230\351\222\245", Q_NULLPTR));
        labelEncrypted->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        labelKey->setText(QApplication::translate("MainWindow", "\347\247\230\351\222\245", Q_NULLPTR));
        SaveFileButton->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\345\212\240\345\257\206\347\273\223\346\236\234", Q_NULLPTR));
        InputFilePathLabel->setText(QString());
        buttonEncrypt->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206", Q_NULLPTR));
        SpeedTestButton->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206\346\227\266\351\227\264", Q_NULLPTR));
        SpeedTestLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
