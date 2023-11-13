#include "LAB9head.h"

namespace ez
{
    void IN(int matrix[N_Max][N_Max], int& n, int& m)
    {
        std::cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cin >> matrix[i][j];
            }
        }
    }

    void OUT(int matrix[N_Max][N_Max], int n, int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    int SUM(int number)
    {
        int sum = 0;
        while (number!=0)
        {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

    int SUMSTOLB(int matrix[N_Max][N_Max], int& n, int j)
    {
        int sum;
        for (int i = 0; i < n; i++)
        {
            sum += matrix[i][j];
        }
        return sum;
    }

    void MINMAX(int min, int max, int n, int m, int matrix[N_Max][N_Max])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                max = std::max(max, matrix[i][j]);
                if (matrix[i][j] < min)
                {
                    min = matrix[i][j];
                }
            }
        }
    }

    void SORT(int n, int *sumstolb, int matrix[N_Max][N_Max], int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (sumstolb[i] >= sumstolb[j])
                {
                    int temp = sumstolb[i];
                    sumstolb[i] = sumstolb[j];
                    sumstolb[j] = temp;

                    for (int k = 0; k < n; k++)
                    {
                        int temp1 = matrix[k][j];
                        matrix[k][j] = matrix[k][i];
                        matrix[k][i] = temp1;
                    }
                }
            }
        }
        ez::OUT(matrix, n, m);
    }

}