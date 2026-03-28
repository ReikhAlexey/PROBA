#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


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

