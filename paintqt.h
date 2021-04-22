#ifndef PAINTQT_H
#define PAINTQT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PaintQt; }
QT_END_NAMESPACE

class PaintQt : public QMainWindow
{
    Q_OBJECT

public:
    PaintQt(QWidget *parent = nullptr);
    ~PaintQt();

private:
    Ui::PaintQt *ui;
};
#endif // PAINTQT_H
