#include "numberutils.h"

QString NumberUtils::moneyFormat(int amount)
{
    QString result;
    int cnt = 0;
    while (amount) {
        cnt++;
        result += (char) (amount % 10 + 48);
        amount /= 10;
        if (amount != 0 && cnt % 3 == 0) result += '.';
    }
    std::reverse(result.begin(), result.end());
    return result + "đ";
}
