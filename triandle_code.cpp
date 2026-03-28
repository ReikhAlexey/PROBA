#include <iostream>
#include <cmath>
#include <windows.h>  // для SetConsoleOutputCP 
#include <clocale>    // для setlocale

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double a, b, c;
    cout << "Введите стороны треугольника (a b c): ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: треугольник с такими сторонами не существует!" << endl;
        return 1; 
    }

    double perimeter = a + b + c;
    cout << "Периметр: " << perimeter << endl;

    double semi = perimeter / 2.0;
    cout << "Полупериметр: p = " << semi << endl;

    double area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
    cout << "Площадь (кв.м): " << area << endl;

    const double eps = 1e-9; 
    bool is_isosceles = (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps);

    cout << "Равнобедренный? ";
    if (is_isosceles) {
        cout << "Да" << endl;
        if (fabs(a - b) < eps)
            cout << " (a = b)" << endl;
        else if (fabs(b - c) < eps)
            cout << " (b = c)" << endl;
        else if (fabs(a - c) < eps)
            cout << " (a = c)" << endl;
    } else {
        cout << "Нет" << endl;
    }

    return 0;
}
