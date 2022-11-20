//
// Created by zhaochenyang on 2022/11/20.
//

#ifndef CLIENT_SETDIALOG_H
#define CLIENT_SETDIALOG_H

#include <QDialog>
#include "struct.h"

QT_BEGIN_NAMESPACE
namespace Ui { class setDialog; }
QT_END_NAMESPACE

class setDialog : public QDialog {
Q_OBJECT

public:
    explicit setDialog(setConfig config, QWidget *parent = nullptr);

    ~setDialog() override;

private:
    Ui::setDialog *ui;
    setConfig m_config;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
};


#endif //CLIENT_SETDIALOG_H
