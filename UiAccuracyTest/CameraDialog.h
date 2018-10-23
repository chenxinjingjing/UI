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
    Ui::CameraDialog *ui;
};

#endif // CAMERADIALOG_H
