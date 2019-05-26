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

    void on_deletePoints_clicked();

public slots:
    void PointClickedSlot(Point * p);
    void DeletePoint(Point * p);
    void Shift_clicked_slot(Point * p);
    void RightClickedSlot(Point* p);

private:
    Ui::PlotWindow *ui;

    QGraphicsScene *scene;

    static int random_clicks_;
    Point * last_p;
    Point * last_rp;
};

#endif // PLOTWINDOW_H
