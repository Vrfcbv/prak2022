#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    double m; cout << "Введите массу в килограммах: ";
    cin >> m;
    cout << "Масса в граммах: " << m * 1000 << endl;
    cout << "Масса в тоннах: " << m / 1000 << endl;
}