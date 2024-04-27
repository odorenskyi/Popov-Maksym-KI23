#include <iostream>
#include <locale>
#include <regex>
#include <fstream>
#include <string>
#include "ModulesPopov.h"

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    info();

    ifstream output;
    output.open("output.txt");

    string line;
    bool is_valid = false;

    while (getline(output, line))
    {
        if(line == "Попов М.О")
        {
            is_valid = true;
        }
        if(line == "ЦНТУ Кропивницький Україна")
        {
            is_valid = true;
        }
        if(line == "2024")
            {
                is_valid = true;
            }
    }

    if(!is_valid)
    {
        cout << "Test False!" << endl;
    }
    else
    {
        cout << "Test Passed!" << endl;
    }


    return 0;
}
