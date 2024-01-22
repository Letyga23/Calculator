/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_part;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_share;
    QPushButton *digit_7;
    QPushButton *pushButton_degree;
    QPushButton *digit_5;
    QPushButton *pushButton_erase;
    QTextEdit *textEdit_result;
    QPushButton *pushButton_fulLClear;
    QPushButton *digit_9;
    QPushButton *digit_0;
    QPushButton *digit_8;
    QPushButton *digit_6;
    QPushButton *pushButton_log;
    QPushButton *digit_2;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_squareRoot;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_multiply;
    QPushButton *digit_4;
    QPushButton *digit_3;
    QPushButton *pushButton_point;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_result;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_erectSquare;
    QPushButton *digit_1;
    QPushButton *pushButton_plus;
    QLabel *label;
    QTextEdit *textEdit_history;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(606, 375);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1A1B28;\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_part = new QPushButton(centralwidget);
        pushButton_part->setObjectName(QString::fromUtf8("pushButton_part"));
        sizePolicy.setHeightForWidth(pushButton_part->sizePolicy().hasHeightForWidth());
        pushButton_part->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        pushButton_part->setFont(font);
        pushButton_part->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_part, 4, 0, 1, 1);

        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        sizePolicy.setHeightForWidth(pushButton_cos->sizePolicy().hasHeightForWidth());
        pushButton_cos->setSizePolicy(sizePolicy);
        pushButton_cos->setFont(font);
        pushButton_cos->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_cos, 5, 4, 1, 1);

        pushButton_share = new QPushButton(centralwidget);
        pushButton_share->setObjectName(QString::fromUtf8("pushButton_share"));
        sizePolicy.setHeightForWidth(pushButton_share->sizePolicy().hasHeightForWidth());
        pushButton_share->setSizePolicy(sizePolicy);
        pushButton_share->setFont(font);
        pushButton_share->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_share, 4, 3, 1, 1);

        digit_7 = new QPushButton(centralwidget);
        digit_7->setObjectName(QString::fromUtf8("digit_7"));
        sizePolicy.setHeightForWidth(digit_7->sizePolicy().hasHeightForWidth());
        digit_7->setSizePolicy(sizePolicy);
        digit_7->setFont(font);
        digit_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_7, 5, 0, 1, 1);

        pushButton_degree = new QPushButton(centralwidget);
        pushButton_degree->setObjectName(QString::fromUtf8("pushButton_degree"));
        sizePolicy.setHeightForWidth(pushButton_degree->sizePolicy().hasHeightForWidth());
        pushButton_degree->setSizePolicy(sizePolicy);
        pushButton_degree->setFont(font);
        pushButton_degree->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_degree, 4, 4, 1, 1);

        digit_5 = new QPushButton(centralwidget);
        digit_5->setObjectName(QString::fromUtf8("digit_5"));
        sizePolicy.setHeightForWidth(digit_5->sizePolicy().hasHeightForWidth());
        digit_5->setSizePolicy(sizePolicy);
        digit_5->setFont(font);
        digit_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_5, 6, 1, 1, 1);

        pushButton_erase = new QPushButton(centralwidget);
        pushButton_erase->setObjectName(QString::fromUtf8("pushButton_erase"));
        sizePolicy.setHeightForWidth(pushButton_erase->sizePolicy().hasHeightForWidth());
        pushButton_erase->setSizePolicy(sizePolicy);
        pushButton_erase->setFont(font);
        pushButton_erase->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_erase, 3, 3, 1, 2);

        textEdit_result = new QTextEdit(centralwidget);
        textEdit_result->setObjectName(QString::fromUtf8("textEdit_result"));
        sizePolicy.setHeightForWidth(textEdit_result->sizePolicy().hasHeightForWidth());
        textEdit_result->setSizePolicy(sizePolicy);
        textEdit_result->setLayoutDirection(Qt::LeftToRight);
        textEdit_result->setStyleSheet(QString::fromUtf8("border: 2px solid red; \n"
"padding: 5px;\n"
"color: rgb(255, 255, 255);"));
        textEdit_result->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit_result->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_result->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_result->setReadOnly(true);

        gridLayout->addWidget(textEdit_result, 0, 0, 3, 5);

        pushButton_fulLClear = new QPushButton(centralwidget);
        pushButton_fulLClear->setObjectName(QString::fromUtf8("pushButton_fulLClear"));
        sizePolicy.setHeightForWidth(pushButton_fulLClear->sizePolicy().hasHeightForWidth());
        pushButton_fulLClear->setSizePolicy(sizePolicy);
        pushButton_fulLClear->setFont(font);
        pushButton_fulLClear->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_fulLClear, 3, 2, 1, 1);

        digit_9 = new QPushButton(centralwidget);
        digit_9->setObjectName(QString::fromUtf8("digit_9"));
        sizePolicy.setHeightForWidth(digit_9->sizePolicy().hasHeightForWidth());
        digit_9->setSizePolicy(sizePolicy);
        digit_9->setFont(font);
        digit_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_9, 5, 2, 1, 1);

        digit_0 = new QPushButton(centralwidget);
        digit_0->setObjectName(QString::fromUtf8("digit_0"));
        sizePolicy.setHeightForWidth(digit_0->sizePolicy().hasHeightForWidth());
        digit_0->setSizePolicy(sizePolicy);
        digit_0->setFont(font);
        digit_0->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_0, 8, 0, 1, 1);

        digit_8 = new QPushButton(centralwidget);
        digit_8->setObjectName(QString::fromUtf8("digit_8"));
        sizePolicy.setHeightForWidth(digit_8->sizePolicy().hasHeightForWidth());
        digit_8->setSizePolicy(sizePolicy);
        digit_8->setFont(font);
        digit_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_8, 5, 1, 1, 1);

        digit_6 = new QPushButton(centralwidget);
        digit_6->setObjectName(QString::fromUtf8("digit_6"));
        sizePolicy.setHeightForWidth(digit_6->sizePolicy().hasHeightForWidth());
        digit_6->setSizePolicy(sizePolicy);
        digit_6->setFont(font);
        digit_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_6, 6, 2, 1, 1);

        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        sizePolicy.setHeightForWidth(pushButton_log->sizePolicy().hasHeightForWidth());
        pushButton_log->setSizePolicy(sizePolicy);
        pushButton_log->setFont(font);
        pushButton_log->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_log, 7, 4, 1, 1);

        digit_2 = new QPushButton(centralwidget);
        digit_2->setObjectName(QString::fromUtf8("digit_2"));
        sizePolicy.setHeightForWidth(digit_2->sizePolicy().hasHeightForWidth());
        digit_2->setSizePolicy(sizePolicy);
        digit_2->setFont(font);
        digit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_2, 7, 1, 1, 1);

        pushButton_plus_minus = new QPushButton(centralwidget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        sizePolicy.setHeightForWidth(pushButton_plus_minus->sizePolicy().hasHeightForWidth());
        pushButton_plus_minus->setSizePolicy(sizePolicy);
        pushButton_plus_minus->setFont(font);
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_plus_minus, 8, 2, 1, 1);

        pushButton_squareRoot = new QPushButton(centralwidget);
        pushButton_squareRoot->setObjectName(QString::fromUtf8("pushButton_squareRoot"));
        sizePolicy.setHeightForWidth(pushButton_squareRoot->sizePolicy().hasHeightForWidth());
        pushButton_squareRoot->setSizePolicy(sizePolicy);
        pushButton_squareRoot->setFont(font);
        pushButton_squareRoot->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_squareRoot, 4, 2, 1, 1);

        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);
        pushButton_sin->setFont(font);
        pushButton_sin->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_sin, 6, 4, 1, 1);

        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setFont(font);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_multiply, 5, 3, 1, 1);

        digit_4 = new QPushButton(centralwidget);
        digit_4->setObjectName(QString::fromUtf8("digit_4"));
        sizePolicy.setHeightForWidth(digit_4->sizePolicy().hasHeightForWidth());
        digit_4->setSizePolicy(sizePolicy);
        digit_4->setFont(font);
        digit_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_4, 6, 0, 1, 1);

        digit_3 = new QPushButton(centralwidget);
        digit_3->setObjectName(QString::fromUtf8("digit_3"));
        sizePolicy.setHeightForWidth(digit_3->sizePolicy().hasHeightForWidth());
        digit_3->setSizePolicy(sizePolicy);
        digit_3->setFont(font);
        digit_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_3, 7, 2, 1, 1);

        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        sizePolicy.setHeightForWidth(pushButton_point->sizePolicy().hasHeightForWidth());
        pushButton_point->setSizePolicy(sizePolicy);
        pushButton_point->setFont(font);
        pushButton_point->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(pushButton_point, 8, 1, 1, 1);

        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        sizePolicy.setHeightForWidth(pushButton_percent->sizePolicy().hasHeightForWidth());
        pushButton_percent->setSizePolicy(sizePolicy);
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_percent, 3, 0, 1, 1);

        pushButton_result = new QPushButton(centralwidget);
        pushButton_result->setObjectName(QString::fromUtf8("pushButton_result"));
        sizePolicy.setHeightForWidth(pushButton_result->sizePolicy().hasHeightForWidth());
        pushButton_result->setSizePolicy(sizePolicy);
        pushButton_result->setFont(font);
        pushButton_result->setStyleSheet(QString::fromUtf8("background-color: #ff0000;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_result, 8, 3, 1, 2);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        sizePolicy.setHeightForWidth(pushButton_minus->sizePolicy().hasHeightForWidth());
        pushButton_minus->setSizePolicy(sizePolicy);
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_minus, 6, 3, 1, 1);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        sizePolicy.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy);
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_clear, 3, 1, 1, 1);

        pushButton_erectSquare = new QPushButton(centralwidget);
        pushButton_erectSquare->setObjectName(QString::fromUtf8("pushButton_erectSquare"));
        sizePolicy.setHeightForWidth(pushButton_erectSquare->sizePolicy().hasHeightForWidth());
        pushButton_erectSquare->setSizePolicy(sizePolicy);
        pushButton_erectSquare->setFont(font);
        pushButton_erectSquare->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_erectSquare, 4, 1, 1, 1);

        digit_1 = new QPushButton(centralwidget);
        digit_1->setObjectName(QString::fromUtf8("digit_1"));
        sizePolicy.setHeightForWidth(digit_1->sizePolicy().hasHeightForWidth());
        digit_1->setSizePolicy(sizePolicy);
        digit_1->setFont(font);
        digit_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #1E2435"));

        gridLayout->addWidget(digit_1, 7, 0, 1, 1);

        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        sizePolicy.setHeightForWidth(pushButton_plus->sizePolicy().hasHeightForWidth());
        pushButton_plus->setSizePolicy(sizePolicy);
        pushButton_plus->setFont(font);
        pushButton_plus->setStyleSheet(QString::fromUtf8("background-color: #52C9DC;\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(pushButton_plus, 7, 3, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 5, 1, 1);

        textEdit_history = new QTextEdit(centralwidget);
        textEdit_history->setObjectName(QString::fromUtf8("textEdit_history"));
        textEdit_history->setStyleSheet(QString::fromUtf8(" padding: 5px;\n"
"border: 2px solid rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);"));
        textEdit_history->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_history->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textEdit_history->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_history->setReadOnly(true);

        gridLayout->addWidget(textEdit_history, 1, 5, 8, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_part->setText(QApplication::translate("MainWindow", "1/X", nullptr));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_share->setText(QApplication::translate("MainWindow", "/", nullptr));
        digit_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_degree->setText(QApplication::translate("MainWindow", "X^Y", nullptr));
        digit_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_erase->setText(QApplication::translate("MainWindow", "\342\214\253", nullptr));
        textEdit_result->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        pushButton_fulLClear->setText(QApplication::translate("MainWindow", "C", nullptr));
        digit_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        digit_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        digit_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        digit_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_log->setText(QApplication::translate("MainWindow", "log", nullptr));
        digit_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus_minus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_squareRoot->setText(QApplication::translate("MainWindow", "\342\210\232X", nullptr));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        pushButton_multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        digit_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        digit_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_point->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_result->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "CE", nullptr));
        pushButton_erectSquare->setText(QApplication::translate("MainWindow", "X\302\262", nullptr));
        digit_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217:", nullptr));
        textEdit_history->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Digital-7'; font-size:26pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
