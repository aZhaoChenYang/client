//
// Created by zhaochenyang on 2022/11/16.
//

#ifndef UNTITLED3_MANAGEDIALOG_H
#define UNTITLED3_MANAGEDIALOG_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QTimer>
#include "ui_manageDialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class manageDialog; }
QT_END_NAMESPACE

class manageDialog : public QWidget {
Q_OBJECT

public:
    explicit manageDialog(QWidget *parent = nullptr);

    ~manageDialog() override;

private:
    //向服务器发送请求
    void sendRequest();

    Ui::ManageDialog *ui{};
    QNetworkAccessManager* manager;//管理通信
    QNetworkRequest* request;//请求
    QNetworkReply* reply{};//响应数据
    QString replyBuf;//保存从服务器返回的响应数据
    QTimer* timer;

private slots:
    //接收天气响应数据的槽函数
    void onReadyRead();
    //接收天气响应数据结束的槽函数
    void onFinished();
    void updateTime();
};


#endif //UNTITLED3_MANAGEDIALOG_H
