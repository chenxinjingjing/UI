#ifndef CAMERADIALOG_H
#define CAMERADIALOG_H

#include <QDialog>
#include "AccuracyTestDialog.h"

namespace Ui {
class CameraDialog;
}

class CameraDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CameraDialog(QWidget *parent = 0);
    ~CameraDialog();

private slots:
    void on_save_the_txt_clicked();

    void on_cancel_clicked();

private:
    bool isSaved; //为true时标志文件已经保存，为false时标志文件尚未保存
    QString curFile; //保存当前文件的文件名
    void do_file_New(); //新建文件
    void do_file_SaveOrNot(); //修改过的文件是否保存
    void do_file_Save(); //保存文件
    void do_file_SaveAs(); //文件另存为
    bool saveFile(const QString& fileName); //存储文件

private:
    Ui::CameraDialog *ui;
};

#endif // CAMERADIALOG_H
