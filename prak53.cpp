#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <windows.h>
using namespace std;

int Poisk(string pr1) {int kol = 0;
	for (int i = 0; i < pr1.size(); i++) if (pr1[i] == 'n' || pr1[i] == 'N') kol++;
return kol;}

int main() {
	setlocale(LC_ALL, "rus");
	string Pr1, Pr2;
	cout << "Введите первое предложение:\n"; getline(cin, Pr1, '\n'); int kol1 = Poisk(Pr1);
	cout << "Введите второе предложение:\n"; getline(cin, Pr2, '\n'); int kol2 = Poisk(Pr2); 
	cout << "В первом предложении " << kol1 << " букв n;\n";
	cout << "Во втором предложении " << kol2 << " букв n;\n";
	return 0;}
