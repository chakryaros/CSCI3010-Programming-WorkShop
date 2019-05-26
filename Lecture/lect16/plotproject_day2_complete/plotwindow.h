#ifndef PLOTWINDOW_H
#define PLOTWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>

#include "point.h"

namespace Ui {
class PlotWindow;
}

class PlotWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlotWindow(QWidget *parent = 0);
    ~PlotWindow();

private slots:
    void on_randomButton_clicked();

    void SlotTest();

    void AddPoint();

public slots:
    void PointClickedSlot(int x, int y);

private:
    Ui::PlotWindow *ui;

    QGraphicsScene *scene;

    static int random_clicks_;
};

#endif // PLOTWINDOW_H
