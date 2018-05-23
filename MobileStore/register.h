#ifndef REGISTER_H
#define REGISTER_H

#include <QString>

class Register
{
public:
    Register();
    QString getUsername() const;
    void setUsername(const QString &value);

    QString getPassword() const;
    void setPassword(const QString &value);

    QString getName() const;
    void setName(const QString &value);

private:
    QString username;
    QString password;
    QString name;
};

#endif // REGISTER_H
