#include "paintqt.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // The main application object
    QApplication a(argc, argv);

    // Create and open the main window
    PaintQt w;
    w.show();

    // Display the main window
    return a.exec();
}
