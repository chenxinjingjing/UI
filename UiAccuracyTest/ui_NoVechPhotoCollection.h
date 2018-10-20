/********************************************************************************
** Form generated from reading UI file 'NoVechPhotoCollection.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVECHPHOTOCOLLECTION_H
#define UI_NOVECHPHOTOCOLLECTION_H

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

class Ui_NoVechPhotoCollection
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *cancel;
    QPushButton *m_btnPrev;
    QPushButton *m_btnNext;
    QPushButton *pushButton;

    void setupUi(QDialog *NoVechPhotoCollection)
    {
        if (NoVechPhotoCollection->objectName().isEmpty())
            NoVechPhotoCollection->setObjectName(QStringLiteral("NoVechPhotoCollection"));
        NoVechPhotoCollection->resize(400, 300);
        gridLayout = new QGridLayout(NoVechPhotoCollection);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(NoVechPhotoCollection);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 4);

        cancel = new QPushButton(NoVechPhotoCollection);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout->addWidget(cancel, 1, 0, 1, 1);

        m_btnPrev = new QPushButton(NoVechPhotoCollection);
        m_btnPrev->setObjectName(QStringLiteral("m_btnPrev"));

        gridLayout->addWidget(m_btnPrev, 1, 1, 1, 1);

        m_btnNext = new QPushButton(NoVechPhotoCollection);
        m_btnNext->setObjectName(QStringLiteral("m_btnNext"));

        gridLayout->addWidget(m_btnNext, 1, 2, 1, 1);

        pushButton = new QPushButton(NoVechPhotoCollection);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);


        retranslateUi(NoVechPhotoCollection);

        QMetaObject::connectSlotsByName(NoVechPhotoCollection);
    } // setupUi

    void retranslateUi(QDialog *NoVechPhotoCollection)
    {
        NoVechPhotoCollection->setWindowTitle(QApplication::translate("NoVechPhotoCollection", "\346\227\240\350\275\246\346\213\215\347\205\247", 0));
        cancel->setText(QApplication::translate("NoVechPhotoCollection", "\350\277\224\345\233\236", 0));
        m_btnPrev->setText(QApplication::translate("NoVechPhotoCollection", "\344\270\212\344\270\200\345\274\240", 0));
        m_btnNext->setText(QApplication::translate("NoVechPhotoCollection", "\344\270\213\344\270\200\345\274\240", 0));
        pushButton->setText(QApplication::translate("NoVechPhotoCollection", "\346\227\240\350\275\246\346\213\215\347\205\247", 0));
    } // retranslateUi

};

namespace Ui {
    class NoVechPhotoCollection: public Ui_NoVechPhotoCollection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVECHPHOTOCOLLECTION_H
