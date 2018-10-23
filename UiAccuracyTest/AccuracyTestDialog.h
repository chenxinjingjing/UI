#ifndef ACCURACYTESTDIALOG_H
#define ACCURACYTESTDIALOG_H

#include <QDialog>
#include "NoVechPhotoCollection.h"
#include "GpsDialog.h"
#include "CameraParamDialog.h"
#include "ContinuousShotDialog.h"
#include "CameraDialog.h"


namespace Ui {
class AccuracyTestDialog;
}

class AccuracyTestDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AccuracyTestDialog(QWidget *parent = 0);
    ~AccuracyTestDialog();

private slots:
    void on_photo_collecton_clicked();

    void on_handinput_Gps_clicked();

    void on_camera_param_clicked();

    void on_continuous_shooting_clicked();

    void on_pushButton_button_clicked();

private:
    Ui::AccuracyTestDialog *ui;
};

#endif // ACCURACYTESTDIALOG_H
