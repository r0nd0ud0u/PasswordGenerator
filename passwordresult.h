#ifndef PASSWORDRESULT_H
#define PASSWORDRESULT_H

#include <QWidget>

namespace Ui {
class PasswordResult;
}

class PasswordResult : public QWidget {
  Q_OBJECT

public:
  explicit PasswordResult(QWidget *parent = nullptr);
  ~PasswordResult();
public slots:
  void SetNewGenPassword(QString str);

private:
  Ui::PasswordResult *ui;
};

#endif // PASSWORDRESULT_H
