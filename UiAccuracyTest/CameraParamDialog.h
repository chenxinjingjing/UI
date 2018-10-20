#ifndef CAMERAPARAMDIALOG_H
#define CAMERAPARAMDIALOG_H

#include <QDialog>
#include "AccuracyTestDialog.h"
#include <QSettings>
#include <QDebug>

namespace Ui {
class CameraParamDialog;
}

class CameraParamDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CameraParamDialog(QWidget *parent = 0);
    ~CameraParamDialog();

private slots:
    void on_cancel_clicked();

    void on_savePhotoParams_clicked();

private:
    Ui::CameraParamDialog *ui;
};

#endif // CAMERAPARAMDIALOG_H
