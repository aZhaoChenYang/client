/********************************************************************************
** Form generated from reading UI file 'setDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDIALOG_H
#define UI_SETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_setDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLineEdit *tcpPort;
    QLabel *label_2;
    QLineEdit *udpPort;
    QLabel *label_6;
    QLineEdit *nameEdit;
    QLabel *label;
    QLineEdit *passEdit;
    QLabel *label_3;
    QLabel *label_5;
    QLineEdit *usrEdit;
    QLabel *label_4;
    QLineEdit *ipEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *setDialog)
    {
        if (setDialog->objectName().isEmpty())
            setDialog->setObjectName("setDialog");
        setDialog->resize(460, 326);
        setDialog->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(setDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tcpPort = new QLineEdit(setDialog);
        tcpPort->setObjectName("tcpPort");

        gridLayout->addWidget(tcpPort, 5, 1, 1, 1);

        label_2 = new QLabel(setDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        udpPort = new QLineEdit(setDialog);
        udpPort->setObjectName("udpPort");

        gridLayout->addWidget(udpPort, 4, 1, 1, 1);

        label_6 = new QLabel(setDialog);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        nameEdit = new QLineEdit(setDialog);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 3, 1, 1, 1);

        label = new QLabel(setDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        passEdit = new QLineEdit(setDialog);
        passEdit->setObjectName("passEdit");

        gridLayout->addWidget(passEdit, 2, 1, 1, 1);

        label_3 = new QLabel(setDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(setDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        usrEdit = new QLineEdit(setDialog);
        usrEdit->setObjectName("usrEdit");

        gridLayout->addWidget(usrEdit, 1, 1, 1, 1);

        label_4 = new QLabel(setDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        ipEdit = new QLineEdit(setDialog);
        ipEdit->setObjectName("ipEdit");

        gridLayout->addWidget(ipEdit, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(setDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setLayoutDirection(Qt::RightToLeft);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 1, 1, 1, Qt::AlignLeft);


        horizontalLayout->addLayout(gridLayout);

        QWidget::setTabOrder(ipEdit, usrEdit);
        QWidget::setTabOrder(usrEdit, passEdit);
        QWidget::setTabOrder(passEdit, nameEdit);
        QWidget::setTabOrder(nameEdit, udpPort);
        QWidget::setTabOrder(udpPort, tcpPort);

        retranslateUi(setDialog);

        QMetaObject::connectSlotsByName(setDialog);
    } // setupUi

    void retranslateUi(QDialog *setDialog)
    {
        setDialog->setWindowTitle(QCoreApplication::translate("setDialog", "\350\256\276\347\275\256", nullptr));
        tcpPort->setText(QString());
        label_2->setText(QCoreApplication::translate("setDialog", "\346\225\260\346\215\256\345\272\223\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        udpPort->setText(QString());
        label_6->setText(QCoreApplication::translate("setDialog", "\346\225\260\346\215\256\345\272\223\345\220\215\357\274\232", nullptr));
        nameEdit->setText(QString());
        label->setText(QCoreApplication::translate("setDialog", "\346\234\215\345\212\241\345\231\250ip\345\234\260\345\235\200\357\274\232", nullptr));
        passEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("setDialog", "\346\225\260\346\215\256\345\272\223\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("setDialog", "TCP\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        usrEdit->setText(QString());
        label_4->setText(QCoreApplication::translate("setDialog", "UDP\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        ipEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setDialog: public Ui_setDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDIALOG_H
