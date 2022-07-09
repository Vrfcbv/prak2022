#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
vector <string> CreateArray(string Pr1, vector <string> pr1) {
string sl1 = "";
	for (int i = 0; i < Pr1.size(); i++) {
		if (Pr1[i] == ' ') { pr1.push_back(sl1); sl1 = ""; }
	else sl1 += Pr1[i];} pr1.push_back(sl1);
return pr1;}

void Poisk(vector <string> pr1, vector <string> pr2) {
int i, j;
	for (i = 0; i < pr1.size(); i++) {
		for (j = 0; j < pr2.size(); j++)
			if (pr1[i] == pr2[j]) break;
		if (j == pr2.size()) cout << pr1[i] << " ";} }

int main() {
	setlocale(LC_ALL, "rus");
	vector <string> pr1, pr2; string Pr1, Pr2;
	cout << "Введите первое предложение:\n"; getline(cin, Pr1, '\n'); pr1 = CreateArray(Pr1, pr1);
	cout << "Введите второе предложение:\n"; getline(cin, Pr2, '\n'); pr2 = CreateArray(Pr2, pr2); 
	Poisk(pr1, pr2); cout << endl; Poisk(pr2, pr1);
	return 0;}
