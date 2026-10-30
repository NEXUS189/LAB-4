//С помощью do-while запрашивать день заселения d и срок проживания k, пока одновременно не выполняются условия:
// 1 ≤ d ≤ 30, 1 ≤ k ≤ 7, d + k − 1 ≤ 30. Стоимость ночи — 70;
// для каждого дня проживания, номер которого делится на 7 без остатка, стоимость ночи — 90.
// Рассчитать стоимость всего проживания с помощью цикла и вывести дату последнего дня.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int d, k;
	do {
		cout << "Введите день заселения (1-30): ";
		cin >> d;
		cout << "Введите срок проживания (1-7): ";
		cin >> k;
	} while (d < 1 || d > 30 || k < 1 || k > 7 || d + k - 1 > 30);
	int totalCost = 0;
	for (int i = 0; i < k; i++) {
		int currentDay = d + i;
		if (currentDay % 7 == 0) {
			totalCost += 90; 
		}
		else {
			totalCost += 70; 
		}
	}
	int lastDay = d + k - 1;
	cout << "Стоимость всего проживания: " << totalCost << endl;
	cout << "Дата последнего дня проживания: " << lastDay << endl;
	return 0;
}
