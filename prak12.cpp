#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int k, m; cout << "Введите k-ый день года: "; cin >> k;
    cout << "Введите m-ый день недели: "; cin >> m;
    if ((k % 7 + m) % 7 - 1 == 0) cout << "На " << 7 << "-ой день недели приходится К-ый день года" << endl;
    else cout << "На " << (k%7+m) % 7 - 1<< "-ый день недели приходится К-ый день года" << endl;
} 