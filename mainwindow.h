#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  static MainWindow& GetInstance();

private slots:
  void Test();

private:
  Ui::MainWindow *ui;

  static MainWindow *s_mainWin;
};
#endif // MAINWINDOW_H
