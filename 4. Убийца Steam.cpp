#include <cmath>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    int size;
    int speed;
    std::cout << "Укажите размер файла для скачивания: ";
    std::cin >> size;
    std::cout << "Укажите скорость вашего соединения: ";
    std::cin >> speed;
    int download = 0;

    std::cout << "Вывод:\n";
    for (int time = 1; download < size; time++) {
        download += speed;
        if (download > size) {
            download = size;
        }
        float percent = (float)download / (float)size * 100;

        std::cout << "Прошло: " << time << " сек. Скачано: " << download
            << " из " << size << " (" << (int)percent << "%)\n";
    }
}

