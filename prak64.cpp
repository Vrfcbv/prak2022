#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a[12][10]; int c = 120;
	for (int j = 0; j <= 9; j++) {
		if (j % 2 == 0)
		for (int i = 11; i >= 0; i--) { a[i][j] = c; c--; }
		else for (int i = 0; i <= 11; i++) { a[i][j] = c; c--; } }
	for (int i = 0; i <= 11; i++) {
		for (int j = 0; j <= 9; j++) cout << setw(3) << a[i][j] << " ";
		cout << endl;}
	return 0;}