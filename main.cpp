#include "paintpanelmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintPanelMainWindow w;
    w.show();

    return a.exec();
}
