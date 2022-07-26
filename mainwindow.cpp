#include "mainwindow.h"

#include "./ui_mainwindow.h"
#include "passwordgenerator.h"

#include <QDebug>

MainWindow *MainWindow::s_mainWin = nullptr;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  s_mainWin = this;

  connect(ui->password_edit, &PasswordEdit::SigGeneratePassword, ui->password_result, &PasswordResult::SetNewGenPassword);
}

MainWindow::~MainWindow() { delete ui; }

MainWindow& MainWindow::GetInstance() { return *s_mainWin; }

void MainWindow::Test() { qDebug() << "test"; }
