#include <cmath>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    float health, resistance, power;
    std::cout << "Введите показатели от 0 до 1 с использованием точки:\n> Очки здоровья: ";
    std::cin >> health;
    std::cout << "> Сопротивляемость магии: ";
    std::cin >> resistance;

    if (health > 1 && health <= 0 || resistance > 1 && resistance <= 0) {
        std::cout << "Ошибка!!";
    }

    while (health > 0) {
        std::cout << "Введите мощность огненного шара: ";
        std::cin >> power;
        float damage = power - resistance;
        if (power < resistance) {
            damage = std::fabs(damage);
            damage = std::floor(damage);
        }
        else {
            health -= damage;
        }
        if (health <= 0) break;
        std::cout << "С учётом сопротивляемости по орку будет нанесено: "
            << damage << ". Текущие очки жизни: " << health << "\n";
    }

    std::cout << "Орк убит!";
}
