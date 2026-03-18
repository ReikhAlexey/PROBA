#include <iostream>
#include <cmath>
using namespace std;

void parm() {
    system("chcp 65001");
    double shir, dlin;
    cout << "Введите ширину прямоугольника: ";
    cin >> shir;
    cout << "Введите длину прямоугольника: ";
    cin >> dlin;

    if (shir <= 0 || dlin <= 0) {
        cout << "Ошибка ввода" << endl;
        return;
    }

    double plos = shir * dlin;
    double perim = 2 * (shir + dlin);
    double diagonal = sqrt(pow(shir,2) + pow(dlin, 2));

    cout << "Результаты:" << endl;
    cout << "Площадь прямоугольника: " << plos << endl;
    cout << "Периметр прямоугольника: " << perim << endl;
    cout << "Длина диагонали: " << diagonal << endl;
}

int main() {
    parm();
    return 0;
}