#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>

#include "plotwindow.h"
#include "point.h"
#include "ui_plotwindow.h"

// Names:
//
//

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
    connect(item, &Point::PointClicked, this, &PlotWindow::PointClickedSlot);


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
}

void PlotWindow::PointClickedSlot(int x, int y) {
    qDebug() << x;
    qDebug() << y;
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

