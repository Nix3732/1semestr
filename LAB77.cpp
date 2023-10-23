#include <iostream>
#include <fstream>


int comb(std::string s, char* glas)
{
    int ccomb = 0;

    for (int i = 0; i < s.length()-1; i++)
    {
        for (int j = 0; j < strlen(glas) - 1; j++)
        {
            if (s[i] == glas[j])
            {
                for (int m = 0; m < strlen(glas) - 1; m++)
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
    int n;
    std::cin >> n;
    int combo[2001]{};
    int combo1[2001]{};
    std::string wordscomb[2001];
    std::string wordscomb1[2001];
    int counter = 0;
    int counter1 = 0;
    int counter2 = 0;


    char glas[21] = { 'а', 'у', 'е', 'ы', 'о', 'э', 'я', 'и', 'ю', 'ё','А', 'У', 'Е', 'Ы', 'О', 'Э', 'Я', 'И', 'Ю', 'Ё', '\0' };

    std::ifstream text;
    std::ofstream out("output.txt");
    text.open("input.txt");

    while (!text.eof())
    {
        std::string s;
        text >> s;
        int t = comb(s, glas);
        if ((t > 0) && (counter < 2001))
        {
            combo[counter] = t;
            wordscomb[counter] = s;
            counter++;
        }
    }

    for (int i = 0; i < 2001; i++)
    {
        std::string sym = wordscomb[i];
        for (int j = 0; j < sym.length(); j++)
        {
            if (((sym[j] >= 'а') and (sym[j] <= 'я'))
                or ((sym[j] >= 'А') and (sym[j] <= 'Я')))
            {
                sym[j] = sym[j];
            }
            else
            {
                sym[j] = ' ';
            }
        }
        wordscomb[i] = sym;
    }

    for (int i = 0; i < 2001; i++)
    {
        bool uniq = true;
        for (int j = 0; j < 2001; j++)
        {
            if (((wordscomb[i]) == wordscomb[j]) and (i != j))
            {
                uniq = false;
                break;
            }
        }
        if (uniq)
        {
            wordscomb1[counter2] = wordscomb[i];
            combo1[counter2] = combo[i];
            ++counter2;
        }
    }
    for (int x = 0; x < counter2-1; x++)
        for(int y=x+1; y < counter2; y++)
            if (combo1[x] < combo1[y])
            {
                std::string tmp = wordscomb1[x];
                wordscomb1[x] = wordscomb1[y];
                wordscomb1[y] = tmp;

                int tmp1 = combo1[x];
                combo1[x] = combo1[y];
                combo1[y] = tmp1;
            }

    for (int i = 0; i < n; i++)
    {
        out << combo1[i] << ' ' << wordscomb1[i] << ' ' << std::endl;
    }
}
