#include "passwordresult.h"
#include "ui_passwordresult.h"

PasswordResult::PasswordResult(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PasswordResult)
{
    ui->setupUi(this);
}

PasswordResult::~PasswordResult()
{
    delete ui;
}

void PasswordResult::SetNewGenPassword(QString str)
{
    ui->lineEdit->setText(str);

}
