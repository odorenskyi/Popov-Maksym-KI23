#include <iostream>
#include <locale>
#include <fstream>
#include <string>
#include <regex>
#include <chrono>
#include <ctime>
#include <cmath>
#include "ModulesPopov.h"

using namespace std;

void info()
{
    system("chcp 65001 > nul");
    ofstream outFile;
    outFile.open("output.txt");

    if(!outFile.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
    }
    else
    {
        outFile << "Попов М.О" << endl;
        outFile << "ЦНТУ Кропивницький Україна" << endl;
        outFile << "2024" << endl;
        outFile.close();
    }

}

int abzac()
{
    ofstream outFile;
    outFile.open("output.txt");
    ifstream inFile;
    inFile.open("input.txt");

    if (!inFile.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
    }
    else
    {
        string str;
        int abzass = 0;

        while (getline(inFile, str))
        {

            if (str.empty())
            {
                abzass++;
            }
        }
        outFile << "Кількість абзаців у тексті: " << abzass << endl;
    }
    inFile.close();
    outFile.close();

    return 0;
}

int check_word()
{
    ofstream outFile;
    outFile.open("output.txt");
    ifstream inFile;
    inFile.open("input.txt");

    string line;

    bool has_ukraine = false;
    bool has_university = false;

    regex ukraine("Україн[а-яіїє]*");
    regex university("університет[уаоііїє]*");

    while (getline(inFile, line))
    {
        if(regex_search(line, ukraine))
        {
            has_ukraine = true;
        }

    if(regex_search(line, university))
     {
        has_university = true;
     }
    }

    if (has_ukraine == true)
    {
        outFile << "У тексті є слово 'Україна'" << endl;
    }
    else
    {
        outFile << "У тексті немає слова 'Україна'" << endl;
    }

    if (has_university == true)
    {
        outFile << "У тексті є слово 'університет'" << endl;
    }
    else
    {
        outFile << "У тексті немає слова 'університет'" << endl;
    }

    outFile.close();
    inFile.close();

    return 0;


}

void dot_text()
{
    ifstream input;
    input.open("input.txt");

    if (!input.is_open())
    {
        cout << "Помилка відкриття файлу" << endl;
        return;
    }

        int dots = 0;
        char a;

        while(input.get(a))
        {
            if (a == '.')
            {
                dots++;
            }
        }
        input.close();

        ofstream outputFile;
        outputFile.open("output.txt", ios::app);

        outputFile << "Кількість крапок у файлі: " << dots << endl;

        auto time = chrono::system_clock::now();
        time_t time_s = chrono::system_clock::to_time_t(time);

        outputFile << "Дата та час: " << (ctime(&time_s)) << endl;

        outputFile.close();


}

float s_calculation(float x, float y, float z)
{
    float S;
    const double pi = 3.14159265358979323846;
    S=log(x) * sin(z) + (1.0 / 2.0 * pow(x, 2) - pow(sqrt(y + z), 2) - pow(x, 5)) / (10.0 * pi * pow(z, 4));
    return roundf(S * 100000.0f) / 100000.0f;
}

