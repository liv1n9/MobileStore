#include "comment.h"

int Comment::getProductId() const
{
    return productId;
}

void Comment::setProductId(int value)
{
    productId = value;
}

QString Comment::getComment() const
{
    return comment;
}

void Comment::setComment(const QString &value)
{
    comment = value;
}

Comment::Comment(int userId, int productId, QString comment)
{
    this->userId = userId;
    this->productId = productId;
    this->comment = comment;
}

int Comment::getUserId() const
{
    return userId;
}

void Comment::setUserId(int value)
{
    userId = value;
}
