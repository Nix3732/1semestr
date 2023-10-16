#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");


    const int N_max = 8;

    int mas[N_max];
    int i = 0;
    int a = 0;
    int i2 = N_max / 2;
    int counter = 0;

    while (i < i2)
    {
        std::cin >> mas[i];
        mas[i + i2] = mas[i];
        i++;
    }

    for (a; a < i2-1; a++)
    {
        for (int j = a + 1; j < i2; j++)
        {
            if ((mas[a] + mas[j]) % 7 == 0)
            {
                mas[a + i2] = 0;
                mas[j + i2] = 0;
            }
        }
    }




    for (i = i2; i < N_max; ++i)
    {
        std::cout << mas[i] << " ";
    }
    return 0;
}


