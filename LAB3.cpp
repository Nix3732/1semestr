#include <iostream>
#include <bitset>

int main()
{
    setlocale(LC_ALL, "Rus");

    unsigned int x; //Вводим переменные
    short i;

    std::cout << "Введите число от 1 до 10^9 - 1: "; //Получаем x и записываем его в переменную bin_x
    std::cin >> x;
    std::bitset<32> bin_x(x);
    std::cout << bin_x;

    std::cout << "\nВведите номер бита (отсчёт начинается с справа на лево и с 0): "; //Получаем номер бита, который хотим поменять на 0
    std::cin >> i;

    std::bitset<32> a(0); //Создаём 0 в двоичной записи 

    a |= ~(1 << i); //Задвигаем 1 на i позицию и инверсируем 0 и 1

    bin_x = bin_x & a; //Используем И для того, чтобы поменять нужную нам единицу на 0

    std::cout << bin_x;
}

