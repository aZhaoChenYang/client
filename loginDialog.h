//
// Created by zhaochenyang on 2022/11/17.
//

#ifndef CLIENT_LOGINDIALOG_H
#define CLIENT_LOGINDIALOG_H

#include <QWidget>
#include <QSqlQueryModel>
#include "ui_loginDialog.h"
#include "manageDialog.h"
#include "struct.h"


QT_BEGIN_NAMESPACE
namespace Ui { class loginDialog; }
QT_END_NAMESPACE

class loginDialog : public QDialog {
Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = nullptr);

    ~loginDialog() override;
    void setConfig(setConfig config);

private:
    Ui::LoginDialog *ui;
    //配置文件名
    QString filename;
    //验证码
    int m_validaiton{};
    //sql结果集
    QSqlQueryModel model;
    //用户名
    QString name;
    //配置
    struct setConfig m_config;
    //身份
    QString m_table;
    // 关闭按钮被点击
    void closeEvent(QCloseEvent *) override;
    //绘图事件
    void paintEvent(QPaintEvent*) override;
    //鼠标点击事件
    void mousePressEvent(QMouseEvent*) override;
    //设置验证码
    void setValidation();
    //读取配置文件
    void loadConfig();

private slots:
    //教师单选框被点击
    void on_techRadio_clicked();
    //学生单选框被点击
    void on_stuRadio_clicked();
    //管理员单选框被点击
    void on_admRadio_clicked();
    //设置按钮被点击
    void on_setButton_clicked();
    //登录按钮被点击
    void on_loginButton_clicked();
};


#endif //CLIENT_LOGINDIALOG_H
