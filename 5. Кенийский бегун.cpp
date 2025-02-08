#include <cmath>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int distance;
    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? ";
    std::cin >> distance;
    int count;
    int temp; //измеряется в секундах на километр по условию задачи
    int sum = 0;

    for (count = 1; count <= distance; count++) {
        std::cout << "Какой у тебя был темп на километре " << count << "? ";
        std::cin >> temp;
        if (temp <= 0) {
            std::cout << "Ошибка!!";
        }
        else {            
            sum += temp;
        }        
    }

    float average = (float)sum / (float)distance;
    float min = average / 60;
    min = std::floor(min);
    int sec = (int)average % 60;


    std::cout << "Твой средний темп за тренировку: " << min << " минут(ы) " << sec << " секунд(ы).";

    
}

