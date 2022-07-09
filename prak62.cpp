#include <iostream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "Введите вместимости (в мегабайтах) и стоимости (в рублях) каждого из 22 типов жестких магнитных дисков (винчестеров):\n";
	vector <pair<int, int> > buk(22);
	for (int j = 0; j < 22; j++) { int vmes, stoi; cin >> vmes >> stoi; buk.push_back(make_pair(vmes, stoi)); }
	cout << "Введите s в рублях: "; int s; cin >> s;
	cout << "Вместимость тех винчестеров, которые стоят больше s рублей:\n";
	for (int k = 0; k < buk.size(); k++)
		if (buk[k].second > s) cout << buk[k].first << " ";
return 0;}