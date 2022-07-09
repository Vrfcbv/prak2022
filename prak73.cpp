#include <fstream>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	vector <pair<string, int> > buk;
	for (int j = 0; j < 15; j++) { string type; int stoi; cin >> type >> stoi; buk.push_back(make_pair(type, stoi)); }
	int sumsrstoi = 0, kolla = 0;
	for (int j = 0; j < buk.size(); j++)
		if (buk[j].first == "Легковой" || buk[j].first == "легковой") { sumsrstoi += buk[j].second; kolla++; }
	if (kolla != 0) cout << "Средняя стоимость легковых автомобилей:\n" << (double)sumsrstoi / kolla;
	else cout << "Нет легковых автомобилей!"; return 0;}