#include <iostream>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>

#include "plotwindow.h"
#include "ui_plotwindow.h"
#include "point.h"

// Names: James McDonald, Charya Ros, Tai Pham
//
//

PlotWindow::PlotWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlotWindow)

{
    // scene is a pointer field of plot window
   // int y = ui->yCoord->text().toInt(&safe);



    scene = new QGraphicsScene;

    // we need to set up the ui before we draw on our scene
    ui->setupUi(this);
    QGraphicsView * view = ui->plotGraphicsView;
    view->setScene(scene);
    view->setSceneRect(0,0,view->frameSize().width(),view->frameSize().height());

    ui->randomLabel;


    Point *myP = new Point(color,0,0);
    scene->addItem(myP);

    // Task 2, number 5:
    // use the scene->addLine method to add lines to your scene for the x and y axes.
    // you may find the view->frameSize.[width()|height()] methods helpful as well.
    int width = view->frameSize().width();
    int height = view->frameSize().height();

    scene->addLine(width/2,0,width/2,height);
    scene->addLine(0,height/2,width,height/2);

    connect(ui->randomButton, &QAbstractButton::pressed, this, &PlotWindow::SlotTest);
    // Task 4, number 2:
    // connect the random button's &QAbstractButton::pressed event to the PlotWindow's new slot



}

PlotWindow::~PlotWindow()
{
    delete ui;
}

void PlotWindow::on_randomButton_clicked()
{
    std::cout << "Random button was clicked!" << std::endl;
    qDebug("Passing text to qDebug.");
    ui->randomButton->setText("You clicked.");
}

void PlotWindow::SlotTest(){

    qDebug("SlotTest triggered");

}

void PlotWindow::addpoint()
{
    bool safe = false;
    int x = ui->xCoord->text().toInt(&safe);
    if(!safe){
        return;
    }
    int y = ui->yCoord->text().toInt(&safe);
    if(!safe){
        return;
    }
    QColor color(255, 255, 255);
    int x_adj = x+(ui->plotGraphicsView->frameSize().width()/2)-(Point::get_width()/2);
    int y_adj = (-1* y + (ui->plotGraphicsView->frameSize().height()/2))-(Point::get_width()/2);
    Point *myP = new Point(color,0,0);
    scene->addItem(myP);
    connect(myP,&Point::PointClicked,this,&PlotWindow::PointClickedSlot);
}
