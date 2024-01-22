#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("CP1251"));

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Калькулятор");
    QIcon appIcon(":/resources/icons/icon.png");
    w.setWindowIcon(appIcon);
    w.show();
    return a.exec();
}
