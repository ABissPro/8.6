#include <cmath>
#include <iostream>

int main()
{
	system("chcp 1251"); // Установить кодировку
	float a, b, c;
	std::cout << "Введите размеры бруска через пробел: ";
	std::cin >> a >> b >> c;
	int countA;
	int countB;
	int countC;
	//размер кубика 5х5х5

	if (a < 5 || b < 5 || c < 5) {
		std::cout << "Из этого бруска невозможно изготовить желаемые кубики :(";
	}
	
	for (countA = 0; a >= 5; countA++) {
		a -= 5;
	}

	for (countB = 0; b >= 5; countB++) {
		b -= 5;
	}

	for (countC = 0; c >= 5; countC++) {
		c -= 5;
	}

	int count = countA * countB * countC; //общее количество кубиков из бруска
	float order = std::cbrt(count);
	order = std::floor(order);
	order = std::pow(order, 3);
	
	std::cout << "Из бруска возможно вырезать " << count << " кубиков(а);\n"
		<< "можно составить набор из " << order << " кубиков(а)";
   
}

