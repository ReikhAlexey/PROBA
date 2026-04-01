#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


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
