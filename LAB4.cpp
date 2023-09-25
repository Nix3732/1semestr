#include <iostream>

int main() 
{
    setlocale(LC_ALL, "Rus");

    //Первое задание
    //Вводим три числа
    std::cout << "Певрое задание\n";
    int a, b, c;
    std::cout << "Введите три числа через Enter\n";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    //Первое условие
    if ((a % c == 0) and (b % c == 0))
    {
        std::cout << ((a + b) / c);
    }

    //Второе условие
    else if ((a % c == 0) and (b % c != 0))
    {
        std::cout << ((a / c) + b);
    }

    //Конечное условие
    else
    {
        std::cout << (a - b - c);
    }

    //Второе задание
    //Вводим цифру N
    std::cout << "Второе задание\n";
    std::cout << "Введите число от 0 до 9 и нажмите Enter\n";
    short N;
    std::cin >> N;

    //Проверка на тип данных
    if (std::cin.get() != (short) '\n');
    {
        std::cout << "Ошибка. Введите число от 0 до 9";
        return 0;
    }

    //Вывод названий
    switch (N)
    {
    case 0:std::cout << "Ноль";
        break;
    case 1:std::cout << "Один";
        break;
    case 2:std::cout << "Два";
        break;
    case 3:std::cout << "Три";
        break;
    case 4:std::cout << "Четыре";
        break;
    case 5:std::cout << "Пять";
        break;
    case 6:std::cout << "Шесть";
        break;
    case 7:std::cout << "Семь";
        break;
    case 8:std::cout << "Восемь";
        break;
    case 9:std::cout << "Девять";
        break;
        //Обработка ошибки
    default:std::cout << "Ошибка. Введите число от 0 до 9";
        break;
    }
    return 0;

    //Третье задание
    //Вводим число х
    std::cout << "Введите -1 или 1 и нажмите Enter\n";
    short x;
    std::cin >> x;

    //Ошибки при вводе не -1 и не 1
    if ((x != 1) and (x != -1))
    {
        std::cout << "Ошибка. Введите -1 или 1";
        return 0;
    }

    //Вывод названий
    switch (x)
    {
        case -1:std::cout << "Negative number";
            break;

        case 1:std::cout << "Positive number";
            break;
        default:
            break;
    }
}
