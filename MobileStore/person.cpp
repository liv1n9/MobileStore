#include "person.h"

int Person::getId() const
{
    return id;
}

void Person::setId(int value)
{
    id = value;
}

QString Person::getUsername() const
{
    return username;
}

void Person::setUsername(const QString &value)
{
    username = value;
}

QString Person::getPassword() const
{
    return password;
}

void Person::setPassword(const QString &value)
{
    password = value;
}

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}

Person::Person()
{

}
