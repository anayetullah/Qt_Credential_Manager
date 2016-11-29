#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include "user.h"
#include <QString>

class Accounts : public User
{
public:
    Accounts();
    Accounts(QString aname, QString uname, QString upass);
    QString accName;
};

#endif // ACCOUNTS_H
