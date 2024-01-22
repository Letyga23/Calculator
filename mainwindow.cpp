#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <math.h>
#include <QResizeEvent>
#include <QDebug>

struct CalculationItem
{
    QString firstNum = "";
    char operation = ' ';
    QString secondNum = "";
    double result = 0;
};

CalculationItem lastItem;

QString& firstNum = lastItem.firstNum;
char& operation = lastItem.operation;
QString& secondNum = lastItem.secondNum;
double& resultat = lastItem.result;

QTextEdit* textEdit_result = nullptr;
QTextEdit* textEdit_history = nullptr;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _unaryOperations =
    {
        {ui->pushButton_plus_minus,   [](double num) {return -num;      }   },
        {ui->pushButton_percent,      [](double num) {return num / 100; }   },
        {ui->pushButton_erectSquare,  [](double num) {return num * num; }   },
        {ui->pushButton_part,         [](double num) {return 1 / num;   }   },
        {ui->pushButton_squareRoot,   [](double num) {return sqrt(num); }   },
        {ui->pushButton_sin,          [](double num) {return sin(num);  }   },
        {ui->pushButton_cos,          [](double num) {return cos(num);  }   },
        {ui->pushButton_log,          [](double num) {return log(num);  }   }
    };

    _binaryOperations =
    {
        {'+',   [](double firstNum, double secondNum) {return firstNum + secondNum;     }},
        {'-',   [](double firstNum, double secondNum) {return firstNum - secondNum;     }},
        {'*',   [](double firstNum, double secondNum) {return firstNum * secondNum;     }},
        {'/',   [](double firstNum, double secondNum) {return firstNum / secondNum;     }},
        {'^',   [](double firstNum, double secondNum) {return pow(firstNum, secondNum); }}
    };

    _typeButton =
    {
        {ui->digit_0,                   condition::Digit},
        {ui->digit_1,                   condition::Digit},
        {ui->digit_2,                   condition::Digit},
        {ui->digit_3,                   condition::Digit},
        {ui->digit_4,                   condition::Digit},
        {ui->digit_5,                   condition::Digit},
        {ui->digit_6,                   condition::Digit},
        {ui->digit_7,                   condition::Digit},
        {ui->digit_8,                   condition::Digit},
        {ui->digit_9,                   condition::Digit},

        {ui->pushButton_plus_minus,     condition::UnaryOperations},
        {ui->pushButton_percent,        condition::UnaryOperations},
        {ui->pushButton_erectSquare,    condition::UnaryOperations},
        {ui->pushButton_part,           condition::UnaryOperations},
        {ui->pushButton_squareRoot,     condition::UnaryOperations},
        {ui->pushButton_sin,            condition::UnaryOperations},
        {ui->pushButton_cos,            condition::UnaryOperations},
        {ui->pushButton_log,            condition::UnaryOperations},

        {ui->pushButton_plus,           condition::BinaryOperations},
        {ui->pushButton_minus,          condition::BinaryOperations},
        {ui->pushButton_multiply,       condition::BinaryOperations},
        {ui->pushButton_share,          condition::BinaryOperations},
        {ui->pushButton_degree,         condition::BinaryOperations},

        {ui->pushButton_clear,          condition::Clear},
        {ui->pushButton_fulLClear,      condition::Clear},
        {ui->pushButton_erase,          condition::Clear},

        {ui->pushButton_result,         condition::Result},

        {ui->pushButton_point,          condition::Point},
    };

    QList<QPushButton*> buttons = ui->centralwidget->findChildren<QPushButton*>();
    for(QPushButton* button : buttons)
        connect(button, &QPushButton::clicked, this, &MainWindow::pressingButton);

    textEdit_result = ui->textEdit_result;
    textEdit_history = ui->textEdit_history;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pressingButton()
{
    QPushButton *button = (QPushButton*)sender();
    condition type = _typeButton[button];

    if(type == condition::Digit)
        digit(button);

    else if(type == condition::UnaryOperations)
        unaryOperation(button);

    else if(type == condition::BinaryOperations)
        choiceBinaryOperation(button);

    else if(type == condition::Result)
        result();

    else if(type == condition::Clear)
    {
        QString buttonObjectName = button->objectName();
        if(buttonObjectName == "pushButton_clear")
            clear();

        else if(buttonObjectName == "pushButton_fulLClear")
            fullClear();

        else if(buttonObjectName == "pushButton_erase")
            erase();
    }

    else if(type == condition::Point)
        point();
}

