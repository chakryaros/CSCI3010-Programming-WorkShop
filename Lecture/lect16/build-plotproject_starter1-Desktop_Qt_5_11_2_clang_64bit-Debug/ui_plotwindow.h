/********************************************************************************
** Form generated from reading UI file 'plotwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWINDOW_H
#define UI_PLOTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *plotGraphicsView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *yLabel;
    QLineEdit *yCoord;
    QLabel *xLabel;
    QLineEdit *xCoord;
    QPushButton *addButton;
    QPushButton *deletePoints;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *point1Label;
    QLabel *point2Label;
    QLabel *distanceLabel;
    QPushButton *randomButton;
    QLabel *randomLabel;
    QMenuBar *menuBar;
    QMenu *menuPoint_Grapher;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PlotWindow)
    {
        if (PlotWindow->objectName().isEmpty())
            PlotWindow->setObjectName(QStringLiteral("PlotWindow"));
        PlotWindow->resize(586, 469);
        centralWidget = new QWidget(PlotWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plotGraphicsView = new QGraphicsView(centralWidget);
        plotGraphicsView->setObjectName(QStringLiteral("plotGraphicsView"));
        plotGraphicsView->setGeometry(QRect(160, 50, 401, 341));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 561, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        yLabel = new QLabel(layoutWidget);
        yLabel->setObjectName(QStringLiteral("yLabel"));

        horizontalLayout->addWidget(yLabel);

        yCoord = new QLineEdit(layoutWidget);
        yCoord->setObjectName(QStringLiteral("yCoord"));

        horizontalLayout->addWidget(yCoord);

        xLabel = new QLabel(layoutWidget);
        xLabel->setObjectName(QStringLiteral("xLabel"));

        horizontalLayout->addWidget(xLabel);

        xCoord = new QLineEdit(layoutWidget);
        xCoord->setObjectName(QStringLiteral("xCoord"));

        horizontalLayout->addWidget(xCoord);


        horizontalLayout_2->addLayout(horizontalLayout);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_2->addWidget(addButton);

        deletePoints = new QPushButton(layoutWidget);
        deletePoints->setObjectName(QStringLiteral("deletePoints"));

        horizontalLayout_2->addWidget(deletePoints);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 60, 141, 66));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        point1Label = new QLabel(layoutWidget1);
        point1Label->setObjectName(QStringLiteral("point1Label"));

        verticalLayout->addWidget(point1Label);

        point2Label = new QLabel(layoutWidget1);
        point2Label->setObjectName(QStringLiteral("point2Label"));

        verticalLayout->addWidget(point2Label);

        distanceLabel = new QLabel(layoutWidget1);
        distanceLabel->setObjectName(QStringLiteral("distanceLabel"));

        verticalLayout->addWidget(distanceLabel);

        randomButton = new QPushButton(centralWidget);
        randomButton->setObjectName(QStringLiteral("randomButton"));
        randomButton->setGeometry(QRect(10, 290, 137, 25));
        randomLabel = new QLabel(centralWidget);
        randomLabel->setObjectName(QStringLiteral("randomLabel"));
        randomLabel->setGeometry(QRect(20, 250, 88, 16));
        PlotWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PlotWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 586, 22));
        menuPoint_Grapher = new QMenu(menuBar);
        menuPoint_Grapher->setObjectName(QStringLiteral("menuPoint_Grapher"));
        PlotWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PlotWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PlotWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(PlotWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PlotWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPoint_Grapher->menuAction());

        retranslateUi(PlotWindow);

        QMetaObject::connectSlotsByName(PlotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PlotWindow)
    {
        PlotWindow->setWindowTitle(QApplication::translate("PlotWindow", "PlotWindow", nullptr));
        yLabel->setText(QApplication::translate("PlotWindow", "y:", nullptr));
        xLabel->setText(QApplication::translate("PlotWindow", "x:", nullptr));
        addButton->setText(QApplication::translate("PlotWindow", "Add Point", nullptr));
        deletePoints->setText(QApplication::translate("PlotWindow", "Delete Points", nullptr));
        point1Label->setText(QApplication::translate("PlotWindow", "Point 1:", nullptr));
        point2Label->setText(QApplication::translate("PlotWindow", "Point 2:", nullptr));
        distanceLabel->setText(QApplication::translate("PlotWindow", "Distance:", nullptr));
        randomButton->setText(QApplication::translate("PlotWindow", "Random Button", nullptr));
        randomLabel->setText(QApplication::translate("PlotWindow", "Random Label", nullptr));
        menuPoint_Grapher->setTitle(QApplication::translate("PlotWindow", "Point Grapher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotWindow: public Ui_PlotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWINDOW_H
