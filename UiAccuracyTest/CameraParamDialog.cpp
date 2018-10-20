#include "CameraParamDialog.h"
#include "ui_CameraParamDialog.h"

CameraParamDialog::CameraParamDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraParamDialog)
{
    ui->setupUi(this);
}

CameraParamDialog::~CameraParamDialog()
{
    delete ui;
}

void CameraParamDialog::on_cancel_clicked()
{
    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void CameraParamDialog::on_savePhotoParams_clicked()
{
    //a
    //当改正的内容需要很多的时候,我觉得可以对ax="需要命令的变量的名字"
    //这里是需要特别注意的一个东西
    QString ax=ui->ax->text();
    QString ay=ui->ay->text();
    QString az=ui->az->text();
    qDebug() << ax ;
    qDebug() << ay ;
    qDebug() << az ;
    //b
    QString bx=ui->bx->text();
    QString by=ui->by->text();
    QString bz=ui->bz->text();
    qDebug() << bx ;
    qDebug() << by ;
    qDebug() << bz ;
    //c
    QString cx=ui->cx->text();
    QString cy=ui->cy->text();
    QString cz=ui->cz->text();
    qDebug() << cx ;
    qDebug() << cy ;
    qDebug() << cz ;
    //d
    QString dx=ui->dx->text();
    QString dy=ui->dy->text();
    QString dz=ui->dz->text();
    qDebug() << dx ;
    qDebug() << dy ;
    qDebug() << dz ;

    //QSettings settings("Software Inc", "Spreadsheet");
    // windows在注册表中建立建
    //Software Inc -> Spreadsheet
    QSettings settings("CameraParam.ini", QSettings::IniFormat); // 当前目录的INI文件
    settings.beginGroup("DevOption");
    //qDebug()<<"dayin";
    settings.setValue("ax", ax);
    settings.setValue("ay", ay);
    settings.setValue("az", az);
    settings.setValue("bx", bx);
    settings.setValue("by", by);
    settings.setValue("bz", bz);
    settings.setValue("cx", cx);
    settings.setValue("cy", cy);
    settings.setValue("cz", cz);
    settings.setValue("dx", dx);
    settings.setValue("dy", dy);
    settings.setValue("dz", dz);/*
    //cout<<"service=%s%s%s"<<(qx,qy,qz)<<endl;
    //settings.setValue("combin=(%s %s %s)",(qx,qy,qz));*/
    settings.endGroup();
    //qDebug()<<"dayin";
    //渲染
}
