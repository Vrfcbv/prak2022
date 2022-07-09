#include <iostream>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    int s, k = 0; cout << "Введите площадь прудов: "; cin >> s;
    vector <pair<int, int> > pr;
    for (int i = 1; i <= sqrt(s); i++)
        if (s % i == 0) { k++; pr.emplace_back(i, s/i); }
    cout << "Количество прудов: " << k << endl;
    for (int i = 0; i < pr.size(); i++) cout << pr[i].first << " " << pr[i].second << endl;
    return 0;}
