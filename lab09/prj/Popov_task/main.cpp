#include <iostream>
#include <cctype>
#include <clocale>
#include "ModulesPopov.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
	while (true) {
		char prog;
		char exit;
		cout << "¬вед≥ть j, z, x або c: ";
		cin >> prog;

		switch (prog) {
			case 'j':
				int x, y, z;
				cout << "¬вед≥ть x: ";
				cin >> x;
				cout << "¬вед≥ть y: ";
				cin >> y;
				cout << "¬вед≥ть z: ";
				cin >> z;
				cout << "s = " << s_calculation(x,y,z) << endl;
				break;
			case 'z':
				float value;
				Bonus bonus;
				cout << "¬вед≥ть суму покупки: ";
				cin >> value;
				bonus = getBonus(value);
				cout << "Ѕаланс бонусов: " << bonus.bonusBalance << ", сума сплати з урахуванн€м знижки: " << bonus.discountedSum << endl;
				break;
			case 'x': {
				float farenheit;
				float celsius;

				cout << "¬вед≥ть к≥льк≥сть градус≥в за шкалою ‘аренгейта: ";
				cin >> farenheit;

				celsius = getCelsius(farenheit);

				cout << " ≥льк≥сть градус≥в за шкалою цельс≥€: " << celsius << endl;
				break;
			}
			case 'c':
				int n;
				int result;
				cout << "¬вед≥ть N: ";
				cin >> n;
				result = natural(n);
				if (result == -1)
					cout << "¬ведено неправильн≥ дан≥." << endl;
				else
					cout << "–езультат: " << result << endl;
				break;
			default:
				cout << "\a¬ведено неправильн≥ дан≥." << endl;
		}

		cout << "¬вед≥ть v, V або A дл€ виходу ≥з програми: ";
		cin >> exit;

		if (tolower(exit) == 'v' || exit == 'A')
			break;
	}

	return 0;
}
