// Lab_8_2.cpp
// < Кузів Назар >
// Лабораторна робота № 8.2
// Опрацювання літерних рядків
// Варіант 6


/*
Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
Групи символів, відокремлені пробілами (одним або кількома) і які не містять пробілів,
будемо називати словами. Підрахувати кількість слів у цьому рядку.*/


#include <iostream>
#include <string>

using namespace std;

int CountWords(string& s)
{
    int  kilk = 0;
    size_t pos = 0;
    int i = s.length();

    if (s[0] == ' ')
        pos++;


    while ((pos = s.find(' ', pos)) != -1)
    {
        if (s[pos - 1] != ' ')
        {
            kilk++;
            pos++;
        }
        else
            pos++;

    }

    if (s[i - 1] != ' ')
        kilk++;

    return kilk;
}

int main()
{
    string s;
    cout << "Enter string:" << endl;
    getline(cin, s);



    cout << "number of words : " << CountWords(s) << endl;
    return 0;
}