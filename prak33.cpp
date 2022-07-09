#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int a, b, k; cout << "Введите размерность прямоугольника: "; cin >> a >> b;
    while (a > 0 && b > 0) {
        if (a >= b) { k = a / b; a -= k * b; cout << k << " " << b << "*" << b << endl; }
        else { k = b / a; b -= k * a; cout << k << " " << a << "*" << a << endl;}
    }
    return 0;}
