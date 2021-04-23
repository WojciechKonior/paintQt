#ifndef PAINTQT_H
#define PAINTQT_H

#include <QList>
#include <QMainWindow>

// ScribbleArea used to paint the image
class ScribbleArea;

QT_BEGIN_NAMESPACE
namespace Ui { class PaintQt; }
QT_END_NAMESPACE

class PaintQt : public QMainWindow
{
    Q_OBJECT

//public:
//    PaintQt(QWidget *parent = nullptr);
//    ~PaintQt();

//private:
//    Ui::PaintQt *ui;

public:
    PaintQt();

protected:
    // Function used to close on event
    void closeEvent(QCloseEvent *event) override;

// The events that can be triggered
private slots:
    void open();
    void save();
    void penColor();
    void penWidth();
    void about();

private:
    // Will tie user actions to functions
    void createActions();
    void createMenus();

    // Will check if changes have occured since sast save
    bool maybeSave();

    // Opens the Save dialog and saves
    bool saveFile(const QByteArray &fileformat);

    // What we'll draw on
    ScribbleArea *scribbleArea;

    // The menu widgets
    QMenu *saveAsMenu;
    QMenu *fileMenu;
    QMenu *optionMenu;
    QMenu *helpMenu;

    // All the actions that can occur
    QAction *openAct;

    // Actions tied to specific file formats
    QList<QAction *> saveAsActs;
    QAction *exitAct;
    QAction *penColorAct;
    QAction *penWidthAct;
    QAction *printAct;
    QAction *clearScreenAct;
    QAction *aboutAct;
    QAction *aboutQtAct;
};
#endif // PAINTQT_H
