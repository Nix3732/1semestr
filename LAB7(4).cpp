#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");


    //const int nm = 2000;

    int mas[2000];
    int i = 0;
    int num = 0;
    int n;
    int counter = 0;
    std::cin >> n;

    while (i < n)
    {
        std::cin >> mas[i];
        i++;
    }

    for (i = 0; i<n; i++)
    {
        counter = 0;
        num = mas[i];
        while (num != 0)
        {
            counter += num % 10;
            num /= 10;
        }
        if (counter % 7 == 0)
        {
            for (int j = i; j-1 < n; j++)
            {
                mas[j] = mas[j + 1];
            }
            i--;
            n--;
        }
    }

    num = 0;
    i = 0;
    while (i < n)
    {
        counter = 0;
        int num1 = mas[i];
        while (num1 != 0)
        {
            int digit = num1%10;
            num = num1/10;
            while (num > 0)
            {   
                std::cout << digit << " " << num % 10 << std::endl;
                if (digit == num%10)
                {
                    counter +=1;
                    break;
                }
                num /= 10;

            }
            if (counter > 0) break;
            num1 /= 10;
        }

        if (counter > 0)
        {

            for (int j = n; j > i; j--)
            {
                mas[j] = mas[j - 1];
            }
            n++;
            i++;
        }
        i++;
    }



    for (int a = 0; a < n; a++)
    {
        std::cout << mas[a] << " ";
    }
    return 0;
}
