#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

enum class condition
{
    Digit,
    UnaryOperations,
    BinaryOperations,
    Result,
    Clear,
    Point
};

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;
    QMap<QPushButton*, std::function<double(double)>> _unaryOperations;
    QMap<char, std::function<double(double, double)>> _binaryOperations;
    QMap<QPushButton*, condition> _typeButton;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void resizeEvent(QResizeEvent* event);
    void digit(QPushButton* button);
    void unaryOperation(QPushButton* button);
    void choiceBinaryOperation(QPushButton* button);
    void clear();
    void fullClear();
    void erase();
    void point();
    void result();
    void updateTextEditAfterDigit(QString& digit);
    void updateTextEditAfterUnaryOperation(QString& digit, QString& num);
    void updateTextEditAfterBinaryOperation();
    void updateTextEditAfterResult();

private slots:
    void pressingButton();
};
#endif // MAINWINDOW_H
