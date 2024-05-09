#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QFileDialog>
#include <QGraphicsScene>
#include <QGraphicsVideoItem>
#include <QMessageBox>


#include <QObject>
#include <QWidget>
#include <QVideoWidget>
#include <QMediaPlayer>
#include <QTime>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int clickCount = 0;

private slots:  //定义槽函数
    void on_pushButtonAdd_clicked();
    void onStateChange(QMediaPlayer::State state);
    void onVideoDurationChange(qint64 duration);
    void onVideoPositionChange(qint64 position);
    void onSoundSliderVolumeChanged(int volume);
    void onSoundVolumeChanged(int volume);
    void onVideoSliderValueChanged(int position);



    void on_pushButtonPlayer_clicked();

    void on_pushButtonpause_clicked();

    void on_pushButtonstop_clicked();

    void on_pushButtonsound_clicked();


private:
    Ui::MainWindow *ui;

private:
    QMediaPlayer *player;
    QGraphicsVideoItem *videoItem;
    QString durationTime;
    QString positionTime;





};
#endif // MAINWINDOW_H
