#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmediaplaylist.h"
#include <QMediaPlaylist>
#include <QFileDialog>
#include <QSlider>
#include <QDir>
#include <QMediaPlayer>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);

    m_playlist = new QMediaPlaylist(player);
    player->setPlaylist(m_playlist);
    player->setVolume(70);
    m_playlist->setPlaybackMode(QMediaPlaylist::Loop);
    m_playListModel = new QStandardItemModel(this);
    ui->playlist->setModel(m_playListModel);

    ui->playlist->hideColumn(1);
    ui->playlist->verticalHeader()->setVisible(false);
    ui->playlist->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->playlist->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->playlist->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->playlist->horizontalHeader()->setStretchLastSection(true);


    connect(player, &QMediaPlayer::durationChanged, ui->horizontalSlider_2, &QSlider::setMaximum);
    connect(player, &QMediaPlayer::positionChanged, ui->horizontalSlider_2, &QSlider::setValue);


     connect(ui->actionPlay, &QAction::changed, player, &QMediaPlayer::play);
     connect(ui->actionPause, &QAction::changed, player, &QMediaPlayer::pause);
     connect(ui->actionactionnext,&QAction::triggered,m_playlist,&QMediaPlaylist::next);
     connect(ui->actionactback, &QAction::triggered,m_playlist,&QMediaPlaylist::previous);


     connect(ui->playlist, &QTableView::doubleClicked,this, [this](const QModelIndex &index){ m_playlist->setCurrentIndex(index.row()); });


     m_playListModel->setHorizontalHeaderLabels(QStringList()  << tr("Play List")
                                                << tr("File Path"));

   connect(m_playlist, &QMediaPlaylist::currentIndexChanged,this, [this](int index){
            ui->LblNowPlaying->setText(m_playListModel->data(m_playListModel->index(index, 0)).toString());
        });

    }

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionOpen_triggered()
{
    QStringList files = QFileDialog::getOpenFileNames(this,
                                                          tr("Open files"),
                                                          QString(),
                                                          tr("Audio Files (*.mp3)"));


        foreach (QString filePath, files) {
            QList<QStandardItem *> items;
            items.append(new QStandardItem(QDir(filePath).dirName()));
            items.append(new QStandardItem(filePath));
            m_playListModel->appendRow(items);
            m_playlist->addMedia(QUrl(filePath));
        }
        player->play();


}
void MainWindow::on_actionPlay_triggered()
{

       player->play();
       player->setMuted(false);

       ui->Lblstatus->setText("Playing");
       ui->Lblmute->setText("Flash HD Sound");

}
void MainWindow::on_actionPause_triggered()
{
       player->pause();
       ui->Lblstatus->setText("Paused");

}



void MainWindow::on_actionmute_triggered()
{
     player->setMuted(true);
     ui->Lblmute->setText("Muted");

}

void MainWindow::on_actionvolume_triggered()
{

}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    player->setVolume(value);

    if(value == 0){
    ui->pushButton->setIcon(QIcon(":/ico/icons/icons8-mute-48.png"));
    player->setVolume(0);
    }else{
    ui->pushButton->setIcon(QIcon(":/ico/icons/icons8-sound-50.png"));
    player->setVolume(value);
    }
    ui->horizontalSlider->setSliderPosition(value);
    ui->Lblmute->setText("Volum up");


}

void MainWindow::on_actionStop_2_triggered()
{


}





void MainWindow::on_pushButton_clicked()
{
     player->setVolume(0);
     ui->horizontalSlider->setSliderPosition(0);
     ui->pushButton->setIcon(QIcon(":/ico/icons/icons8-mute-48.png"));
     ui->Lblmute->setText("Mute");


}


void MainWindow::on_btnaddlist_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this,
                                                          tr("Open files"),
                                                          QString(),
                                                          tr("Audio Files (*.mp3)"));

        foreach (QString filePath, files) {
            QList<QStandardItem *> items;
            items.append(new QStandardItem(QDir(filePath).dirName()));
            items.append(new QStandardItem(filePath));
            m_playListModel->appendRow(items);
            m_playlist->addMedia(QUrl(filePath));
        }

        player->play();


}

void MainWindow::on_actionad_triggered()
{

}


void MainWindow::on_horizontalSlider_2_sliderMoved(int position)
{
    qInfo() << "position is " << position ;
       mediaPlayer->setPosition(position);
}


void MainWindow::on_actionstop_triggered()
{

}


void MainWindow::on_actionactionstop_triggered()
{
    player->stop();
    ui->Lblstatus->setText("Stoped");
}


void MainWindow::on_actionactionnext_triggered()
{


}


void MainWindow::on_actionAbout_Developper_triggered()
{
//    QMessageBox msgBox;
//    msgBox.setText("Flash Music Playear : Developed
//    msgBox.exec();
    QWidget *about_developer=new QWidget;
   about_developer->show();
}

