#include <iostream>
#include <fstream>


int comb(char* s, char* glas)
{
    int ccomb = 0;

    for (int i = 0; i < strlen(s)-1; i++)
    {
        for (int j = 0; j < strlen(glas)-1; j++)
        {
            if (s[i] == glas[j])
            {
                for (int m = 0; m < strlen(glas)-1; m++)
                {
                    if (s[i + 1] == glas[m])
                    {
                        ccomb++;
                    }
                }
            }
                
        }
    }

    return ccomb;
}



int main()
{   
    
    setlocale(LC_ALL, "RUS");

    int combo[2001];
    char wordscomb[2001];
    int counter = 0;

    char glas[21] = { 'а', 'у', 'е', 'ы', 'о', 'э', 'я', 'и', 'ю', 'ё','А', 'У', 'Е', 'Ы', 'О', 'Э', 'Я', 'И', 'Ю', 'Ё', '\0'};

    std::ifstream text;
    text.open("input.txt");

    while (!text.eof())
    {
        char s[100];
        text >> s;

        int t = comb(s, glas);
        if (t > 0)
        {
            combo[counter] = t;
            wordscomb[counter] = *s;
            counter++;
        }
        std::cout << t << s << std::endl;
    }
    for (int i = 0; i < 2001; i++)
    {
        std::cout << wordscomb[i];
    }
}