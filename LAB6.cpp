#include <iostream>

int main()
{
    //Задание 1
    //int const n = 5;
    //int mas[n];
    //int a = 0;
    //int i = 0;
    //
    //int k = 0;

    //while (i < n) //Вводим последовательность
    //{
    //    std::cin >> mas[i];
    //    i++;
    //}

    //int counter2 = 0;
    //for (int i = 0; i < n; ++i)
    //{
    //    int counter = 1;
    //    int ln = 0;
    //    a = mas[i];

    //    while (a != 0)
    //    {
    //        ln++;
    //        if ((a % 10 == ((a % 100) / 10)) && a % 10 != 0)
    //        {
    //            counter += 1;
    //        }
    //        a /= 10;
    //    }
    //    if (counter == ln)
    //    {
    //        counter2 += 1;
    //    }
    //}
    //if(counter2 >= 3)
    //    for(int x=0; x < n-1; x++)
    //        for(int y=x+1; y < n; y++)
    //            if(mas[x] < mas[y])
    //            {
    //                int tmp = mas[x];
    //                mas[x] = mas[y];
    //                mas[y] = tmp;
    //            }
    //for (i = 0; i < n; ++i)
    //{
    //    std::cout << mas[i] << " ";
    //}




    //Задание 2

    //int const n = 6;
    //int mas[n];
    //int i = 0;
    //int counter = 0;
    //int summas[n];

    //while (i < n) ////Вводим последовательность
    //{
    //    std::cin >> mas[i];
    //    i++;
    //}

    //for (int a = 0; a < n; a++) ////Для каждого числа считаем сумму цифр и записываем в массив summas
    //{
    //    int sum = 0;
    //    int b = mas[a];

    //    while (b != 0)
    //    {
    //        sum += b % 10;
    //        b /= 10;

    //    }
    //    summas[a] = sum;
    //} 



    //for (int x = 0; x < n-1; x++)
    //{
    //    for (int y = x + 1; y < n; y++)
    //    {
    //        if (summas[x] > summas[y]) ////Первая условие сортировки
    //        {
    //            int tmp = summas[x];
    //            summas[x] = summas[y];
    //            summas[y] = tmp;

    //            int tmp1 = mas[x];
    //            mas[x] = mas[y];
    //            mas[y] = tmp1;
    //        }
    //        else if (summas[x] == summas[y]) ////Второе условние сортировки
    //        {
    //            int pr1 = mas[x];
    //            int pr2 = mas[y];

    //            int num1 = 0;
    //            int num2 = 0;

    //            while (pr1 != 0) ////Нахождение максимальной цифры в числе
    //            {
    //                num1 = std::max(num1, pr1 % 10);
    //                pr1 /= 10;
    //            }
    //            while (pr2 != 0)
    //            {
    //                num2 = std::max(num2, pr2 % 10);
    //                pr2 /= 10;
    //            }
    //            if (pr1 < pr2) ////Сортировка по этой цифре
    //            {
    //                int tmp1 = mas[x];
    //                mas[x] = mas[y];
    //                mas[y] = tmp1;
    //            }
    //            else if (pr1 == pr2) ////Третье условие сортировки
    //            {
    //                if (mas[y] <= mas[x])
    //                {
    //                    int tmp1 = mas[x];
    //                    mas[x] = mas[y];
    //                    mas[y] = tmp1;
    //                }
    //            }
    //        }
    //    }
    //}
    //for (i = 0; i < n; ++i) ////Вывод массива
    //    {
    //        std::cout << mas[i] << " ";
    //    }



    //Задание 3
    //const int nmatr = 100;
    //const int mmatr = 100;
    //int mat[nmatr][mmatr];
    //int mas[nmatr][1];
//
    //int n, m;
    //std::cin >> n >> m;
//
    //for (int i = 0; i < n; i++)
    //{
        //for (int j = 0; j < m; j++)
        //{
            //std::cin >> mat[i][j];
        //}
    //}
    //int counteroper = 0;
    //int maxcounter = 0;
    //int counter = 1;
    //int max = INT_MIN;
    //short nomer = 0;
//
    //for (int j = 0; j < m; j++)
    //{
        //counter = 1;
        //for (int i = 0; i < n; i++)
        //{
            //counter *= mat[i][j];
        //}
        //if (counter > max) {
            //max = counter;
            //nomer = j;
        //}
        //
    //}
//
    //for (int i = 0; i < n; i++)
    //{
        //mat[i][nomer] -= 3;
    //}
//
    //for (int i = 0; i < n; i++)
    //{
        //for (int j = 0; j < m; j++)
        //{
            //std::cout << mat[i][j] << " ";
        //}
        //std::cout << std::endl;
    //}
}

