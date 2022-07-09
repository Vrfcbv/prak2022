#include <iostream>
using namespace std;
void vivod() {int n; cin >> n; if (n != 0) vivod();	cout << n << " ";}
int main(){vivod(); return 0;}