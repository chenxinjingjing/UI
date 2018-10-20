/********************************************************************************
** Form generated from reading UI file 'ContinuousShotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINUOUSSHOTDIALOG_H
#define UI_CONTINUOUSSHOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ContinuousShotDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *cancel;
    QPushButton *flashPhotos;
    QPushButton *pushButton;

    void setupUi(QDialog *ContinuousShotDialog)
    {
        if (ContinuousShotDialog->objectName().isEmpty())
            ContinuousShotDialog->setObjectName(QStringLiteral("ContinuousShotDialog"));
        ContinuousShotDialog->resize(400, 300);
        gridLayout = new QGridLayout(ContinuousShotDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(ContinuousShotDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame, 0, 0, 1, 3);

        cancel = new QPushButton(ContinuousShotDialog);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 1, 0, 1, 1);

        flashPhotos = new QPushButton(ContinuousShotDialog);
        flashPhotos->setObjectName(QStringLiteral("flashPhotos"));

        gridLayout->addWidget(flashPhotos, 1, 1, 1, 1);

        pushButton = new QPushButton(ContinuousShotDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);


        retranslateUi(ContinuousShotDialog);

        QMetaObject::connectSlotsByName(ContinuousShotDialog);
    } // setupUi

    void retranslateUi(QDialog *ContinuousShotDialog)
    {
        ContinuousShotDialog->setWindowTitle(QApplication::translate("ContinuousShotDialog", "\350\277\236\347\273\255\346\213\215\346\221\204", 0));
        cancel->setText(QApplication::translate("ContinuousShotDialog", "\350\277\224\345\233\236", 0));
        flashPhotos->setText(QApplication::translate("ContinuousShotDialog", "\351\227\252\346\213\215\345\220\257\345\212\250", 0));
        pushButton->setText(QApplication::translate("ContinuousShotDialog", "\345\261\225\347\244\272\346\213\215\347\205\247\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class ContinuousShotDialog: public Ui_ContinuousShotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINUOUSSHOTDIALOG_H
