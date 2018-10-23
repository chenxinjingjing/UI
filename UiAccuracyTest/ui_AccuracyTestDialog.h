/********************************************************************************
** Form generated from reading UI file 'AccuracyTestDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCURACYTESTDIALOG_H
#define UI_ACCURACYTESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AccuracyTestDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *photo_collecton;
    QPushButton *handinput_Gps;
    QPushButton *camera_param;
    QPushButton *continuous_shooting;
    QPushButton *pushButton_button;

    void setupUi(QDialog *AccuracyTestDialog)
    {
        if (AccuracyTestDialog->objectName().isEmpty())
            AccuracyTestDialog->setObjectName(QStringLiteral("AccuracyTestDialog"));
        AccuracyTestDialog->resize(400, 300);
        gridLayout = new QGridLayout(AccuracyTestDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        photo_collecton = new QPushButton(AccuracyTestDialog);
        photo_collecton->setObjectName(QStringLiteral("photo_collecton"));

        gridLayout->addWidget(photo_collecton, 0, 0, 1, 1);

        handinput_Gps = new QPushButton(AccuracyTestDialog);
        handinput_Gps->setObjectName(QStringLiteral("handinput_Gps"));

        gridLayout->addWidget(handinput_Gps, 1, 0, 1, 1);

        camera_param = new QPushButton(AccuracyTestDialog);
        camera_param->setObjectName(QStringLiteral("camera_param"));

        gridLayout->addWidget(camera_param, 2, 0, 1, 1);

        continuous_shooting = new QPushButton(AccuracyTestDialog);
        continuous_shooting->setObjectName(QStringLiteral("continuous_shooting"));

        gridLayout->addWidget(continuous_shooting, 4, 0, 1, 1);

        pushButton_button = new QPushButton(AccuracyTestDialog);
        pushButton_button->setObjectName(QStringLiteral("pushButton_button"));

        gridLayout->addWidget(pushButton_button, 3, 0, 1, 1);


        retranslateUi(AccuracyTestDialog);

        QMetaObject::connectSlotsByName(AccuracyTestDialog);
    } // setupUi

    void retranslateUi(QDialog *AccuracyTestDialog)
    {
        AccuracyTestDialog->setWindowTitle(QApplication::translate("AccuracyTestDialog", "\345\256\232\344\275\215\347\262\276\345\272\246\350\257\204\344\274\260\345\267\245\345\205\267", 0));
        photo_collecton->setText(QApplication::translate("AccuracyTestDialog", "\346\227\240\350\275\246\347\205\247\347\211\207\351\207\207\351\233\206", 0));
        handinput_Gps->setText(QApplication::translate("AccuracyTestDialog", "\350\276\223\345\205\245GPS\344\275\215\347\275\256\344\277\241\346\201\257", 0));
        camera_param->setText(QApplication::translate("AccuracyTestDialog", "\345\256\232\344\275\215\345\214\272\345\237\237\350\247\222\347\202\271\345\235\220\346\240\207", 0));
        continuous_shooting->setText(QApplication::translate("AccuracyTestDialog", "\350\277\236\347\273\255\346\213\215\347\205\247", 0));
        pushButton_button->setText(QApplication::translate("AccuracyTestDialog", "\347\233\270\346\234\272\345\217\202\346\225\260\351\200\211\346\213\251", 0));
    } // retranslateUi

};

namespace Ui {
    class AccuracyTestDialog: public Ui_AccuracyTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCURACYTESTDIALOG_H
