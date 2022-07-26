#include "passwordedit.h"

#include "passwordgenerator.h"
#include "ui_passwordedit.h"

#include <QDebug>

PasswordEdit::PasswordEdit(QWidget *parent)
    : QWidget(parent), ui(new Ui::PasswordEdit) {
  ui->setupUi(this);
}

PasswordEdit::~PasswordEdit() { delete ui; }

void PasswordEdit::on_gen_btn_clicked()
{
    QString str = QString::fromStdString(PasswordGenerator::GeneratePassword());
    emit SigGeneratePassword(str);
}

