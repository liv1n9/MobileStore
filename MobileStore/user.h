#ifndef USER_H
#define USER_H

#include "comment.h"
#include "person.h"

class User: public Person
{
public:
    User();
    void addComment(int productId, const QString &comment);
private:
    const QString COMMENTS_DATA_PATH = "\\comments.txt";

};

#endif // USER_H
