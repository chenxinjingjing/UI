#include "NoVechPhotoCollection.h"
#include "ui_NoVechPhotoCollection.h"

NoVechPhotoCollection::NoVechPhotoCollection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NoVechPhotoCollection)
{
    ui->setupUi(this);
    m_index = 0;

}

NoVechPhotoCollection::~NoVechPhotoCollection()
{
    delete ui;
}

void NoVechPhotoCollection::on_cancel_clicked()
{
    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void NoVechPhotoCollection::on_pushButton_clicked()
{
    //此处为添加松哥的代码借口处
}

void NoVechPhotoCollection::on_m_btnNext_clicked()
{
    if(++m_index > 9){
        m_index = 0;
    }
    update();//触发绘图事件
}

void NoVechPhotoCollection::on_m_btnPrev_clicked()
{
    if(--m_index < 0){
        m_index = 9;
    }
    update();//触发绘图事件
}
//绘图事件处理函数
void NoVechPhotoCollection::paintEvent(QPaintEvent *)
{
    //创建画家对象
    //参数表示绘制设备,可以是当前的父窗口
    QPainter painter(this);
    //获取frame矩形区域
    QRect rect = ui->frame->frameRect();
    //平移rect和painter使用相同坐标系
    rect.translate(ui->frame->pos());

    //平移之前:QRect(0,0 466x312)
    //平移之后:QRect(11,11 466x312)
    //qDebug() << rect;
    //QPoint(11,11)
    //qDebug() << ui->frame->pos();

    //创建和索引对象的图片对象,":/images/xx.jpg"
    QImage image(":/images/"+
        QString::number(m_index)+".jpg");
    //使用painter将image画到矩形区域中
    painter.drawImage(rect,image);
}

