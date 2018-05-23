#ifndef REGISTERDATASET_H
#define REGISTERDATASET_H

#include "register.h"

#include <QList>

class RegisterDataSet
{
public:
    RegisterDataSet();
    QList<Register> registerData;
    void getRegisterData(const QString &dataPath);
    void updateRegisterData(const QString &dataPath);
};

#endif // REGISTERDATASET_H
