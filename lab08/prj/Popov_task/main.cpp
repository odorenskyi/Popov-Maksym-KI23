#include <iostream>
#include <cmath>
#include <locale.h>
#include <conio.h>

void copyright();
void symbolres(char a, char b);
void FuncDecHex(int x, int y, int z);

using namespace std;

void copyright()
{
    cout << "(C) Popov Maksym" << endl << endl;
}

void FuncDecHex(int x, int y, int z)
{
    cout << "'x' In decimal: " << dec << x << endl;
    cout << "'y' In decimal: " << dec << y << endl;
    cout << "'z' In decimal: " << dec << z << endl;
    cout << "'x' In hexadecimal: " << hex << x << endl;
    cout << "'y' In hexadecimal: " << hex << y << endl;
    cout << "'z' In hexadecimal: " << hex << z << endl << endl;
}

void symbolres(char a, char b)
{
    bool symbolres =  a + 1 <= b;
    cout << noboolalpha << "Result a + 1 <= b: " << symbolres << endl << endl;
}

float s_calculation(float x, float y, float z)
{
    float S;
    const double pi = 3.14159265358979323846;
    S=log(x) * sin(z) + (1.0 / 2.0 * pow(x, 2) - pow(sqrt(y + z), 2) - pow(x, 5)) / (10.0 * pi * pow(z, 4));
    return roundf(S * 100000.0f) / 100000.0f;
}


int x = 0,y = 0,z = 0;
char a,b;

int main()
{
    copyright();

    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;
    cout << "Input z: ";
    cin >> z;
    cout << "Input symbol 'a' and 'b': ";
    cin >> a >> b;

    cout << endl;

    symbolres(a, b);
    FuncDecHex(x, y, z);

    cout << "The result of calculating the expression: S = " << s_calculation(x, y, z) << endl;
    getch();

    return 0;
}

