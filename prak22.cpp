#include <iostream>
using namespace std;
char color(int x1, int y1);
int main()
{
    setlocale(LC_ALL, "rus");
    int x1, y1, x2, y2;
    cout << "Введите координаты первой клетки: "; cin >> x1 >> y1;
    cout << "Введите координаты второй клктки: "; cin >> x2 >> y2;
    if (x1 > 0 && x1 < 9 && x2 > 0 && x2 < 9 && y1 > 0 && y1 < 9 && y2 > 0 && y2 < 9)
    {
        char col1 = color(x1, y1), col2 = color(x2, y2);
        if (col1 == col2) cout << "Да";
        else cout << "Нет";
    }
        else cout << "Неверно заданы координаты!";
    return 0;}

char color(int x1, int y1) {
    bool x = x1 % 2, y = y1 % 2;
    if ((x && y) || (!x && !y)) return 'w';
    else return 'b';
}