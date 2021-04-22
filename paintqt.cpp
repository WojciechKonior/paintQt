#include "paintqt.h"
#include "ui_paintqt.h"

PaintQt::PaintQt(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PaintQt)
{
    ui->setupUi(this);
}

PaintQt::~PaintQt()
{
    delete ui;
}

