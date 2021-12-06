#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>
#include <QStandardItemModel>
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionVolume_triggered();

    void on_horizontalSlider_actionTriggered();

    void on_progressBar_valueChanged();

    void on_progressBarVl_valueChanged();

    void on_horizontalSliderVl_actionTriggered();

    void on_horizontalSlider_actionTriggered(int action);

    void on_thaudio_actionTriggered(int action);

    void on_tbVolume_actionTriggered(int action);

    void on_tbVolume_sliderMoved(int position);

    void on_audiodial_actionTriggered(int action);

    void on_actionmute_triggered();

    void on_vSliderSound_valueChanged(int value);

    void on_Sound_actionTriggered(int action);

    void on_label_linkActivated(const QString &link);

    void on_SetTimeLable_linkActivated(const QString &link);

    void on_MainWindow_iconSizeChanged(const QSize &iconSize);

    void on_Timelabel_linkActivated(const QString &link);

    void on_actionvolume_triggered();

    void on_timelable_linkActivated(const QString &link);

    void on_endTime_linkActivated(const QString &link);

    void on_horizontalSlider_valueChanged(int value);

    void on_dial_actionTriggered(int action);

    void on_horizontalSlider_sliderReleased();

    void on_progressBar_valueChanged(int value);

    void on_pushButton_clicked();

    void on_btnaddlist_clicked();

    void on_actionstop_triggered();

    void on_horizontalSlider_sliderMoved(int position);

    void on_actionad_triggered();

    void on_horizontalSlider_2_sliderMoved(int position);

    void on_actionactionstop_triggered();

    void on_actionactionnext_triggered();

    void on_actionAbout_Developper_triggered();

    void on_actionactback_triggered();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_2_pressed();

    void on_actionfast_changed();

    void on_actionfast_toggled(bool arg1);

    void on_horizontalSlider_3_rangeChanged(int min, int max);

    void on_horizontalSlider_3_sliderMoved(int position);

    void on_actionfast_triggered(bool checked);

    void on_lbltime_linkActivated(const QString &link);

    void on_lbltime_linkHovered(const QString &link);

    void on_actionnext_triggered();

    void on_comboBox_activated(const QString &arg1);

    void on_actionback_triggered();

    void on_comboBox_activated(int index);

    void on_horizontalSlider_2_actionTriggered(int action);

    void on_actionaction_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player;
    QVideoWidget* VW;
    QProgressBar* bar;
    QSlider* slider;
    QString filename;
    QPixmap pixmap;
    QMediaPlayer *mediaPlayer;
    QMediaPlaylist *m_playlist;
    QStandardItemModel  *m_playListModel;



};
#endif // MAINWINDOW_H
