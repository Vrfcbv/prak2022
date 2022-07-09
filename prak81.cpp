#include <fstream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	int f = 0, fl = 0;
	while (!cin.eof()) {int a; cin >> a;
		if (f == 0) { cout << a << " "; } else f = 0;
		if (a == 0 && fl == 0) { f = 1; fl = 1; } }
	cin.close(); cout.close();
	return 0;}