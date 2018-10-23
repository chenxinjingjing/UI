/********************************************************************************
** Form generated from reading UI file 'CameraDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERADIALOG_H
#define UI_CAMERADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CameraDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *datafusion_params;
    QPushButton *save_the_txt;
    QPushButton *cancel;

    void setupUi(QDialog *CameraDialog)
    {
        if (CameraDialog->objectName().isEmpty())
            CameraDialog->setObjectName(QStringLiteral("CameraDialog"));
        CameraDialog->resize(400, 300);
        gridLayout = new QGridLayout(CameraDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        datafusion_params = new QTextEdit(CameraDialog);
        datafusion_params->setObjectName(QStringLiteral("datafusion_params"));

        gridLayout->addWidget(datafusion_params, 0, 0, 1, 2);

        save_the_txt = new QPushButton(CameraDialog);
        save_the_txt->setObjectName(QStringLiteral("save_the_txt"));

        gridLayout->addWidget(save_the_txt, 1, 0, 1, 1);

        cancel = new QPushButton(CameraDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 1, 1, 1, 1);


        retranslateUi(CameraDialog);

        QMetaObject::connectSlotsByName(CameraDialog);
    } // setupUi

    void retranslateUi(QDialog *CameraDialog)
    {
        CameraDialog->setWindowTitle(QApplication::translate("CameraDialog", "\347\233\270\346\234\272\345\217\202\346\225\260\344\277\256\346\255\243", 0));
        save_the_txt->setText(QApplication::translate("CameraDialog", "\344\277\235\345\255\230", 0));
        cancel->setText(QApplication::translate("CameraDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class CameraDialog: public Ui_CameraDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERADIALOG_H
