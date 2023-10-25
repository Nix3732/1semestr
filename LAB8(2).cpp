#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

int value(std::string word, std::string glass)
{
    int cou = 0;
    for (int i = 0; i < word.length(); i++)
    {
        for (int j = 0; j < glass.length(); j++)
        {
            if (word[i] == glass[j])
            {
                cou += 1;
            }
        }
    }
    return cou;
}

std::string doubleglass(std::string doub, std::string glass)
{
    int counter = 0;
    std::string doubfinal;
    for (int i = 0; i < doub.length(); i++)
    {   
        counter = 0;
        for (int j = 0; j < glass.length(); j++)
        {
            if (doub[i] == glass[j])
            {
                counter += 1;
            }
        }
        if (counter == 0)
        {
            doubfinal += doub[i];
        }
        else if (counter >= 1)
        {
            doubfinal += doub[i];
            doubfinal += doub[i];
        }
    }

    return doubfinal;
}

std::string newword(std::string without, std::string gluxie)
{
    std::string without1 = without;
    for (int i = 0; i < without.length(); i++)
    {
        for (int j = 0; j < gluxie.length(); j++)
        {
            if (without[i] == gluxie[j])
            {
                without1 = without.erase(i, 1);
            }
        }
    }
    return without1;
}

std::string low(std::string word)
{
    std::transform(word.begin(), word.end(), word.begin(), tolower);
    return word;
}

bool dveglas(std::string word, std::string glass, bool flag1)
{
    for (int i = 0; i < word.length(); i++)
        for (int j = 0; j < glass.length(); j++)
        {
            if (word[i] == glass[j])
            {
                for (int l = i + 1; l < word.length(); l++)
                {
                    if (word[i] == word[l])
                    {
                        flag1 = true;
                    }
                }
            }
        }
    return flag1;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    std::ifstream str("input.txt");
    std::string gluxie = "пфкшстхцчщ";
    std::string glass = "иаеёоуыэюяИАЕЁОУЫЭЮЯ";
    std::string mas[1000];
    std::string finalmas[1000];
    int counter = 0;
    int countglass = 0;
    bool flag = false;
    bool flag1 = false;
    int counterofglass[1000];

    while (!str.eof())
    {
        std::string s;
        str >> s;
        mas[counter] = s;
        counter++;
    }

    for (int i = 0; i < counter; i++)
    {
        std::string word = mas[i];
        word = low(word);
        flag = dveglas(word, glass, flag1);
        countglass = value(word, glass); 
        counterofglass[i] = countglass;
        if (flag)
        {
            break;
        }
    }

    if (flag)
    {
        for (int i = 0; i < counter; i++)
        {
            std::string without = mas[i];
            finalmas[i] = newword(without, gluxie);
        }
    }
    else
    {
        for (int i = 0; i < counter; i++)
        {
            if (counterofglass[i] >= 3)
            {
                std::string doub = mas[i];
                finalmas[i] = doubleglass(doub, glass);
            }
            else
            {
                finalmas[i] = mas[i];
            }
        }

    }

    std::string temp;
    for (int i = 0; i < counter-1; i++)
    {
        for (int j = i + 1; j < counter; j++)
        {
            if (finalmas[i] > finalmas[j])
            {
                temp = finalmas[i];
                finalmas[i] = finalmas[j];
                finalmas[j] = temp;
            }
        }
    }


    for (int i = 0; i < counter; i++)
    {   
        std::cout << finalmas[i] << std::endl;
    }
}
