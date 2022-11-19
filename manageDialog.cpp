//
// Created by zhaochenyang on 2022/11/16.
//

// You may need to build the project (run Qt uic code generator) to get "ui_manageDialog.h" resolved


#include "manageDialog.h"
#include "ui_manageDialog.h"
#include "loginDialog.h"

manageDialog::manageDialog(QWidget *parent) :
        QWidget(parent), ui(new Ui::ManageDialog) {
    ui->setupUi(this);
//
//    QIcon image("./xue.ico");
//    qDebug() << image.isNull();
//    qDebug() << image;
//    setWindowIcon(image);
    setWindowIcon(QIcon("resource/xue.ico"));

    manager = new QNetworkAccessManager(this);
    request = new QNetworkRequest(
            QUrl("https://tianqi.so.com/weather/101010100"));
    sendRequest();

    timer = new QTimer(this);
    timer->start(1000);
    connect(timer, SIGNAL(timeout()),this, SLOT(updateTime()));
    loginDialog l(this);
    l.exec();

}

manageDialog::~manageDialog() {
    delete ui;
}

void manageDialog::sendRequest() {
    //发送请求,返回用于接收响应数据reply对象
    reply = manager->get(*request);
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
    QString data;
    //显示接收的数据
    int begin = replyBuf.indexOf("<div class=\"weather-date\">");
    QString str = replyBuf.mid(begin);
    int end = str.indexOf("</div></li></ul><ul class=\"weather-columns\">");
    str = str.mid(0,end);
    begin = str.indexOf("</div><div>");
    str = str.mid(begin + 11);
    end = str.indexOf("</div>");
    data = str.mid(0,end);
    data.remove('\n');
    data.remove(' ');
    str = str.mid(end + 11);
    end = str.indexOf("</div>");
    data +=  ' ' + str.mid(0,end);
    ui->weither->setText(data);
}

void manageDialog::updateTime() {
    ui->timelabel->setText(QDateTime::currentDateTime().
            toString("yyyy/MM/dd hh:mm:ss"));
}
