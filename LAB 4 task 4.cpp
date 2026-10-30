//Ввести f (2..9) этажей и r (2..10) комнат на этаже.
// Вложенными for вывести план: X, если сумма номера этажа и номера комнаты делится на 4, иначе точку.
// Под планом вывести количество свободных комнат (точек) и процент их доли от общего числа комнат.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	
	int f, r;
	cout << "Введите количество этажей (2..9): ";
	cin >> f;
	cout << "Введите количество комнат на этаже (2..10): ";
	cin >> r;

	int freeRooms = 0;
	for (int i = 1; i <= f; i++) {
		for (int j = 1; j <= r; j++) {
			if ((i + j) % 4 == 0) {
				cout << "X";
			} else {
				cout << ".";
				freeRooms++;
			}
		}
		cout << endl;
	}

	cout << "Количество свободных комнат: " << freeRooms << endl;
	cout << "Процент свободных комнат: " << (double)freeRooms / (f * r) * 100 << "%" << endl;

	return 0;
}