void MainWindow::digit(QPushButton* button)
{
    if(firstNum == '0' || secondNum == '0')
        return;
    if(operation == '=')
        clear();

    QString& number = (operation == ' ') ? firstNum : secondNum;
    QString digit = button->objectName().mid(6);
    number += digit;

    updateTextEditAfterDigit(digit);
}

void MainWindow::updateTextEditAfterDigit(QString& digit)
{
    textEdit_result->setText(textEdit_result->toPlainText() + digit);
}

void MainWindow::unaryOperation(QPushButton* button)
{
    if(firstNum.isEmpty())
        return;

    if(!secondNum.isEmpty())
        result();

    resultat = _unaryOperations[button](firstNum.toDouble());
    operation = '=';
    QString initialNum = firstNum;
    firstNum =  QString::number(resultat);
    QString buttonText = button->text();
    updateTextEditAfterUnaryOperation(buttonText, initialNum);
}

void MainWindow::updateTextEditAfterUnaryOperation(QString& buttonText, QString& num)
{
    QString result;

    if(buttonText.contains('X'))
    {
        buttonText.replace('X', num);
        result = QString(buttonText + "=" + QString::number(resultat));
    }
    else
        result = QString("%1(%2) = %3").arg(buttonText).arg(num).arg(resultat);

    textEdit_history->setText(textEdit_history->toPlainText() + result + ";\n");
    textEdit_result->setText(QString::number(resultat, 'g', 15));
}

void MainWindow::choiceBinaryOperation(QPushButton* button)
{
    if(!secondNum.isEmpty())
        result();

    if(button->objectName() == "pushButton_degree")
        operation = button->text().at(1).toLatin1();
    else
        operation = button->text().at(0).toLatin1();

    updateTextEditAfterBinaryOperation();
}

void MainWindow::updateTextEditAfterBinaryOperation()
{
    textEdit_result->setText(firstNum + operation);
}

void MainWindow::result()
{
    if(secondNum.isEmpty())
        return;

    if(operation == '/')
    {
        if (secondNum == "0")
        {
            QMessageBox::warning(this, "Ошибка", "На ноль делить нельзя");
            return;
        }
    }

    resultat = _binaryOperations[operation](firstNum.toDouble(), secondNum.toDouble());
    updateTextEditAfterResult();
    operation = '=';
    firstNum =  QString::number(resultat);
    secondNum.clear();
}

void MainWindow::updateTextEditAfterResult()
{
    textEdit_result->setText(firstNum + operation + secondNum + " = " + QString::number(resultat));
    textEdit_history->setText(textEdit_history->toPlainText() + textEdit_result->toPlainText() + ";\n");
}

void MainWindow::clear()
{
    if(operation == '=')
    {
        textEdit_result->clear();
        firstNum.clear();
        secondNum.clear();
        operation = ' ';
    }
    else
    {
        QString& number = (operation == ' ') ? firstNum : secondNum;
        QString text = textEdit_result->toPlainText();
        text.chop(number.length());
        textEdit_result->setText(text);
        number.clear();
    }
}

void MainWindow::fullClear()
{
    textEdit_history->clear();
    firstNum.clear();
    secondNum.clear();
    resultat = std::numeric_limits<double>::quiet_NaN();
    textEdit_result->clear();
    operation = ' ';
}

void MainWindow::erase()
{
    if(operation == '=')
        clear();
    else
    {
        QString text = textEdit_result->toPlainText();
        text.chop(1);
        textEdit_result->setText(text);

        if(!text.contains(operation))
            operation = ' ';

        QStringList parts = textEdit_result->toPlainText().split(operation);
        (parts.size() > 1) ? secondNum = parts[1] : (secondNum.clear(), firstNum = parts[0]);
    }
}

void MainWindow::point()
{
    if(!(firstNum.contains('.')))
    {
        firstNum += ".";
        textEdit_result->setText(textEdit_result->toPlainText() + ".");
    }

    else if(!(secondNum.contains('.')))
    {
        secondNum += ".";
        textEdit_result->setText(textEdit_result->toPlainText() + ".");
    }
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    QFont fontLine = textEdit_result->font();
    fontLine.setPointSizeF(event->size().height() * 0.1);
    ui->textEdit_result->setFont(fontLine);

    QFont fontLabel = textEdit_history->font();
    fontLabel.setPointSizeF(event->size().height() * 0.05);
    textEdit_history->setFont(fontLabel);

    textEdit_result->setFixedHeight(event->size().height() * 0.25);
}

