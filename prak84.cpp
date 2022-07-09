#include <fstream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	while (!cin.eof()) {
		string a; getline(cin, a, '\n');
		if (!cin.eof()) cout << a << "\n";}
	cin.close(); cout.close();
	return 0;}
