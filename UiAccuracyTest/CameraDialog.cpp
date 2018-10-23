#include "CameraDialog.h"
#include "ui_CameraDialog.h"

CameraDialog::CameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraDialog)
{
    ui->setupUi(this);
}

CameraDialog::~CameraDialog()
{
    delete ui;
}

void CameraDialog::on_save_the_txt_clicked()
{

}



void CameraDialog::on_cancel_clicked()
{

    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}
