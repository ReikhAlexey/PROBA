#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

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

int main() {
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
