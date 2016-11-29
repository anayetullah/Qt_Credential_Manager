#ifndef USER_H
#define USER_H
#include <QString>

class User
{
public:
    User();
    User(QString uname, QString upass);
    QString name;\
    QString pass;

};

#endif // USER_H
