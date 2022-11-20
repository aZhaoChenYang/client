//
// Created by zhaochenyang on 2022/11/17.
//

// You may need to build the project (run Qt uic code generator) to get "ui_loginDialog.h" resolved

#include <QPainter>
#include <QMouseEvent>
#include "loginDialog.h"
#include "ui_loginDialog.h"
#include "setDialog.h"
#include <QDebug>
#include<QSettings>
#include <utility>

loginDialog::loginDialog(QWidget *parent) :
        QDialog(parent), ui(new Ui::LoginDialog) {
    ui->setupUi(this);
    filename = "studentlog.png";
    //为验证码埋随机数种子
    srand(QTime::currentTime().msec());
    setValidation();
    //读取配置文件
    loadConfig();

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

void loginDialog::mousePressEvent(QMouseEvent *event) {
    if(event->button() == Qt::LeftButton){
        QRect rect = ui->validation->frameRect();
        rect.translate(ui->validation->pos());
        if(rect.contains(event->pos())){
            setValidation();
        }
    }
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

void loginDialog::on_setButton_clicked() {
    setDialog d(m_config, this);
    d.exec();
}

void loginDialog::setValidation() {
    m_validaiton = rand() % 9000 + 1000;
    ui->validation->setText(QString::number(m_validaiton));
    ui->validationEdit->setText(QString::number(m_validaiton));
}

void loginDialog::loadConfig() {
    QSettings settings("config.ini",QSettings::IniFormat);//初始化读取Ini文件对象
    m_config.ip = settings.value("conn/address").toString();
    m_config.datausr = settings.value("conn/datausr").toString();
    m_config.datapass = settings.value("conn/datapass").toString();
    m_config.dataname = settings.value("conn/dataname").toString();
    m_config.udpport = settings.value("conn/udpport").toString().toShort();
    m_config.tcpport = settings.value("conn/tcpport").toString().toShort();
}

void loginDialog::setConfig(struct setConfig config) {
    m_config = std::move(config);
    QSettings settings("config.ini",QSettings::IniFormat);//初始化读取Ini文件对象
    settings.setValue("conn/address",m_config.ip);
    settings.setValue("conn/datausr",m_config.datausr);
    settings.setValue("conn/datapass",m_config.datapass);
    settings.setValue("conn/dataname",m_config.dataname);
    settings.setValue("conn/udpport",QString::number(m_config.udpport));
    settings.setValue("conn/tcpport",QString::number(m_config.tcpport));
}


