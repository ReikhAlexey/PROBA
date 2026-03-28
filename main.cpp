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

