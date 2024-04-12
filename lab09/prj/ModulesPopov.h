#ifndef MODULESPOPOV_H_INCLUDED
#define MODULESPOPOV_H_INCLUDED

float s_calculation(float x, float y, float z);

typedef struct Bonus {
	int bonusBalance;
	float discountedSum;
} Bonus;

Bonus getBonus(float);

float getCelsius(float);

int natural(int);

#endif // MODULESPOPOV_H_INCLUDED
