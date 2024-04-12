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
		cout << "������ j, z, x ��� c: ";
		cin >> prog;

		switch (prog) {
			case 'j':
				int x, y, z;
				cout << "������ x: ";
				cin >> x;
				cout << "������ y: ";
				cin >> y;
				cout << "������ z: ";
				cin >> z;
				cout << "s = " << s_calculation(x,y,z) << endl;
				break;
			case 'z':
				float value;
				Bonus bonus;
				cout << "������ ���� �������: ";
				cin >> value;
				bonus = getBonus(value);
				cout << "������ �������: " << bonus.bonusBalance << ", ���� ������ � ����������� ������: " << bonus.discountedSum << endl;
				break;
			case 'x': {
				float farenheit;
				float celsius;

				cout << "������ ������� ������� �� ������ ����������: ";
				cin >> farenheit;

				celsius = getCelsius(farenheit);

				cout << "ʳ������ ������� �� ������ ������: " << celsius << endl;
				break;
			}
			case 'c':
				int n;
				int result;
				cout << "������ N: ";
				cin >> n;
				result = natural(n);
				if (result == -1)
					cout << "������� ���������� ���." << endl;
				else
					cout << "���������: " << result << endl;
				break;
			default:
				cout << "\a������� ���������� ���." << endl;
		}

		cout << "������ v, V ��� A ��� ������ �� ��������: ";
		cin >> exit;

		if (tolower(exit) == 'v' || exit == 'A')
			break;
	}

	return 0;
}
