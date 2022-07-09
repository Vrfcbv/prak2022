#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n; cout << "Введите количество элементов массива: "; cin >> n;
	vector <int> a(n), b(n); cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++) cin >> a[i];
	copy(a.begin(), a.end(), b.begin());
	cout << "а) "; for (int i = 0; i < n; i++) cout << b[i] << " ";
	copy(a.begin(), a.end(), b.rbegin());
	cout << ";\nb) "; for (int i = 0; i < n; i++) cout << b[i] << " ";
	cout << "."; return 0;}