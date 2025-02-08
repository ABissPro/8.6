#include <cmath>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    float m, t, f;
    std::cout << "Введите массу зведолёта (кг): ";
    std::cin >> m;
    std::cout << "Введите время (с): ";
    std::cin >> t;
    std::cout << "Введите силу тяги двигателя (Н): ";
    std::cin >> f;

    if (m <= 0 || t <= 0 || f <= 0) {
        std::cout << "Ошибка!!";
    }
    float a = f / m;
    float distance = (a * std::pow(t, 2)) / 2;
    std::cout << "Через " << t << " секунд(ы) звездолёт окажется в " << distance
        << " км от первоначального положения";
}

