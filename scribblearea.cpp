#include <QtWidgets>
#if defined(QT_PRINTSUPPORT_LIB)
#include <QtPrintSupport/qtprintsupportglobal.h>
#if QT_CONFIG(printdialog)
#include <QPrinter>
#include <QPrintDialog>
#endif
#endif

#include "scribblearea.h"

ScribbleArea::ScribbleArea(QWidget *parent): QWidget(parent)
{

}

// Used to load the image and place it in the widget
bool ScribbleArea::openImage(const QString &fileName)
{
    return true;
}

// Save the current image
bool ScribbleArea::saveImage(const QString &fileName, const char *fileFormat)
{
    return true;
}

// Used to change the pen color
void ScribbleArea::setPenColor(const QColor &newColor)
{
    myPenColor = newColor;
}

// Used to change the pen width
void ScribbleArea::setPenWidth(int newWidth)
{
    myPenWidth = newWidth;
}

// Color the image area with white
void ScribbleArea::clearImage()
{

}

// If a mouse button is pressed check if it was the
// left buton and if so store the current position
// Set that we are currently drawing
void ScribbleArea::mousePressEvent(QMouseEvent *event)
{

}

// When the mouse moves if the left button is clicked
// we call the drawline function which drawis a line
// from the last position to the current
void ScribbleArea::mouseMoveEvent(QMouseEvent *event)
{

}

// if the button is released we set variables to stop drawing
void ScribbleArea::mouseReleaseEvent(QMouseEvent *event)
{

}

// QPainter provides functions to drawion the widget
// The QPaintEvent is sento to widgets that need to
// update themselves
void ScribbleArea::paintEvent(QPaintEvent *event)
{

}

// Resize the image to slightly larger then the main window
// to cut down on the need to resize the image
void ScribbleArea::resizeEvent(QResizeEvent *event)
{

}

void ScribbleArea::drawLineTo(const QPoint &endPoint)
{

}

// When the app is resized create a new image using
// the changes made to the image
void ScribbleArea::resizeImage(QImage *image, const QSize &newSize)
{

}

// Print the image
void ScribbleArea::print()
{

}
