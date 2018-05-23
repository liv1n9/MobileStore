#include "register.h"

Register::Register()
{

}

QString Register::getUsername() const
{
    return username;
}

void Register::setUsername(const QString &value)
{
    username = value;
}

QString Register::getPassword() const
{
    return password;
}

void Register::setPassword(const QString &value)
{
    password = value;
}

QString Register::getName() const
{
    return name;
}

void Register::setName(const QString &value)
{
    name = value;
}
