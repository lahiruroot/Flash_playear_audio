/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionmute;
    QAction *actionactionstop;
    QAction *actionAbout_Developper;
    QAction *actionnext;
    QAction *actionaction;
    QWidget *widget;
    QTableView *playlist;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *Lblmute;
    QLabel *label;
    QSlider *horizontalSlider;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider_2;
    QLabel *Lblstatus;
    QPushButton *btnaddlist;
    QLabel *LblNowPlaying;
    QLabel *lblnextpre;
    QComboBox *comboBox;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuMedia;
    QMenu *menuPlayback;
    QMenu *menuAudio;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(662, 584);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(10, 10));
        MainWindow->setMaximumSize(QSize(820, 900));
        MainWindow->setSizeIncrement(QSize(10, 10));
        MainWindow->setMouseTracking(false);
        MainWindow->setTabletTracking(false);
        MainWindow->setAcceptDrops(false);
        MainWindow->setWindowTitle(QString::fromUtf8("Flash Playear"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icons/es.webp"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks);
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/icons/addSong.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8("../build-Flash_playear-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/recources/icons/addSong.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon2);
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/icons/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionmute = new QAction(MainWindow);
        actionmute->setObjectName(QString::fromUtf8("actionmute"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ico/icons/mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionmute->setIcon(icon4);
        actionactionstop = new QAction(MainWindow);
        actionactionstop->setObjectName(QString::fromUtf8("actionactionstop"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ico/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionactionstop->setIcon(icon5);
        actionAbout_Developper = new QAction(MainWindow);
        actionAbout_Developper->setObjectName(QString::fromUtf8("actionAbout_Developper"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../Documents/Flash_playear/icons/icons8-about-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Developper->setIcon(icon6);
        actionnext = new QAction(MainWindow);
        actionnext->setObjectName(QString::fromUtf8("actionnext"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/ico/icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionnext->setIcon(icon7);
        actionaction = new QAction(MainWindow);
        actionaction->setObjectName(QString::fromUtf8("actionaction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../Documents/Flash_playear/icons/icons8-last-track-button-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionaction->setIcon(icon8);
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        playlist = new QTableView(widget);
        playlist->setObjectName(QString::fromUtf8("playlist"));
        playlist->setGeometry(QRect(10, 30, 641, 171));
        playlist->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(43, 16, 125);"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 250, 251, 90));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Lblmute = new QLabel(layoutWidget);
        Lblmute->setObjectName(QString::fromUtf8("Lblmute"));
        QFont font;
        font.setFamily(QString::fromUtf8("DS-Digital"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Lblmute->setFont(font);
        Lblmute->setStyleSheet(QString::fromUtf8("font: 18pt \"DS-Digital\";\n"
"color: rgb(0, 170, 0);"));
        Lblmute->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Lblmute, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 0);\n"
"color: rgb(0, 170, 0);\n"
"font: 30pt \"DS-Digital\";"));
        label->setText(QString::fromUtf8("10"));
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(440, 350, 201, 22));
        horizontalSlider->setCursor(QCursor(Qt::OpenHandCursor));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(10);
        horizontalSlider->setSliderPosition(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(390, 346, 41, 31));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/ico/icons/icons8-sound-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon9);

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 440, 631, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSlider_2 = new QSlider(horizontalLayoutWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_2);

        Lblstatus = new QLabel(widget);
        Lblstatus->setObjectName(QString::fromUtf8("Lblstatus"));
        Lblstatus->setEnabled(true);
        Lblstatus->setGeometry(QRect(90, 270, 231, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Lblstatus->sizePolicy().hasHeightForWidth());
        Lblstatus->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("DS-Digital"));
        font1.setPointSize(35);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Lblstatus->setFont(font1);
        Lblstatus->setAutoFillBackground(false);
        Lblstatus->setStyleSheet(QString::fromUtf8("font: 35pt \"DS-Digital\";\n"
"color: rgb(0, 85, 255);"));
        Lblstatus->setLineWidth(0);
        Lblstatus->setAlignment(Qt::AlignCenter);
        btnaddlist = new QPushButton(widget);
        btnaddlist->setObjectName(QString::fromUtf8("btnaddlist"));
        btnaddlist->setGeometry(QRect(10, 260, 61, 81));
        btnaddlist->setStyleSheet(QString::fromUtf8("border-image: url(:/ico/icons/addSong.png);"));
        LblNowPlaying = new QLabel(widget);
        LblNowPlaying->setObjectName(QString::fromUtf8("LblNowPlaying"));
        LblNowPlaying->setGeometry(QRect(10, 210, 641, 34));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DS-Digital"));
        font2.setPointSize(17);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        LblNowPlaying->setFont(font2);
        LblNowPlaying->setStyleSheet(QString::fromUtf8("color: rgb(0, 185, 0);\n"
"font: 17pt \"DS-Digital\";"));
        LblNowPlaying->setAlignment(Qt::AlignCenter);
        lblnextpre = new QLabel(widget);
        lblnextpre->setObjectName(QString::fromUtf8("lblnextpre"));
        lblnextpre->setEnabled(true);
        lblnextpre->setGeometry(QRect(100, 330, 191, 51));
        sizePolicy1.setHeightForWidth(lblnextpre->sizePolicy().hasHeightForWidth());
        lblnextpre->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("DS-Digital"));
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        lblnextpre->setFont(font3);
        lblnextpre->setAutoFillBackground(false);
        lblnextpre->setStyleSheet(QString::fromUtf8("font: 15pt \"DS-Digital\";\n"
"color: rgb(0, 85, 255);"));
        lblnextpre->setLineWidth(0);
        lblnextpre->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(400, 390, 241, 31));
        MainWindow->setCentralWidget(widget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        toolBar->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Franklin Gothic Medium"));
        font4.setPointSize(12);
        toolBar->setFont(font4);
        toolBar->setCursor(QCursor(Qt::PointingHandCursor));
        toolBar->setMouseTracking(false);
        toolBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setAutoFillBackground(false);
        toolBar->setStyleSheet(QString::fromUtf8("color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 662, 26));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuMedia = new QMenu(menuBar);
        menuMedia->setObjectName(QString::fromUtf8("menuMedia"));
        menuPlayback = new QMenu(menuBar);
        menuPlayback->setObjectName(QString::fromUtf8("menuPlayback"));
        menuAudio = new QMenu(menuBar);
        menuAudio->setObjectName(QString::fromUtf8("menuAudio"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        toolBar->addAction(actionOpen);
        toolBar->addAction(actionPlay);
        toolBar->addAction(actionPause);
        toolBar->addSeparator();
        toolBar->addAction(actionactionstop);
        toolBar->addAction(actionaction);
        toolBar->addAction(actionnext);
        menuBar->addAction(menuMedia->menuAction());
        menuBar->addAction(menuPlayback->menuAction());
        menuBar->addAction(menuAudio->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuMedia->addAction(actionOpen);
        menuMedia->addAction(actionPause);
        menuMedia->addAction(actionactionstop);
        menuMedia->addAction(actionPlay);
        menuPlayback->addAction(actionnext);
        menuAudio->addAction(actionmute);
        menuAbout->addAction(actionAbout_Developper);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(sliderMoved(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowFilePath(QString());
        actionOpen->setText(QApplication::translate("MainWindow", "Add mp3 media file", nullptr));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open file", nullptr));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play Audio", nullptr));
        actionPause->setText(QApplication::translate("MainWindow", "Pause Track", nullptr));
        actionmute->setText(QApplication::translate("MainWindow", "Mute Track", nullptr));
        actionactionstop->setText(QApplication::translate("MainWindow", "Stop Playing", nullptr));
        actionAbout_Developper->setText(QApplication::translate("MainWindow", "About Developper", nullptr));
        actionnext->setText(QApplication::translate("MainWindow", "next", nullptr));
        actionaction->setText(QApplication::translate("MainWindow", "action", nullptr));
        Lblmute->setText(QApplication::translate("MainWindow", "Flash HD Sound", nullptr));
        pushButton->setText(QString());
        Lblstatus->setText(QApplication::translate("MainWindow", "Flash MP3", nullptr));
        btnaddlist->setText(QString());
        LblNowPlaying->setText(QApplication::translate("MainWindow", "Playlist", nullptr));
        lblnextpre->setText(QApplication::translate("MainWindow", "--/--", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "1x", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "0.5x", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        menuMedia->setTitle(QApplication::translate("MainWindow", "Media", nullptr));
        menuPlayback->setTitle(QApplication::translate("MainWindow", "Playback", nullptr));
        menuAudio->setTitle(QApplication::translate("MainWindow", "Audio", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
