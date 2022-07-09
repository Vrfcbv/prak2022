#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, k; cout << "Введите промежуток от a до b: "; cin >> a >> b;
	cout << "Введите количество делителей: "; cin >> k;
	cout << "Все целые числа из промежутка от a до b, у которых количество делителей равно k:\n";
	for (int i = a; i <= b; i++) {int kol = 1;
		for (int j = 1; j <= ceil(i / 2); j++)
			if (i % j == 0) kol++;
		if (kol == k) cout << i << " ";}
return 0;}
