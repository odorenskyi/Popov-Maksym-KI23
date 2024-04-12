#include <iostream>
#include "ModulesPopov.h"

using namespace std;

void testGetBonus(float value, float BonusBalance, float DiscountedSum){
Bonus result7 = getBonus(value);
cout << "\nСума покупки: " << value << endl;
cout << "Баланс бонусов: " << result7.bonusBalance << endl;
cout << "Сума сплати з урахуванням знижки: " << result7.discountedSum << endl;
}
int main()
{
    setlocale(LC_ALL, "");
    cout << "TASK 9.2" << endl;
    float result = getCelsius(14);
    cout << "Result: " << result << endl;
    float result2 = getCelsius(-12);
    cout << "Result: " << result2 << endl;
    float result3 = getCelsius(20);
    cout << "Result: " << result3 << endl;


    cout << "\nTASK 9.3" << endl;
    int result4 = natural(2002);
    cout << "Result: " << result4 << endl;
    int result5 = natural(1444);
    cout << "Result: " << result5 << endl;
    int result6 = natural(100);
    cout << "Result: " << result6 << endl;

    cout << "\nTASK 9.1" << endl;
    testGetBonus(133,0,0);
    testGetBonus(5000,0,0);
    testGetBonus(6333,0,0);

    return 0;
}

