#include "GpsDialog.h"
#include "ui_GpsDialog.h"

GpsDialog::GpsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GpsDialog)
{
    ui->setupUi(this);
}

GpsDialog::~GpsDialog()
{
    delete ui;
}

void GpsDialog::on_cancel_clicked()
{
    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void GpsDialog::on_pushButton_clicked()
{
    //pos
    QString px=ui->px->text();
    QString py=ui->py->text();
    QString pz=ui->pz->text();
    qDebug() << px ;
    qDebug() << py ;
    qDebug() << pz ;
    //orient
    QString ox=ui->ox->text();
    QString oy=ui->oy->text();
    QString oz=ui->oz->text();
    qDebug() << ox ;
    qDebug() << oy ;
    qDebug() << oz ;



    //QSettings settings("Software Inc", "Spreadsheet");
    // windows在注册表中建立建
    //Software Inc -> Spreadsheet
    QSettings settings("GpsParams.ini", QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("DevOption");
    settings.setValue("px", px);
    settings.setValue("py", py);
    settings.setValue("pz", pz);
    settings.setValue("ox", ox);
    settings.setValue("oy", oy);
    settings.setValue("oz", oz);
    /*
    //cout<<"service=%s%s%s"<<(qx,qy,qz)<<endl;
    //settings.setValue("combin=(%s %s %s)",(qx,qy,qz));*/
    settings.endGroup();
    //qDebug()<<"dayin";
    //渲染
}
