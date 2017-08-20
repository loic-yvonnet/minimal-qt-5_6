#include "minimal_window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    minimal_window w;
    w.show();

    return a.exec();
}
