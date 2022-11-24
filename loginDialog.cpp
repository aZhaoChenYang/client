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
#include <QSqlDatabase>
#include <QMessageBox>

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
    m_table = "teacher";
    filename = "teacherlog.png";
    update();

}

void loginDialog::on_stuRadio_clicked() {
    m_table = "student";
    filename = "studentlog.png";
    update();
}

void loginDialog::on_admRadio_clicked() {
    m_table = "admin";
    filename = "adminlog.png";
    update();
}

void loginDialog::on_setButton_clicked() {
    setDialog d(m_config, this);
    d.exec();
}

void loginDialog::on_loginButton_clicked() {
    //打开数据库
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(m_config.ip);
    db.setUserName(m_config.datausr);
    db.setPassword(m_config.datapass);
    db.setDatabaseName(m_config.dataname);
    if(!db.open()){
        QMessageBox::information(nullptr,"提示","系统载入数据库失败，无法运行",QMessageBox::Yes);
        return;
    }
    //获取文本框内容
    QString user = ui->userEdit->text();
    QString pass = ui->passEdit->text();
    int validation = ui->validationEdit->text().toInt();
    //检查文本框内容是否为空
    if(user == "" || pass == ""){
        QMessageBox::critical(this, "问题", "用户名/密码不能为空");
        setValidation();
        return;
    }
    //检查验证码是否正确
    if(validation!=m_validation){
        QMessageBox::warning(this,"问题","验证码错误");
        setValidation();
        return;
    }
    //查询数据库
    model.setQuery("select name, password from " + m_table +
                   " where num = " + user);
    //验证文本框内容
    if(model.data(model.index(0,1)).toString() == pass){
        name = model.data(model.index(0,0)).toString();

        QMessageBox::information(this,"信息","欢迎您:"+name);
        hide();

    }else{
        QMessageBox::warning(this,"问题","用户名/密码错误");
        setValidation();
        return;
    }
}


void loginDialog::setValidation() {
    m_validation = rand() % 9000 + 1000;
    ui->validation->setText(QString::number(m_validation));
    ui->validationEdit->setText(QString::number(m_validation));
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
QString loginDialog::getName() {
    return name;
}

QString loginDialog::getType() {
    return m_table;
}





