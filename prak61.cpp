#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n; cout << "Введите количество элементов массива: "; cin >> n;
	vector <int> a(n); cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	if (a[i] % 2 != 0 && a[i + 1] % 2 != 0) { cout << "Да: " << i + 1 << " и " << i + 2 << "."; return 0; }
	cout << "Нет."; return 0;}