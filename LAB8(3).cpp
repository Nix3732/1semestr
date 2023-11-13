#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>

std::string to_upper(std::string a)
{
    std::string upword;
    for (int i = 0; i < a.length(); i++)
    {   
        upword += toupper(a[i]);
    }
    return upword;
}

std::string copy(std::string old)
{
    std::string lettersnew;

    for (int i = 0; i < old.length(); i++)
    {
        int j;
        for (j = 0; j < lettersnew.length(); j++)
        {
            if (old[i] == lettersnew[j])
            {
                break;
            }
        }
        if (j == lettersnew.length())
        {
            lettersnew += old[i];
        }
    }
    return lettersnew;
}

int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::string longest[1000];
    std::ifstream text("input.txt");
    std::ofstream out("output.txt");
    std::string letters;
    int counter = 0;
    std::string textmas[1000];
    int valuelong = 0;


    while (!text.eof())
    {
        std::string s;
        text >> textmas[counter++];
    }


    int l = 0;

    for (int i = 0; i < counter; i++)
    {
        int lword = textmas[i].length();
        l = std::max(l, lword);
    }

    for (int i = 0; i < counter; i++)
    {
        if (textmas[i].length() == l)
        {
            longest[valuelong] = textmas[i];
            valuelong++;
        }
    }
    for (int i = 0; i < counter; i++)
        std::cout << longest[i] << std::endl;


    int counter1 = 0;

    for (int i = 0; i < valuelong; i++)
    {
        std::string word = longest[i];

        for (int k = 0; k < word.length(); k++)
        {
            if (((word[k] >= 'а') and (word[k] <= 'я'))
                or ((word[k]) >= 'А') and (word[k] <= 'Я'))
            {
                letters += tolower(word[k]);
                counter1++;
            }
        }
    }

    std::string lettersnew = copy(letters);

    for (int i = 0; i < counter; i++)
    {
        int counterrepeat = 0;
        bool punk = false;
        std::string skobki;
        int counterletters = 0;
        std::string finalword;
        std::string a = textmas[i];
        for (int j = 0; j < a.length(); j++)
        {
            int coun = 0;
            char b = tolower(a[j]);
            for (int k = 0; k < lettersnew.length(); k++)
            {
                char c = lettersnew[k];
                if (b != c)
                {
                    coun += 1;
                }
            }

            if (coun == lettersnew.length())
            {
                counterletters += 1;
                if ((!ispunct(b)) and (b != '—'))
                {
                    skobki += b;
                    punk = true;
                }
            }
        }

        if (counterletters > 0)
        {
            std::string skobki1 = copy(skobki);

            finalword = to_upper(a);
            if (punk == true)
                finalword = finalword + ' ' + '(' + skobki1 + ')';
        }
        else
        {
            finalword = a;
        }

        out << finalword << std::endl;
    }

    return 0;
}
