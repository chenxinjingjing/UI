#ifndef GPSDIALOG_H
#define GPSDIALOG_H

#include <QDialog>
#include "AccuracyTestDialog.h"
#include <QDebug>
#include <QSettings>


namespace Ui {
class GpsDialog;
}

class GpsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GpsDialog(QWidget *parent = 0);
    ~GpsDialog();

private slots:
    void on_cancel_clicked();

    void on_pushButton_clicked();

private:
    Ui::GpsDialog *ui;
};

#endif // GPSDIALOG_H
