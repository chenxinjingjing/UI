/********************************************************************************
** Form generated from reading UI file 'CameraParamDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAPARAMDIALOG_H
#define UI_CAMERAPARAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CameraParamDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *axyz;
    QLineEdit *ax;
    QLineEdit *ay;
    QLineEdit *az;
    QLineEdit *bxyz;
    QLineEdit *bx;
    QLineEdit *by;
    QLineEdit *bz;
    QLineEdit *cxyz;
    QLineEdit *cx;
    QLineEdit *cy;
    QLineEdit *cz;
    QLineEdit *xyz_3;
    QLineEdit *dx;
    QLineEdit *dy;
    QLineEdit *dz;
    QPushButton *cancel;
    QPushButton *savePhotoParams;

    void setupUi(QDialog *CameraParamDialog)
    {
        if (CameraParamDialog->objectName().isEmpty())
            CameraParamDialog->setObjectName(QStringLiteral("CameraParamDialog"));
        CameraParamDialog->resize(400, 300);
        gridLayout = new QGridLayout(CameraParamDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        axyz = new QLineEdit(CameraParamDialog);
        axyz->setObjectName(QStringLiteral("axyz"));
        axyz->setEnabled(false);

        gridLayout->addWidget(axyz, 0, 0, 1, 1);

        ax = new QLineEdit(CameraParamDialog);
        ax->setObjectName(QStringLiteral("ax"));

        gridLayout->addWidget(ax, 0, 1, 1, 1);

        ay = new QLineEdit(CameraParamDialog);
        ay->setObjectName(QStringLiteral("ay"));

        gridLayout->addWidget(ay, 0, 2, 1, 1);

        az = new QLineEdit(CameraParamDialog);
        az->setObjectName(QStringLiteral("az"));

        gridLayout->addWidget(az, 0, 3, 1, 1);

        bxyz = new QLineEdit(CameraParamDialog);
        bxyz->setObjectName(QStringLiteral("bxyz"));
        bxyz->setEnabled(false);

        gridLayout->addWidget(bxyz, 1, 0, 1, 1);

        bx = new QLineEdit(CameraParamDialog);
        bx->setObjectName(QStringLiteral("bx"));

        gridLayout->addWidget(bx, 1, 1, 1, 1);

        by = new QLineEdit(CameraParamDialog);
        by->setObjectName(QStringLiteral("by"));

        gridLayout->addWidget(by, 1, 2, 1, 1);

        bz = new QLineEdit(CameraParamDialog);
        bz->setObjectName(QStringLiteral("bz"));

        gridLayout->addWidget(bz, 1, 3, 1, 1);

        cxyz = new QLineEdit(CameraParamDialog);
        cxyz->setObjectName(QStringLiteral("cxyz"));
        cxyz->setEnabled(false);

        gridLayout->addWidget(cxyz, 2, 0, 1, 1);

        cx = new QLineEdit(CameraParamDialog);
        cx->setObjectName(QStringLiteral("cx"));

        gridLayout->addWidget(cx, 2, 1, 1, 1);

        cy = new QLineEdit(CameraParamDialog);
        cy->setObjectName(QStringLiteral("cy"));

        gridLayout->addWidget(cy, 2, 2, 1, 1);

        cz = new QLineEdit(CameraParamDialog);
        cz->setObjectName(QStringLiteral("cz"));

        gridLayout->addWidget(cz, 2, 3, 1, 1);

        xyz_3 = new QLineEdit(CameraParamDialog);
        xyz_3->setObjectName(QStringLiteral("xyz_3"));
        xyz_3->setEnabled(false);

        gridLayout->addWidget(xyz_3, 3, 0, 1, 1);

        dx = new QLineEdit(CameraParamDialog);
        dx->setObjectName(QStringLiteral("dx"));

        gridLayout->addWidget(dx, 3, 1, 1, 1);

        dy = new QLineEdit(CameraParamDialog);
        dy->setObjectName(QStringLiteral("dy"));

        gridLayout->addWidget(dy, 3, 2, 1, 1);

        dz = new QLineEdit(CameraParamDialog);
        dz->setObjectName(QStringLiteral("dz"));

        gridLayout->addWidget(dz, 3, 3, 1, 1);

        cancel = new QPushButton(CameraParamDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 4, 0, 1, 2);

        savePhotoParams = new QPushButton(CameraParamDialog);
        savePhotoParams->setObjectName(QStringLiteral("savePhotoParams"));

        gridLayout->addWidget(savePhotoParams, 4, 2, 1, 2);


        retranslateUi(CameraParamDialog);

        QMetaObject::connectSlotsByName(CameraParamDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraParamDialog)
    {
        CameraParamDialog->setWindowTitle(QApplication::translate("CameraParamDialog", "\347\233\270\346\234\272\345\217\202\346\225\260\351\200\211\346\213\251\345\212\240\350\275\275", 0));
        axyz->setText(QApplication::translate("CameraParamDialog", "axyz:", 0));
        ax->setText(QApplication::translate("CameraParamDialog", "0", 0));
        ay->setText(QApplication::translate("CameraParamDialog", "0", 0));
        az->setText(QApplication::translate("CameraParamDialog", "0", 0));
        bxyz->setText(QApplication::translate("CameraParamDialog", "bxyz:", 0));
        bx->setText(QApplication::translate("CameraParamDialog", "0", 0));
        by->setText(QApplication::translate("CameraParamDialog", "0", 0));
        bz->setText(QApplication::translate("CameraParamDialog", "0", 0));
        cxyz->setText(QApplication::translate("CameraParamDialog", "cxyz:", 0));
        cx->setText(QApplication::translate("CameraParamDialog", "0", 0));
        cy->setText(QApplication::translate("CameraParamDialog", "0", 0));
        cz->setText(QApplication::translate("CameraParamDialog", "0", 0));
        xyz_3->setText(QApplication::translate("CameraParamDialog", "dxyz:", 0));
        dx->setText(QApplication::translate("CameraParamDialog", "0", 0));
        dy->setText(QApplication::translate("CameraParamDialog", "0", 0));
        dz->setText(QApplication::translate("CameraParamDialog", "0", 0));
        cancel->setText(QApplication::translate("CameraParamDialog", "\350\277\224\345\233\236", 0));
        savePhotoParams->setText(QApplication::translate("CameraParamDialog", "\344\277\235\345\255\230", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraParamDialog: public Ui_CameraParamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAPARAMDIALOG_H
