#include "passwordgenerator.h"

#include "mainwindow.h"
#include "passwordedit.h"

#include <QDebug>

PasswordGenerator::PasswordGenerator(QObject *parent) : QObject{parent} {}

std::string PasswordGenerator::GeneratePassword() {
  qDebug() << "password";
  std::vector<std::string> choiceChar{"abcdefghijklmnopqrstuvwxyz",
                                      "ABCDEFGHIJKLMNOPQRSTUVWXYZ", "!@#$%&",
                                      "0123456789"};
  int len = 12;
  int counter = 0;
  std::string password = "";
  srand(time(0));
  while (counter < len) {
    int k = rand() % 4;
    char c = GetRandomChar(choiceChar.at(k));
    password += c;
    counter++;
  }

  return password;
}

char PasswordGenerator::GetRandomChar(std::string str) {
  int index = rand() % str.length();
  return str.at(index);
}
