#ifndef QMYVIDEOWIDGET_H
#define QMYVIDEOWIDGET_H

#include <QObject>
#include <QWidget>
#include <QVideoWidget>
#include <QMediaPlayer>

#include <QKeyEvent>
#include <QMouseEvent>

class QmyVideoWidget : public QVideoWidget
{
public:
    QmyVideoWidget(QWidget *parent=Q_NULLPTR);
    void setMdialPlayer(QMediaPlayer *player);


private:
    QMediaPlayer *theplayer;

public:
    void keyPressEvent(QKeyEvent *event);
    void movePressEvent(QMouseEvent *event);



};

#endif // QMYVIDEOWIDGET_H
