#include <iostream>
#include <vector>
using namespace std;
int main(){
    setlocale(LC_ALL, "rus");
    int n, i = 4; vector <double> v{ 0, 0, 0, 1.5 };
    cin >> n;
    if (n < 0) cout << "Неверный ввод!";
    else {
        while (i <= n) {
            v.push_back((i - 1.) / (i * i + 1.) * v[i - 1] - v[i - 2] + v[i - 3]);
            i++;
        }
        cout << v[n];
    }
    return 0;}