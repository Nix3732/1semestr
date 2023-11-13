#include "LAB9head.h"

int main()
{
    int n, m;
    int sumstolb[N_Max];
    int sum = 0;
    int matrix[N_Max][N_Max];

    ez::IN(matrix, n, m);
    

    int min = matrix[0][0];
    int max = 0;

    ez::MINMAX(min, max, n, m, matrix);

    int summin = ez::SUM(min);
    int summax = ez::SUM(max);

    if (abs(summax - summin) <= 2)
    {
        for (int j = 0; j < n; j++)
        {
            sum = 0;
            sumstolb[j] = ez::SUMSTOLB(matrix, n, j);
        }
    }
    ez::SORT(n, *sumstolb, matrix, m);
    ez::OUT(matrix, n, m);
}