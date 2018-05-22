#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
private:
    int id;
    QString username;
    QString password;
    QString name;
public:
    Person();
    int getId() const;
    void setId(int value);
    QString getUsername() const;
    void setUsername(const QString &value);
    QString getPassword() const;
    void setPassword(const QString &value);
    QString getName() const;
    void setName(const QString &value);
};

#endif // PERSON_H
