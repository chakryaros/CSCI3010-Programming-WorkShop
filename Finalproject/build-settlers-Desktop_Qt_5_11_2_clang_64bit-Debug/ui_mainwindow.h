/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *gameView;
    QPushButton *StartGame;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Player1;
    QLabel *Money;
    QLabel *Wood;
    QLabel *stone;
    QPushButton *AIButton_2;
    QFrame *frame_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *Player2;
    QLabel *Money2;
    QLabel *wood2;
    QLabel *stone2;
    QPushButton *AIButton;
    QFrame *frame_3;
    QLabel *label_4;
    QPlainTextEdit *OutputBox;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *BuildHouseButton;
    QPushButton *EndButton;
    QLabel *label_2;
    QPushButton *BuildWallButton;
    QLabel *label_3;
    QPushButton *PurchaseButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1181, 900);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gameView = new QGraphicsView(centralWidget);
        gameView->setObjectName(QStringLiteral("gameView"));
        gameView->setGeometry(QRect(10, 30, 900, 800));
        gameView->setMinimumSize(QSize(900, 800));
        gameView->setMaximumSize(QSize(900, 800));
        gameView->setFrameShape(QFrame::Box);
        gameView->setFrameShadow(QFrame::Plain);
        gameView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gameView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        gameView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        gameView->setBackgroundBrush(brush);
        StartGame = new QPushButton(centralWidget);
        StartGame->setObjectName(QStringLiteral("StartGame"));
        StartGame->setGeometry(QRect(10, 0, 131, 32));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(920, 30, 251, 141));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 231, 132));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Player1 = new QLabel(layoutWidget);
        Player1->setObjectName(QStringLiteral("Player1"));
        Player1->setStyleSheet(QStringLiteral("font: 13pt \".SF NS Text\";"));

        verticalLayout->addWidget(Player1);

        Money = new QLabel(layoutWidget);
        Money->setObjectName(QStringLiteral("Money"));

        verticalLayout->addWidget(Money);

        Wood = new QLabel(layoutWidget);
        Wood->setObjectName(QStringLiteral("Wood"));

        verticalLayout->addWidget(Wood);

        stone = new QLabel(layoutWidget);
        stone->setObjectName(QStringLiteral("stone"));

        verticalLayout->addWidget(stone);

        AIButton_2 = new QPushButton(layoutWidget);
        AIButton_2->setObjectName(QStringLiteral("AIButton_2"));

        verticalLayout->addWidget(AIButton_2);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(920, 180, 251, 141));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 231, 132));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Player2 = new QLabel(layoutWidget1);
        Player2->setObjectName(QStringLiteral("Player2"));
        Player2->setStyleSheet(QStringLiteral("font: 13pt \".SF NS Text\";"));

        verticalLayout_2->addWidget(Player2);

        Money2 = new QLabel(layoutWidget1);
        Money2->setObjectName(QStringLiteral("Money2"));

        verticalLayout_2->addWidget(Money2);

        wood2 = new QLabel(layoutWidget1);
        wood2->setObjectName(QStringLiteral("wood2"));

        verticalLayout_2->addWidget(wood2);

        stone2 = new QLabel(layoutWidget1);
        stone2->setObjectName(QStringLiteral("stone2"));

        verticalLayout_2->addWidget(stone2);

        AIButton = new QPushButton(layoutWidget1);
        AIButton->setObjectName(QStringLiteral("AIButton"));

        verticalLayout_2->addWidget(AIButton);

        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(920, 330, 251, 241));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 10, 91, 16));
        OutputBox = new QPlainTextEdit(frame_3);
        OutputBox->setObjectName(QStringLiteral("OutputBox"));
        OutputBox->setGeometry(QRect(10, 30, 231, 201));
        OutputBox->setReadOnly(true);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(920, 580, 257, 100));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        BuildHouseButton = new QPushButton(layoutWidget2);
        BuildHouseButton->setObjectName(QStringLiteral("BuildHouseButton"));

        gridLayout->addWidget(BuildHouseButton, 0, 1, 1, 1);

        EndButton = new QPushButton(layoutWidget2);
        EndButton->setObjectName(QStringLiteral("EndButton"));

        gridLayout->addWidget(EndButton, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        BuildWallButton = new QPushButton(layoutWidget2);
        BuildWallButton->setObjectName(QStringLiteral("BuildWallButton"));

        gridLayout->addWidget(BuildWallButton, 1, 1, 1, 2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        PurchaseButton = new QPushButton(layoutWidget2);
        PurchaseButton->setObjectName(QStringLiteral("PurchaseButton"));

        gridLayout->addWidget(PurchaseButton, 2, 1, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1181, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        StartGame->setText(QApplication::translate("MainWindow", "Start New Game", nullptr));
        Player1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#0e00c4;\">Player 1:</span></p></body></html>", nullptr));
        Money->setText(QApplication::translate("MainWindow", "Gold : ", nullptr));
        Wood->setText(QApplication::translate("MainWindow", "Wood :  ", nullptr));
        stone->setText(QApplication::translate("MainWindow", "Stone :  ", nullptr));
        AIButton_2->setText(QApplication::translate("MainWindow", "Take AI Turn", nullptr));
        Player2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#f8000b;\">Player 2:</span></p></body></html>", nullptr));
        Money2->setText(QApplication::translate("MainWindow", "Gold : ", nullptr));
        wood2->setText(QApplication::translate("MainWindow", "Wood :  ", nullptr));
        stone2->setText(QApplication::translate("MainWindow", "Stone :  ", nullptr));
        AIButton->setText(QApplication::translate("MainWindow", "Take AI Turn", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#00d800;\">Information:</span></p></body></html>", nullptr));
        OutputBox->setPlaceholderText(QApplication::translate("MainWindow", "Player 1's turn!", nullptr));
        label->setText(QApplication::translate("MainWindow", "50 W", nullptr));
        BuildHouseButton->setText(QApplication::translate("MainWindow", "Build House", nullptr));
        EndButton->setText(QApplication::translate("MainWindow", "End Turn", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "30 S", nullptr));
        BuildWallButton->setText(QApplication::translate("MainWindow", "Build Wall", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "$150", nullptr));
        PurchaseButton->setText(QApplication::translate("MainWindow", "Purchase Spy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
