#include "CameraDialog.h"
#include "ui_CameraDialog.h"

#include <QtGui>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>

CameraDialog::CameraDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraDialog)
{
    ui->setupUi(this);
    isSaved = false; //初始化文件为未保存过状态
    curFile = tr("vp.conf"); //初始化文件名为“未命名.txt”
    setWindowTitle(curFile); //初始化主窗口的标题
}

CameraDialog::~CameraDialog()
{
    delete ui;
}


void CameraDialog::on_cancel_clicked()
{

    AccuracyTestDialog* backMainWin=new AccuracyTestDialog();
    backMainWin->show();
    //跳转窗口并关闭旧的窗口
    this->accept();
}


void CameraDialog::on_save_the_txt_clicked()
{
    do_file_New();
    do_file_Save();
    //do_file_SaveAs();
    //这里需要实现的是,点击保存的同时需要生成新的txt文件,以及跳转到原来的窗口
    CameraDialog* pcamera = new CameraDialog();
    pcamera->show();
QDialog:reject();
}

//bool isSaved; //为true时标志文件已经保存，为false时标志文件尚未保存
//QString curFile; //保存当前文件的文件名
void CameraDialog::do_file_New()
{
    do_file_SaveOrNot();
    isSaved = false;
    curFile = tr("vp.conf");
    setWindowTitle(curFile);
    ui->datafusion_params->clear(); //清空文本编辑器
    ui->datafusion_params->setVisible(true); //文本编辑器可见
}//新建文件
void CameraDialog::do_file_SaveOrNot()
{
    if(ui->datafusion_params->document()->isModified()) //如果文件被更改过，弹出保存对话框
    {
        QMessageBox box;
        box.setWindowTitle(tr("waring"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile + tr("  save or not "));
        box.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        if(box.exec() == QMessageBox::Yes) //如果选择保存文件，则执行保存操作
            do_file_Save();
    }
} //修改过的文件是否保存
void CameraDialog::do_file_Save()
{
    if(isSaved){ //如果文件已经被保存过，直接保存文件
        saveFile(curFile);
    }
    else{ do_file_SaveAs(); //如果文件是第一次保存，那么调用另存为
    }
}//保存文件
void CameraDialog::do_file_SaveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("save as"),curFile);
    //获得文件名
    if(!fileName.isEmpty())
        //如果文件名不为空，则保存文件内容
    {
        saveFile(fileName);
    }
}//文件另存为
bool CameraDialog::saveFile(const QString& fileName)
//保存文件内容，因为可能保存失败，所以具有返回值，来表明是否保存成功
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text)) //以只写方式打开文件，如果打开失败则弹出提示框并返回
    {
        QMessageBox::warning(this,tr("保存文件"),tr("无法保存文件 %1:\n %2"),QMessageBox::Yes);
        return false;
    }
    //%1,%2表示后面的两个arg参数的值
    QTextStream out(&file); //新建流对象，指向选定的文件
    out << ui->datafusion_params->toPlainText(); //将文本编辑器里的内容以纯文本的形式输出到流对象中
    isSaved = true;
    curFile = QFileInfo(fileName).canonicalFilePath(); //获得文件的标准路径
    setWindowTitle(curFile); //将窗口名称改为现在窗口的路径
    return true;
    //保存完主页面的时候,关闭本窗口
QDialog:reject();
}





