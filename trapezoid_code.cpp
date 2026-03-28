#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d;
    std::cout << "Введите основания и боковые стороны: \n";
    std::cout << "Введите нижнее основание A: ";
    std::cin >> a;
    std::cout << "Введите верхнее основание B: ";
    std::cin >> b;
    std::cout << "Введите боковые стороны C и D: ";
    std::cin >> c >> d;

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        std::cout << "Стороны должны быть положительными\n";
        return 1;
    }

    double diff = std::abs(a - b);
    if (diff >= c + d || diff <= std::abs(c - d)) {
        std::cout << "Трапеция не существует\n";
        return 1;
    }

    double term = (diff * diff + c * c - d * d) / (2.0 * diff);
    double height = std::sqrt(c * c - term * term);

    std::cout << "Периметр: " << a + b + c + d << "\n"
              << "Средняя линия: " << (a + b) / 2 << "\n"
              << "Высота: " << height << "\n"
              << "Площадь: " << (a + b) / 2 * height << "\n";

    return 0;
}
