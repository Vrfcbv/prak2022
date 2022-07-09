#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x = 546, a = x / 100;
    x %= 100;
    x = x/10*100+a*10+x%10;
    cout << x;
}