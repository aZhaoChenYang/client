/********************************************************************************
** Form generated from reading UI file 'loginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *userEdit;
    QLabel *label_2;
    QLineEdit *passEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *validationEdit;
    QLabel *validation;
    QSpacerItem *horizontalSpacer;
    QPushButton *setButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *techRadio;
    QRadioButton *stuRadio;
    QRadioButton *admRadio;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loginButton;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->setWindowModality(Qt::NonModal);
        LoginDialog->resize(633, 397);
        QPalette palette;
        QBrush brush(QColor(235, 255, 15, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(223, 223, 223, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        LoginDialog->setPalette(palette);
        LoginDialog->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(LoginDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(LoginDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        userEdit = new QLineEdit(LoginDialog);
        userEdit->setObjectName("userEdit");

        gridLayout->addWidget(userEdit, 0, 1, 1, 1);

        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        passEdit = new QLineEdit(LoginDialog);
        passEdit->setObjectName("passEdit");
        passEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");
        label_3->setFrameShape(QFrame::NoFrame);

        horizontalLayout->addWidget(label_3);

        validationEdit = new QLineEdit(LoginDialog);
        validationEdit->setObjectName("validationEdit");

        horizontalLayout->addWidget(validationEdit);

        validation = new QLabel(LoginDialog);
        validation->setObjectName("validation");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(validation->sizePolicy().hasHeightForWidth());
        validation->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        validation->setFont(font);
        validation->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(validation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        setButton = new QPushButton(LoginDialog);
        setButton->setObjectName("setButton");

        horizontalLayout->addWidget(setButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        techRadio = new QRadioButton(LoginDialog);
        techRadio->setObjectName("techRadio");

        horizontalLayout_2->addWidget(techRadio);

        stuRadio = new QRadioButton(LoginDialog);
        stuRadio->setObjectName("stuRadio");
        stuRadio->setChecked(true);

        horizontalLayout_2->addWidget(stuRadio);

        admRadio = new QRadioButton(LoginDialog);
        admRadio->setObjectName("admRadio");

        horizontalLayout_2->addWidget(admRadio);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");

        verticalLayout->addWidget(loginButton);

        QWidget::setTabOrder(userEdit, passEdit);
        QWidget::setTabOrder(passEdit, validationEdit);
        QWidget::setTabOrder(validationEdit, techRadio);
        QWidget::setTabOrder(techRadio, stuRadio);
        QWidget::setTabOrder(stuRadio, admRadio);
        QWidget::setTabOrder(admRadio, loginButton);
        QWidget::setTabOrder(loginButton, setButton);

        retranslateUi(LoginDialog);

        loginButton->setDefault(true);


        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        userEdit->setText(QCoreApplication::translate("LoginDialog", "10001", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\343\200\200\347\240\201\357\274\232", nullptr));
        passEdit->setText(QCoreApplication::translate("LoginDialog", "123456", nullptr));
        label_3->setText(QCoreApplication::translate("LoginDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        validation->setText(QString());
        setButton->setText(QCoreApplication::translate("LoginDialog", "\350\256\276\347\275\256", nullptr));
        techRadio->setText(QCoreApplication::translate("LoginDialog", "\346\225\231\345\270\210", nullptr));
        stuRadio->setText(QCoreApplication::translate("LoginDialog", "\345\255\246\347\224\237", nullptr));
        admRadio->setText(QCoreApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
