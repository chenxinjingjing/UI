#ifndef CONTINUOUSSHOTDIALOG_H
#define CONTINUOUSSHOTDIALOG_H

#include <QDialog>
#include "AccuracyTestDialog.h"
#include <QDir>
#include <QPainter>
#include <QTime>
#include <QVector>
#include <QDebug>


namespace Ui {
class ContinuousShotDialog;
}

class ContinuousShotDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ContinuousShotDialog(QWidget *parent = 0);
    ~ContinuousShotDialog();

private slots:
    void on_cancel_clicked();

    void on_pushButton_clicked();
    void on_flashPhotos_clicked();

private:
    //绘图事件处理函数
    void paintEvent(QPaintEvent *);
    //定时器事件处理函数
    void timerEvent(QTimerEvent *);
    //从参数path目录下加载图片
    void loadPhotos(const QString& path);

private:
    Ui::ContinuousShotDialog *ui;
//private:
    //Ui::ContinuousShotDialog *ui;
    bool isStarted;//标记:true正在摇奖false停止
    QVector<QImage> m_vecPhoto;//容器:保存图片
    int m_index;//图片在容器中的索引
    int m_idTimer;//定时器ID
};

#endif // CONTINUOUSSHOTDIALOG_H
