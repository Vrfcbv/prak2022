#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a[9][6]; cout << "Введите баллы спортсменов:\n";
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 5; j++) cin >> a[i][j];
	int omax = a[1][1], summax = 0;
	for (int i = 1; i <= 8; i++) {int sum = 0;
		for (int j = 1; j <= 5; j++) {
			if (omax < a[i][j]) omax = a[i][j];
			sum += a[i][j];}
		if (summax < sum) summax = sum;}
	cout << "Максимальная из оценок в таблице: " << omax << endl << "Баллов у победителя соревнований: " << summax;
return 0;}
