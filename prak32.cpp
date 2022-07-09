#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int t, k, t0 = 0; cout << "Введите время исследования модели: "; cin >> t;
    cout << "Введите количество бактерий: "; cin >> k;
    while (t0 < t) {
        t0++;
        k -= k / 3;
        if (t0 % 3 == 0) k *= 2;
    }
    cout << k;
    return 0;}
