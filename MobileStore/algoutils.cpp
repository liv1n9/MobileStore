#include "algoutils.h"

#include <QVector>

int AlgoUtils::lcs(QString A, QString B)
{
    A = A.toLower();
    A.replace(" ", "");
    B = B.toLower();
    B.replace(" ", "");
    QVector<QVector<int> >f(A.length() + 1, QVector<int>(B.length() + 1, 0));
    for (int i = 0; i < A.length(); i++) {
        for (int j = 0; j < B.length(); j++) {
            if (A[i] == B[j]) {
                f[i + 1][j + 1] = f[i][j] + 1;
            } else {
                f[i + 1][j + 1] = std::max(f[i + 1][j], f[i][j + 1]);
            }
        }
    }
    return f[A.length()][B.length()];
}
