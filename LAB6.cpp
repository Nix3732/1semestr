#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");

    //Первое задание
    //Ввод длины последовательности
    int lengh;
    std::cout << "Введите длину последовательности\n";
    std::cin >> lengh;
    std::cout << std::endl;

    //Нахождение произведения
    int seq = 0; //Для номера числа в последоваетльности
    int comp1 = 0;
    int comp = 0; //Для Макс
    int i = 0;
    int num = 0; //Для ввода чисел
    int counter = 1; //В counter считаем произведение

    while (i++ < lengh)
    {
        std::cout << "Введите " << i << " число последовательности\n";
        std::cin >> num;
        std::cout << std::endl;
        if (num % 5 != 0)
            counter *= num;
            comp = std::max(comp, num);
        if (comp1 != comp)
            seq = i;

        comp1 = comp;

    }

    std::cout << "Произведение чисел, не делящихся на 5, равно " << counter;
    std::cout << std::endl;
    std::cout << "Максимальное такое число последовательности равно " << comp;
    std::cout << std::endl;
    std::cout << "Номер этого элемента равен " << seq;
    std::cout << std::endl;





    //Второе задание
    //Вводим число N
    int N;
    std::cin >> N;
    std::cout << std::endl;
    unsigned int counter = 1;

    //Cчитаем произведение
    while (N)
    {
        short digit = N % 10;
        if (digit % 2 != 0)
            counter *= digit;
        N /= 10;
    }
    std::cout << counter;

    return 0;
}
