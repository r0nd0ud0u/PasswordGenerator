#ifndef PASSWORDEDIT_H
#define PASSWORDEDIT_H

#include <QWidget>

namespace Ui {
class PasswordEdit;
}

class PasswordEdit : public QWidget {
  Q_OBJECT

public:
  explicit PasswordEdit(QWidget *parent = nullptr);
  ~PasswordEdit();
  signals:
  void SigGeneratePassword(QString);
  private slots:
  void on_gen_btn_clicked();

  private:
  Ui::PasswordEdit *ui;
};

#endif // PASSWORDEDIT_H
