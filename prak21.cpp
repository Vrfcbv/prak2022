#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const double t = 0.0001;
    double x0, y0, r, x1, y1, x2, y2;
    cout << "Введите координаты центра окружности: "; cin >> x0 >> y0;
    cout << "Введите радиус окружности: "; cin >> r;
    cout << "Введите координаты первой точки прямой: "; cin >> x1 >> y1;
    cout << "Введите координаты второй точки прямой: "; cin >> x2 >> y2;
    double s = abs(x1 * (y2 - y0) + x2 * (y0 - y1) + x0 * (y1 - y2)),
        ab = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)),
        h = s / ab;
    if (abs(h - r) < t) cout << "Касаются";
    else if (h < r) cout << "Пересекаются";
    else cout << "Не пересекаются";
    return 0;
}
