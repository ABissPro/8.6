#include <cmath>
#include <iostream>

int main()
{
    system("chcp 1251"); // Установить кодировку
    float startAmpl;
    float stop;
    std::cout << "Введите начальную амплитуду маятника в см: ";
    std::cin >> startAmpl;
    std::cout << "Введите ту амплитуду, на которой мы считаем маятник остановившимся: ";
    std::cin >> stop;
    //по условию задачи маятник теряет 8.4% от амплитуды прошлого колебания
    int count;

    if (startAmpl <= 0 || stop < 0 || stop > startAmpl) {
        std::cout << "Ошибка!!";
    }

    for (count = 1; startAmpl >= stop; count++) {
        float diff;
        diff = startAmpl * 0.084;
        startAmpl -= diff;
        std::cout << count << " колебание; текущая амплитуда " << startAmpl << "\n";
    }

    std::cout << "Маятник произвел " << count << " колебаний перед остановкой на аплитуде " << startAmpl;


}
