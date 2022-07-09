#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int n; cout << "Введите размерность матрицы n*n: "; cin >> n; vector <vector<int> > m(n);
	vector <int> a, b, c;
	for (int i = 0; i < n; i++) {m[i].resize(n);
	for (int j = 0; j < n; j++) {cin >> m[i][j];
	if (m[i][j] < 0) a.push_back(m[i][j]);
	if (m[i][j] % 2 == 0) b.push_back(m[i][j]); 
	else c.push_back(m[i][j]);} }
	cout << "a) Отрицательные: "; for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
	cout << "\nб) Чётные: "; for (int i = 0; i < b.size(); i++) cout << b[i] << " ";
	cout << "\nб) Нечётные: "; for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
	return 0;}