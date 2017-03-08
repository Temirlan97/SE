/***********************************************************
 * NOTE: Run this program using QT.
 * This program has simple UI.
 * It takes the filename and creates the new file with that
 * name or opens the existing one if there is.
 * In the second field, it takes what has to be written
 * into that file. Then it terminates the program if the
 * operation was successful.
 ************************************************************/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
