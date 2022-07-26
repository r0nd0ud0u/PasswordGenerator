#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <QObject>

class PasswordGenerator : public QObject {
  Q_OBJECT
public:
  explicit PasswordGenerator(QObject *parent = nullptr);
  static std::string GeneratePassword();

private:
  static char GetRandomChar(std::string);
};

#endif // PASSWORDGENERATOR_H
