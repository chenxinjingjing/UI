#include "AccuracyTestDialog.h"
#include "ui_AccuracyTestDialog.h"

AccuracyTestDialog::AccuracyTestDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccuracyTestDialog)
{
    ui->setupUi(this);
}

AccuracyTestDialog::~AccuracyTestDialog()
{
    delete ui;
}

void AccuracyTestDialog::on_photo_collecton_clicked()
{
    NoVechPhotoCollection* WCPZ=new NoVechPhotoCollection();
    WCPZ->show();
    //跳转窗口并关闭旧的窗口
    this->close();

}

void AccuracyTestDialog::on_handinput_Gps_clicked()
{
    GpsDialog* GPSParam=new GpsDialog();
    GPSParam->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void AccuracyTestDialog::on_camera_param_clicked()
{
    CameraParamDialog* CameraPD=new CameraParamDialog();
    CameraPD->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}

void AccuracyTestDialog::on_continuous_shooting_clicked()
{
    ContinuousShotDialog* CONPS=new ContinuousShotDialog();
    CONPS->show();
    //跳转窗口并关闭旧的窗口
    this->close();
}


void AccuracyTestDialog::on_pushButton_button_clicked()
{

    CameraDialog* camera_pa=new CameraDialog();
    camera_pa->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}
