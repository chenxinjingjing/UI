#ifndef NOVECHPHOTOCOLLECTION_H
#define NOVECHPHOTOCOLLECTION_H

#include <QDialog>
#include "AccuracyTestDialog.h"
#include <QPainter>



namespace Ui {
class NoVechPhotoCollection;
}

class NoVechPhotoCollection : public QDialog
{
    Q_OBJECT

public:
    explicit NoVechPhotoCollection(QWidget *parent = 0);
    ~NoVechPhotoCollection();

private slots:
    void on_cancel_clicked();

    void on_pushButton_clicked();

    void on_m_btnNext_clicked();

    void on_m_btnPrev_clicked();
private:
    //绘图事件处理函数
    void paintEvent(QPaintEvent *);

private:
    Ui::NoVechPhotoCollection *ui;
    int m_index;//图片的索引
};

#endif // NOVECHPHOTOCOLLECTION_H
