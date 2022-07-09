#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int h, m, s;
    cin >> h >> m >> s;
    cout << (double)h*30+m/2 << " град";
}