
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int guests = 0;
	cout << "Введите количество гостей : ";
	cin >> guests;
	if (guests < 1 || guests > 20) {
		cout << "Некорректное количество гостей!" << endl;
		return 1;
	}
	int viruchka = 0;
	int guests5 = 0;
	int maxnights = 0;
	int max_nights_guests = 0;
	for (int i = 1; i <= guests; i++) {
		int nights = 0;
		cout << "Введите количество ночей для гостя " << i << " : ";
		cin >> nights;
		if (nights < 1 || nights > 30) {
			cout << "Некорректное количество ночей!" << endl;
			return 1;
		}
		int cost = 0;
		if (nights <= 4) {
			cost = nights * 80;
		}
		else {
			cost = 4 * 80 + (nights - 4) * 60;

		}
		cout << "Стоимость проживания для гостя " << i << " : " << cost << endl;
		viruchka += cost;
		if (nights >= 5) {
			guests5++;
		}
		if (nights > maxnights) {
			maxnights = nights;
			max_nights_guests = i;
		}
	}
	cout << "Общая выручка от всех гостей : " << viruchka << endl;
	cout << "Количество гостей, которые прожили 5 и более ночей : " << guests5 << endl;
	cout << "Гость, который прожил наибольшее количество ночей : Гость " << max_nights_guests << " с количеством ночей : " << maxnights << endl;
return 0;
}