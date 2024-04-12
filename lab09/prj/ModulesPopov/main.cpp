#include <cmath>
#include <string>
#include "ModulesPopov.h"

using namespace std;

float s_calculation(float x, float y, float z)
{
    float S;
    const double pi = 3.14159265358979323846;
    S=log(x) * sin(z) + (1.0 / 2.0 * pow(x, 2) - pow(sqrt(y + z), 2) - pow(x, 5)) / (10.0 * pi * pow(z, 4));
    return roundf(S * 100000.0f) / 100000.0f;
}

float getCelsius(float farenheit) {
	return (5.0/9)*(farenheit-32);
}

Bonus getBonus(float value) {
	Bonus bonus;
	bonus.bonusBalance = 0;

	if (value >= 100 && value < 200)
		bonus.bonusBalance = 1;
	else if (value >= 200 && value < 500)
		bonus.bonusBalance = 5;
	else if (value >= 500 && value < 1000)
		bonus.bonusBalance = 10;
	else if (value >= 1000 && value < 2500)
		bonus.bonusBalance = 50;
	else if (value >= 2500 && value < 5000)
		bonus.bonusBalance = 150;
	else if (value >= 5000)
		bonus.bonusBalance = 300;

	bonus.discountedSum = value - bonus.bonusBalance * 0.25;
	return bonus;
}

int natural(int number) {
	unsigned int count = 0;
	if (number > 0 || number <= 51950) {
		bool set = (number >> 4) & 1;
		while (number) {
			count += (number & 1) == set;
			number >>= 1;
		}
	} else {
		return -1;
	}
	return count;
}
