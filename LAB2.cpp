#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    unsigned short x;
    std::cout << "Введите число от 1 до 39: ";
    std::cin >> x;
    std::cout << std::endl << "Объем куба со стороной " << x << " равен: " << x * x * x;

    return 0;
}

