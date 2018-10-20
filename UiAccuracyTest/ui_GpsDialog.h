/********************************************************************************
** Form generated from reading UI file 'GpsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPSDIALOG_H
#define UI_GPSDIALOG_H

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

class Ui_GpsDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLineEdit *px;
    QLineEdit *py;
    QLineEdit *pz;
    QLineEdit *lineEdit_2;
    QLineEdit *ox;
    QLineEdit *oy;
    QLineEdit *oz;
    QPushButton *cancel;
    QPushButton *pushButton;

    void setupUi(QDialog *GpsDialog)
    {
        if (GpsDialog->objectName().isEmpty())
            GpsDialog->setObjectName(QStringLiteral("GpsDialog"));
        GpsDialog->resize(400, 300);
        gridLayout = new QGridLayout(GpsDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(GpsDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        px = new QLineEdit(GpsDialog);
        px->setObjectName(QStringLiteral("px"));

        gridLayout->addWidget(px, 0, 1, 1, 1);

        py = new QLineEdit(GpsDialog);
        py->setObjectName(QStringLiteral("py"));

        gridLayout->addWidget(py, 0, 2, 1, 1);

        pz = new QLineEdit(GpsDialog);
        pz->setObjectName(QStringLiteral("pz"));

        gridLayout->addWidget(pz, 0, 3, 1, 1);

        lineEdit_2 = new QLineEdit(GpsDialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);

        ox = new QLineEdit(GpsDialog);
        ox->setObjectName(QStringLiteral("ox"));

        gridLayout->addWidget(ox, 1, 1, 1, 1);

        oy = new QLineEdit(GpsDialog);
        oy->setObjectName(QStringLiteral("oy"));

        gridLayout->addWidget(oy, 1, 2, 1, 1);

        oz = new QLineEdit(GpsDialog);
        oz->setObjectName(QStringLiteral("oz"));

        gridLayout->addWidget(oz, 1, 3, 1, 1);

        cancel = new QPushButton(GpsDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 2, 0, 1, 2);

        pushButton = new QPushButton(GpsDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 2);


        retranslateUi(GpsDialog);

        QMetaObject::connectSlotsByName(GpsDialog);
    } // setupUi

    void retranslateUi(QDialog *GpsDialog)
    {
        GpsDialog->setWindowTitle(QApplication::translate("GpsDialog", "GPS\346\211\213\345\267\245\350\276\223\345\205\245\344\277\241\346\201\257", 0));
        lineEdit->setText(QApplication::translate("GpsDialog", "pos:", 0));
        px->setText(QApplication::translate("GpsDialog", "0", 0));
        py->setText(QApplication::translate("GpsDialog", "0", 0));
        pz->setText(QApplication::translate("GpsDialog", "0", 0));
        lineEdit_2->setText(QApplication::translate("GpsDialog", "orient:", 0));
        ox->setText(QApplication::translate("GpsDialog", "0", 0));
        oy->setText(QApplication::translate("GpsDialog", "0", 0));
        oz->setText(QApplication::translate("GpsDialog", "0", 0));
        cancel->setText(QApplication::translate("GpsDialog", "\350\277\224\345\233\236", 0));
        pushButton->setText(QApplication::translate("GpsDialog", "\347\241\256\350\256\244", 0));
    } // retranslateUi

};

namespace Ui {
    class GpsDialog: public Ui_GpsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPSDIALOG_H
