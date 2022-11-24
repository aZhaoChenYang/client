//
// Created by zhaochenyang on 2022/11/16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_manageDialog.h" resolved


#include <QRegExp>
#include <QTimer>
#include "manageDialog.h"
#include "ui_manageDialog.h"
#include "loginDialog.h"

manageDialog::manageDialog(QWidget *parent) :
        QWidget(parent), ui(new Ui::ManageDialog) {
    ui->setupUi(this);
    setWindowIcon(QIcon("resource/xue.ico"));


    sendRequest();

    timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(updateTime()));
//    loginDialog l(this);
//    l.exec();

}

manageDialog::~manageDialog() {
    delete ui;
}

void manageDialog::sendRequest() {
    auto *manager = new QNetworkAccessManager(this);
    QNetworkRequest request(QUrl("https://tianqi.so.com/weather/101010100"));
    //发送请求,返回用于接收响应数据reply对象
    reply = manager->get(request);
    //收到服务器返回的响应数据时,发送信号readyRead
    connect(reply,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
    //响应数据接收结束,发送信号finished
    connect(reply,SIGNAL(finished()),this,SLOT(onFinished()));
}

void manageDialog::onReadyRead() {
    //接收数据并保存
    replyBuf += reply->readAll();
}

void manageDialog::onFinished() {
    QRegExp rx("今天.*\n(.*)</div><div>(.*)</div>.*</div><div>(.*)</div>");
    rx.setMinimal(true);
    int pos = rx.indexIn(replyBuf);
    if(pos > 0) {
        QString data = QString("%1 %2 %3").arg(rx.cap(1).trimmed(), rx.cap(2), rx.cap(3));
        ui->weither->setText(data);
    }
}

void manageDialog::updateTime() {
    ui->timelabel->setText(QDateTime::currentDateTime().
            toString("yyyy/MM/dd hh:mm:ss"));
}
