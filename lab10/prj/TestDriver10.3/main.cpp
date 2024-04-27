#include <iostream>
#include <fstream>
#include <locale>
#include <cmath>
#include <bitset>
#include "ModulesPopov.h"

using namespace std;

int main()
{
    system("chcp 65001 > nul");
    float x, y, z;
    int b;
    cout << "Введіть числа" << endl;
    cin >> x >> y >> z;
    cout << "Введіть натуральне число" << endl;
    cin >> b;

    float s = s_calculation(x,y,z);

    ofstream output;
    output.open("output.txt");

    output << "Результат S: " << s << endl;
    output << "Число b у двійковому коду: " << bitset<8>(b) << endl;
    output.close();

    return 0;
}
