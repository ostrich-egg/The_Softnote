#include "softnote.h"

#include <QApplication>

#include <QMenuBar>
#include <QHBoxLayout>
#include <QLabel>
#include <QWidget>
#include <QMenu>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SoftNote w;




    w.show();
    return a.exec();
}
