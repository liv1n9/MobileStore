#ifndef COMMENT_H
#define COMMENT_H

#include <QString>

class Comment
{
private:
    int userId;
    int productId;
    QString comment;
public:
    Comment(int userId, int productId, QString comment);
    int getUserId() const;
    void setUserId(int value);
    int getProductId() const;
    void setProductId(int value);
    QString getComment() const;
    void setComment(const QString &value);
};

#endif // COMMENT_H
