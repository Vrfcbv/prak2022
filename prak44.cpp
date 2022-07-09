#include <iostream>
#include <set>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	string s, news = "";
	cout << "Введите слово:\n"; cin >> s;
	cout << "Преобразованная строка:\n";
	set <char> sym;
	for (int i = 0; i <= s.size(); i++)
		if (sym.find(s[i]) == sym.end()) { sym.insert(s[i]); news += s[i]; }
	cout << news;
return 0;}