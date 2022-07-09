#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	string sl1, sl2; int i, j;
	cout << "Введите первое слово:\n"; cin >> sl1;
	cout << "Введите второе слово:\n"; cin >> sl2;
	vector <pair<char,int> > buk;
	for (i = 0; i < sl1.size(); i++) {
		for (j = 0; j < buk.size(); j++)
			if (buk[j].first == sl1[i]) { buk[j].second++; break; }
		if (j==buk.size()) buk.push_back(make_pair(sl1[i], 1));}
	cout << "1)";
	for (int k = 0; k < sl2.size(); k++) {bool f = false;
		for (j = 0; j < buk.size(); j++)
			if (sl2[k] == buk[j].first && buk[j].second > 0) { buk[j].second--; f = true; }
			if (!f) { cout << "Нет;\n2)Нет."; return 0; } }
	cout << "Да;\n2)";
	for (int k = 0; k < buk.size(); k++)
		if (buk[k].second > 0) {cout << "Нет."; return 0;}
	cout << "Да."; return 0;}