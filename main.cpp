#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


void calc_trapezoid() {
    double a, b, c, d;
    cout << "\n--- Трапеция ---\n";
    cout << "Введите нижнее основание A: ";
    cin >> a;
    cout << "Введите верхнее основание B: ";
    cin >> b;
    cout << "Введите боковые стороны C и D: ";
    cin >> c >> d;
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        cout << "Стороны должны быть положительными\n";
        return;
    }
    double diff = abs(a - b);   
    if (diff >= c + d || diff <= abs(c - d)) { 
        cout << "Трапеция не существует\n";
        return;
    }
    double term = (diff * diff + c * c - d * d) / (2.0 * diff);
    double height = sqrt(c * c - term * term);
    cout << "Периметр: " << a + b + c + d << "\n"
         << "Средняя линия: " << (a + b) / 2 << "\n"
         << "Высота: " << height << "\n"
         << "Площадь: " << (a + b) / 2 * height << "\n";
}


void calc_rectangle() {
    double shir, dlin;
    cout << "\n--- Прямоугольник ---\n";
    cout << "Введите ширину прямоугольника: ";
    cin >> shir;
    cout << "Введите длину прямоугольника: ";
    cin >> dlin;
    if (shir <= 0 || dlin <= 0) {
        cout << "Ошибка ввода\n";
        return;
    }
    double plos = shir * dlin;
    double perim = 2 * (shir + dlin);
    double diagonal = sqrt(pow(shir, 2) + pow(dlin, 2));
    cout << "Результаты:\n";
    cout << "Площадь прямоугольника: " << plos << "\n";
    cout << "Периметр прямоугольника: " << perim << "\n";
    cout << "Длина диагонали: " << diagonal << "\n";
}


void calc_triangle() {
    double a, b, c;
    cout << "\n--- Треугольник ---\n";
    cout << "Введите стороны треугольника (a b c): ";
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: треугольник с такими сторонами не существует!\n";
        return;
    }
    double perimeter = a + b + c;
    cout << "Периметр: " << perimeter << "\n";
    double semi = perimeter / 2.0;
    cout << "Полупериметр: p = " << semi << "\n";
    double area = sqrt(semi * (semi - a) * (semi - b) * (semi - c));
    cout << "Площадь (кв.м): " << area << "\n";
    const double eps = 1e-9;
    bool is_isosceles = (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps);
    cout << "Равнобедренный? ";
    if (is_isosceles) {
        cout << "Да\n";
        if (fabs(a - b) < eps) cout << " (a = b)\n";
        else if (fabs(b - c) < eps) cout << " (b = c)\n";
        else if (fabs(a - c) < eps) cout << " (a = c)\n";
    } else {
        cout << "Нет\n";
    }
}


void calc_circle() {
    double r, angle;
    const double PI = 3.141592653589793;
    cout << "\n--- Окружность ---\n";
    cout << "Введите радиус окружности: ";
    cin >> r;
    if (r < 0) {
        cout << "Ошибка: радиус не может быть отрицательным!\n";
        return;
    }
    cout << "Введите угол сектора (в градусах): ";
    cin >> angle;
    if (angle < 0) {
        cout << "Ошибка: угол не может быть отрицательным!\n";
        return;
    }
    double circumference = 2 * PI * r;
    double area = PI * r * r;
    double sector_area = (angle / 360.0) * PI * r * r;
    cout << "Результаты:\n";
    cout << "Длина окружности: " << circumference << "\n";
    cout << "Площадь круга: " << area << "\n";
    cout << "Площадь сектора: " << sector_area << "\n";
}


int main() {
    std::cout << "Проект: Геометрические фигуры" << std::endl;
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int choice = 0;

    while (true) {
        cout << "\n===============================\n";
    while (true) {
        cout << "\n===============================\n";
        cout << "Выберите геометрическую фигуру:\n";
        cout << "1 - Трапеция\n";
        cout << "2 - Прямоугольник\n";
        cout << "3 - Треугольник\n";
        cout << "4 - Окружность\n";
        cout << "0 - Выход\n";
        cout << "===============================\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Завершение работы программы.\n";
            break;
        }

        switch (choice) {
            case 1: calc_trapezoid(); break;
            case 2: calc_rectangle(); break;
            case 3: calc_triangle(); break;
            case 4: calc_circle(); break;
            default: cout << "Неверный выбор. Попробуйте снова.\n";
        }
    }
    return 0;
}

