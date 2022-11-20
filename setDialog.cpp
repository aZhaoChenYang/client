//
// Created by zhaochenyang on 2022/11/20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_setDialog.h" resolved

#include "setDialog.h"

#include <utility>
#include <QSettings>
#include "ui_setDialog.h"
#include "loginDialog.h"


setDialog::setDialog(setConfig config, QWidget *parent) :
        QDialog(parent), ui(new Ui::setDialog), m_config(std::move(config)) {
    ui->setupUi(this);
    ui->ipEdit->setText(m_config.ip);
    ui->usrEdit->setText(m_config.datausr);
    ui->passEdit->setText(m_config.datapass);
    ui->nameEdit->setText(m_config.dataname);
    ui->tcpPort->setText(QString::number(m_config.tcpport));
    ui->udpPort->setText(QString::number(m_config.udpport));

}

setDialog::~setDialog() {
    delete ui;
}

void setDialog::on_buttonBox_accepted()
{
    m_config.ip = ui->ipEdit->text();
    m_config.datausr = ui->usrEdit->text();
    m_config.datapass = ui->passEdit->text();
    m_config.dataname = ui->nameEdit->text();
    m_config.tcpport = ui->tcpPort->text().toInt();
    m_config.udpport = ui->udpPort->text().toInt();
    ((loginDialog*)parent())->setConfig(m_config);
    accept();
}

void setDialog::on_buttonBox_rejected()
{
    reject();
}
