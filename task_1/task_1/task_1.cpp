#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "Ru");

	int time = 0, km = 0;

	cout << "Введите кол-во минут: ";
	cin >> time;
	cout << "Введите расстояние (км): ";
	cin >> km;
	cout << "Скорость составляет: " << km / (time / 60) << " км/ч";

}

