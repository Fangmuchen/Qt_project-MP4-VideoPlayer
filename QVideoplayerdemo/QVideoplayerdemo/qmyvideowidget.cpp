#include "qmyvideowidget.h"


QmyVideoWidget::QmyVideoWidget(QWidget *parent):QVideoWidget(parent)
{

}


void QmyVideoWidget::setMdialPlayer(QMediaPlayer *player)
{
    //设置播放
    theplayer = player;

}



void QmyVideoWidget::keyPressEvent(QKeyEvent *event)
{

}
void QmyVideoWidget::movePressEvent(QMouseEvent *event)
{


}
