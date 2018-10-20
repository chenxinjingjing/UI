#include "ContinuousShotDialog.h"
#include "ui_ContinuousShotDialog.h"

ContinuousShotDialog::ContinuousShotDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContinuousShotDialog)
{
    ui->setupUi(this);
    //初始化状态
    isStarted = false;
    //设置随机种子
    qsrand(QTime::currentTime().msec());
    //初始化索引
    m_index = 0;
    //从"./photos"动态加载所有的图片
    loadPhotos("./photos");
    qDebug() << "加载出" << m_vecPhoto.size()
             << "个图片";//加载出13个图片
}

ContinuousShotDialog::~ContinuousShotDialog()
{
    delete ui;
}

void ContinuousShotDialog::on_cancel_clicked()
{
    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void ContinuousShotDialog::on_pushButton_clicked()
{
    if(isStarted == false){
        isStarted = true;//开始摇奖
        m_idTimer = startTimer(330);//开启定时器
        ui->pushButton->setText("停止");
    }
    else{
        isStarted = false;//停止摇奖
        killTimer(m_idTimer);//关闭定时器
        ui->pushButton->setText("开始");
    }
}
//绘图事件处理函数
void ContinuousShotDialog::paintEvent(QPaintEvent *)
{
    //创建画家对象
    QPainter painter(this);
    //获取绘图的矩形区域
    QRect rect = ui->frame->frameRect();
    //平移:让rect和painter使用相同的坐标系
    rect.translate(ui->frame->pos());
    //绘制指定图片
    painter.drawImage(rect,m_vecPhoto[m_index]);
}
//定时器事件处理函数
void ContinuousShotDialog::timerEvent(QTimerEvent *)
{
    //随机获取一个图片的索引
    m_index = qrand() % m_vecPhoto.size();
    update();//触发绘图事件
}
//从参数path目录下加载图片
void ContinuousShotDialog::loadPhotos(
        const QString& path)
{
    //创建目录对象
    QDir dir(path);
    //遍历当前目录下所有文件(图片)
    foreach(QString file,
            dir.entryList(QDir::Files)){
        //根据文件名创建图片对象
        QImage image(path+"/"+file);
        //保存图片对象到容器
        m_vecPhoto << image;
    }
    //递归遍历子目录,不包括"."和".."
    foreach(QString subDir,
            dir.entryList(QDir::Dirs
                | QDir::NoDotAndDotDot)){
        loadPhotos(path+"/"+subDir);
    }
}


void ContinuousShotDialog::on_flashPhotos_clicked()
{
    //这里来提供松哥代码调用的借口
}
