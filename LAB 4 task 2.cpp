//Циклом while вводить номера запрашиваемых комнат (1..50) до 0. Некорректные номера игнорировать. Найти длину самой длинной серии одинаковых подряд идущих
// корректных номеров и сам номер комнаты; при равной длине оставить первую серию. Если ни одного номера не принято, вывести длину 0 и номер 0.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int maxroom = 0;
	int max_length = 0;
	int numberroom = 0;
	int lengthroom = -1;
		int room;
		cout << "Введите номера комнат (1..50). 0 для того чтобы завершить: ";
		while (true) {
			cin >> room;
			if (room == 0) {
				break;
			}
			if (room < 1 || room > 50) {
				continue;
			}
			if (room == numberroom) {
				lengthroom++;
			}
			else {
				lengthroom = 1;
				numberroom = room;
			}
			if (lengthroom > max_length) {
				max_length = lengthroom;
				maxroom = numberroom;
			}
		}
		if (lengthroom != 0 && lengthroom > max_length) {
			max_length = lengthroom;
			maxroom = numberroom;
		}
		cout << "Длина самой длинной серии: " << max_length << endl;
		cout << "Номер комнаты: " << maxroom << endl;
		return 0;
}