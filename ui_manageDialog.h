/********************************************************************************
** Form generated from reading UI file 'manageDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEDIALOG_H
#define UI_MANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *workmanage;
    QPushButton *updatepass;
    QPushButton *unlogin;
    QPushButton *exit;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *userlabel;
    QLabel *label_2;
    QLabel *weither;
    QLabel *label_4;
    QLabel *timelabel;

    void setupUi(QWidget *ManageDialog)
    {
        if (ManageDialog->objectName().isEmpty())
            ManageDialog->setObjectName("ManageDialog");
        ManageDialog->resize(637, 445);
        ManageDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(ManageDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(ManageDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(ManageDialog);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout);

        textEdit = new QTextEdit(ManageDialog);
        textEdit->setObjectName("textEdit");

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        Button1 = new QPushButton(ManageDialog);
        Button1->setObjectName("Button1");
        Button1->setAutoDefault(false);

        verticalLayout->addWidget(Button1);

        Button2 = new QPushButton(ManageDialog);
        Button2->setObjectName("Button2");
        Button2->setAutoDefault(false);

        verticalLayout->addWidget(Button2);

        Button3 = new QPushButton(ManageDialog);
        Button3->setObjectName("Button3");
        Button3->setAutoDefault(false);

        verticalLayout->addWidget(Button3);

        workmanage = new QPushButton(ManageDialog);
        workmanage->setObjectName("workmanage");
        workmanage->setAutoDefault(false);

        verticalLayout->addWidget(workmanage);

        updatepass = new QPushButton(ManageDialog);
        updatepass->setObjectName("updatepass");
        updatepass->setAutoDefault(false);

        verticalLayout->addWidget(updatepass);

        unlogin = new QPushButton(ManageDialog);
        unlogin->setObjectName("unlogin");
        unlogin->setAutoDefault(false);

        verticalLayout->addWidget(unlogin);

        exit = new QPushButton(ManageDialog);
        exit->setObjectName("exit");
        exit->setAutoDefault(false);

        verticalLayout->addWidget(exit);


        horizontalLayout_3->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(ManageDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setFrameShape(QFrame::NoFrame);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);

        horizontalLayout_3->addWidget(stackedWidget);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(ManageDialog);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        userlabel = new QLabel(ManageDialog);
        userlabel->setObjectName("userlabel");
        sizePolicy.setHeightForWidth(userlabel->sizePolicy().hasHeightForWidth());
        userlabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(userlabel);

        label_2 = new QLabel(ManageDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        weither = new QLabel(ManageDialog);
        weither->setObjectName("weither");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(weither->sizePolicy().hasHeightForWidth());
        weither->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(weither);

        label_4 = new QLabel(ManageDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        timelabel = new QLabel(ManageDialog);
        timelabel->setObjectName("timelabel");
        sizePolicy.setHeightForWidth(timelabel->sizePolicy().hasHeightForWidth());
        timelabel->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(timelabel);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(ManageDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManageDialog);
    } // setupUi

    void retranslateUi(QWidget *ManageDialog)
    {
        ManageDialog->setWindowTitle(QCoreApplication::translate("ManageDialog", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        pushButton->setText(QCoreApplication::translate("ManageDialog", "\345\205\254\345\221\212", nullptr));
        label->setText(QString());
        Button1->setText(QCoreApplication::translate("ManageDialog", "\346\237\245\350\257\242\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        Button2->setText(QCoreApplication::translate("ManageDialog", "\350\241\245\345\205\250\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        Button3->setText(QCoreApplication::translate("ManageDialog", "\346\237\245\350\257\242\346\210\220\347\273\251\344\277\241\346\201\257", nullptr));
        workmanage->setText(QCoreApplication::translate("ManageDialog", "\344\275\234\344\270\232\347\256\241\347\220\206", nullptr));
        updatepass->setText(QCoreApplication::translate("ManageDialog", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        unlogin->setText(QCoreApplication::translate("ManageDialog", "\346\263\250\351\224\200", nullptr));
        exit->setText(QCoreApplication::translate("ManageDialog", "\351\200\200\345\207\272", nullptr));
        label_6->setText(QCoreApplication::translate("ManageDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        userlabel->setText(QString());
        label_2->setText(QCoreApplication::translate("ManageDialog", "\345\244\251\346\260\224\357\274\232", nullptr));
        weither->setText(QString());
        label_4->setText(QCoreApplication::translate("ManageDialog", "\347\263\273\347\273\237\346\227\266\351\227\264\357\274\232", nullptr));
        timelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ManageDialog: public Ui_ManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEDIALOG_H
