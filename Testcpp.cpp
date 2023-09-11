#include <iostream>
#include <iomanip>

int main()
{
    setlocale(LC_ALL, "Rus");

    std::cout << "Название           " << "Размер              " << "Макс                       "  << "Мин\n\n";

    std::cout << "Bool               " << sizeof(bool) << " Байт(а)           " << "true(1)                    "  << "false(0)\n\n";
    std::cout << "Char               " << sizeof(char) << " Байт(а)           " << CHAR_MAX << "                       " << CHAR_MIN << "\n\n";
    std::cout << "Unsigned char      " << sizeof(unsigned char) << " Байт(а)           " << UCHAR_MAX << "                        " << "0\n\n";
    std::cout << "Short              " << sizeof(short) << " Байт(а)           " << SHRT_MAX  << "                     " << SHRT_MIN << "\n\n";
    std::cout << "Unsigned short     " << sizeof(unsigned short) << " Байт(а)           " << USHRT_MAX << "                      " << "0\n\n";
    std::cout << "Int                " << sizeof(int) << " Байт(а)           " << INT_MAX   << "                " << INT_MIN << "\n\n";
    std::cout << "Unsigned int       " << sizeof(unsigned int) << " Байт(а)           " << UINT_MAX << "                 " << "0\n\n";
    std::cout << "Long               " << sizeof(long) << " Байт(а)           " << LONG_MAX << "                " << LONG_MIN << "\n\n";
    std::cout << "Unsigned long      " << sizeof(unsigned long) << " Байт(а)           " << ULONG_MAX << "                 " << "0\n\n";
    std::cout << "Long Long          " << sizeof(long long) << " Байт(а)           " << LLONG_MAX << "       " << LLONG_MIN << "\n\n";
    std::cout << "Unsigned long Long " << sizeof(unsigned long long) << " Байт(а)           " << ULLONG_MAX << "       " << "0\n\n";
    std::cout << "Float              " << sizeof(float) << " Байт(а)           " << FLT_MAX << "                " << FLT_MIN << "\n\n";
    std::cout << "Double             " << sizeof(double) << " Байт(а)           " << DBL_MAX << "               " << DBL_MIN << "\n\n";
    std::cout << "Long double        " << sizeof(long double) << " Байт(а)           " << LDBL_MAX << "               " << DBL_MIN << "\n\n";
    std::cout << "Wchar_t            " << sizeof(wchar_t) << " Байт(а)           " << WCHAR_MAX << "                      " << WCHAR_MIN << "\n\n";
    return 0;
}
