#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
#include <cmath>

#include "plotwindow.h"
#include "point.h"
#include "ui_plotwindow.h"

// Names:
// Charya Ros

int PlotWindow::random_clicks_ = 0;

PlotWindow::PlotWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlotWindow)
{
    // scene is a pointer field of plot window
    scene = new QGraphicsScene;

    // we need to set up the ui before we draw on our scene
    ui->setupUi(this);
    QGraphicsView * view = ui->plotGraphicsView;
    view->setScene(scene);
    view->setSceneRect(0,0,view->frameSize().width(),view->frameSize().height());


    srand(time(0));

    last_p = nullptr;
    last_rp = nullptr;
    // Day 1, Task 2, number 5:
    // use the scene->addLine method to add lines to your scene for the x and y axes.
    // you may find the view->frameSize.[width()|height()] methods helpful as well.

    // Calculate the mid points
    int x_mid = view->frameSize().height() / 2;
    int y_mid = view->frameSize().width() / 2;

    // draw the axes
    scene->addLine(0, x_mid, view->frameSize().width(), x_mid);
    scene->addLine(y_mid, 0, y_mid, view->frameSize().height());

    // Day 1, Task 4, number 2:
    // connect the random button's &QAbstractButton::pressed event to the PlotWindow's new slot
    // connect(sender, sender signal, receiver, receiver slot)
    connect(ui->randomButton, &QAbstractButton::pressed,
            this, &PlotWindow::SlotTest);

    // Day 2, Task 3, number 1/2:
    // A QColor can be instantiated by passing the constructor 3 ints for red, green, blue values
    // between 0 and 255.
    QColor color(255, 255, 255);
    int x_adj = 0 + (ui->plotGraphicsView->frameSize().width() / 2) - (Point::get_width() / 2);
    int y_adj = (-1 * 0 + (ui->plotGraphicsView->frameSize().height() / 2) - (Point::get_width() / 2));
    Point *item = new Point(color, x_adj, y_adj);
    scene->addItem(item);

    //connect PointClicked to PlotWindow
    connect(item, &Point::PointClicked, this, &PlotWindow::PointClickedSlot);

    //connect the ShiftClicked to PlotWindow slot
    connect(item, &Point::ShiftClicked, this, &PlotWindow::Shift_clicked_slot);

    //connect the RightClicked to PlotWindow slot
    connect(item, &Point::RightClicked, this, &PlotWindow::RightClickedSlot);

    connect(ui->addButton, &QAbstractButton::released, this, &PlotWindow::AddPoint);
}

// runs when "add point" is clicked
void PlotWindow::AddPoint() {
    bool safe = false;
    int x = ui->xCoord->text().toInt(&safe);
    if (!safe) {
        return;
    }
    int y = ui->yCoord->text().toInt(&safe);
    if (!safe) {
        return;
    }
    QColor color(255, 255, 255);
    int x_adj = x + (ui->plotGraphicsView->frameSize().width() / 2) - (Point::get_width() / 2);
    int y_adj = (-1 * y + (ui->plotGraphicsView->frameSize().height() / 2) - (Point::get_width() / 2));
    Point *item = new Point(color, x_adj, y_adj);
    scene->addItem(item);


    connect(item, &Point::PointClicked, this, &PlotWindow::PointClickedSlot);
    connect(item, &Point::ShiftClicked, this, &PlotWindow::Shift_clicked_slot);
    connect(item, &Point::RightClicked, this, &PlotWindow::RightClickedSlot);


}

void PlotWindow::PointClickedSlot(Point * p) {

    if(Point::get_delete_mode()){

        PlotWindow::DeletePoint(p);

    }

}


PlotWindow::~PlotWindow()
{
    delete ui;
}

void PlotWindow::on_randomButton_clicked()
{
    // change the text on the random label
    random_clicks_++;

    qDebug() << random_clicks_; // using qDebug to see information

    ui->randomLabel->setText(QString(std::to_string(random_clicks_).c_str()));

    // so that we can see the updates without resizing the window
    this->repaint();
}

void PlotWindow::SlotTest()
{
    qDebug() << "pressed!";
}


void PlotWindow::on_deletePoints_clicked()
{
    if (!Point::get_delete_mode()){
        Point::set_delete_mode(true);
        ui->centralWidget->setCursor(Qt::CrossCursor);
    }
    else {
        Point::set_delete_mode(false);
        ui->centralWidget->setCursor(Qt::ArrowCursor);
    }
}

void PlotWindow::DeletePoint(Point * p){

    scene->removeItem(p);

}

void PlotWindow::Shift_clicked_slot(Point *p)
{
    qDebug() << "Shift Clicked Slopt";
    qDebug() << p->get_x() <<" "<< p->get_y();
    if(last_p==nullptr)
    {
        last_p = p;
        int x = p->get_x() - (ui->plotGraphicsView->frameSize().width()/2) + 5;
        int y = (-1 * p->get_y() + (ui->plotGraphicsView->frameSize().height() / 2) - (Point::get_width() / 2));
        ui->point1Label->setText(QString("Point 1: ") + QString::number(x) + QString(", ") + QString::number(y));

    }
    else
    {
        int x1 = last_p->get_x() - (ui->plotGraphicsView->frameSize().width()/2) + 5;
        int y1 = (-1 * last_p->get_y() + (ui->plotGraphicsView->frameSize().height() / 2) - (Point::get_width() / 2));
        ui->point1Label->setText(QString("Point 1: ") + QString::number(x1) + QString(", ") + QString::number(y1));
        int x2 = p->get_x() - (ui->plotGraphicsView->frameSize().width()/2) + 5;
        int y2 = (-1 * p->get_y() + (ui->plotGraphicsView->frameSize().height() / 2) - (Point::get_width() / 2));
        ui->point2Label->setText(QString("Point 2: ") + QString::number(x2) + QString(", ") + QString::number(y2));

        double dist = sqrt(((x1-x2)*(x1-x2)) + (((y1-y2)*(y1-y2))));
        ui->distanceLabel->setText(QString("Distance : ") + QString::number(dist));
        last_p = p;

    }

}

void PlotWindow::RightClickedSlot(Point *p)
{
    qDebug() << "Right Clicked";

    if(last_rp != nullptr)
    {
        int x1 = last_rp->get_x() + (Point::get_width() / 2);
        int y1 = (last_rp->get_y() + (Point::get_width() / 2));
        int x2 = p->get_x() + (Point::get_width() / 2);
        int y2 = (p->get_y() +  (Point::get_width() / 2));

        scene->addLine(x1, y1, x2, y2); //drawline
    }
    last_rp = p; //update the point

}
