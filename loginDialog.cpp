//
// Created by zhaochenyang on 2022/11/17.
//

// You may need to build the project (run Qt uic code generator) to get "ui_loginDialog.h" resolved

#include <QPainter>
#include "loginDialog.h"
#include "ui_loginDialog.h"

loginDialog::loginDialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::LoginDialog) {
    ui->setupUi(this);
    filename = "studentlog.png";
    //为验证码埋随机数种子
    srand(QTime::currentTime().msec());
    setValidation();
}

loginDialog::~loginDialog() {
    delete ui;
}

void loginDialog::closeEvent(QCloseEvent *event) {
    exit(0);
}

void loginDialog::paintEvent(QPaintEvent *) {
    QPainter paint(this);
    QRect rect = ui->frame->frameRect();
    rect.translate(ui->frame->pos());
    paint.drawImage(rect, QImage("resource/" + filename));
}

void loginDialog::on_techRadio_clicked() {
    filename = "teacherlog.png";
    update();

}

void loginDialog::on_stuRadio_clicked() {
    filename = "studentlog.png";
    update();
}

void loginDialog::on_admRadio_clicked() {
    filename = "adminlog.png";
    update();
}

void loginDialog::setValidation() {
    m_validaiton = rand() % 9000 + 1000;
    ui->validation->setText(QString::number(m_validaiton));
    ui->validationEdit->setText(QString::number(m_validaiton));
}
