#include <iostream>

using namespace std;

int main() {
    double r, angle;
    const double PI = 3.141592653589793;

    cout << "Введите радиус окружности: ";
    cin >> r;

    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;

    double circumference = 2 * PI * r;
    double area = PI * r * r;
    double sector_area = (angle / 360.0) * PI * r * r;

    cout << "Длина окружности: " << circumference << endl;
    cout << "Площадь круга: " << area << endl;
    cout << "Площадь сектора: " << sector_area << endl;

    return 0;
}
