#include <iostream>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int c[12], k = 0, sum = 0; cout << "Введите 12 элементов массива: "; 
    for (int i = 0; i < 12; i++) {cin >> c[i];
    if (c[i] % 2 == 0) {sum += c[i]; k++;} }
    if (k == 0) cout << "Нет чётных элементов!";
    else cout << (double)sum/k;
    return 0;}

