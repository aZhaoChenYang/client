//
// Created by zhaochenyang on 2022/11/17.
//

#ifndef CLIENT_LOGINDIALOG_H
#define CLIENT_LOGINDIALOG_H

#include <QWidget>
#include <QSqlQueryModel>
#include "ui_loginDialog.h"
#include "manageDialog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class loginDialog; }
QT_END_NAMESPACE

class loginDialog : public QDialog {
Q_OBJECT

public:
    explicit loginDialog(QWidget *parent = nullptr);

    ~loginDialog() override;

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
    //身份
    QString m_table;
    // 关闭按钮被点击
    void closeEvent(QCloseEvent *event) override;
    //绘图事件
    void paintEvent(QPaintEvent*) override;
    //设置验证码
    void setValidation();


private slots:
    //教师单选框被点击
    void on_techRadio_clicked();
    //学生单选框被点击
    void on_stuRadio_clicked();
    //管理员单选框被点击
    void on_admRadio_clicked();

};


#endif //CLIENT_LOGINDIALOG_H
