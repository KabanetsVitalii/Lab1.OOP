#include <iostream>
#include <cmath>
#include <windows.h>
struct LinearEquation {
    double first;  // Коефіцієнт A
    double second; // Коефіцієнт B
    bool Init(double a, double b) {
        if (a == 0) {
            std::cout << "Помилка: Коефіцієнт A не може дорівнювати нулю!\n";
            return false;
        }
        first = a;
        second = b;
        return true;
    }
    void Read() {dfeferfe
        double a, b;
        do {
            std::cout << "Введіть коефіцієнт A (A != 0): ";
            std::cin >> a;
            std::cout << "Введіть коефіцієнт B: ";
            std::cin >> b;
        } while (!Init(a, b));
    }
    void Display() const {
        std::cout << "Рівняння: y = " << first << "x ";
        if (second >= 0)
            std::cout << "+ " << second;
        else
            std::cout << "- " << std::abs(second);
        std::cout << "\n";
    }
    bool root(double& x) const {
        if (second == 0) {
            std::cout << "Помилка:Коефіцієнт B дорівнює 0\n";
            return false;
        }
        x = -second / first;
        return true;
    }
};
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    LinearEquation eq;
    std::cout << "Введення даних \n";
    eq.Read();

    std::cout << "Інформація про рівняння\n";
    eq.Display();

    std::cout << "Обчислення кореня\n";
    double x;
    if (eq.root(x)) {
        std::cout << "Корінь рівняння x = " << x << "\n";
    }

    return 0;
}