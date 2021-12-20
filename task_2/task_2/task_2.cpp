#include <iostream>


using namespace std;

int main()
{

	setlocale(0, "ru");

	int currentSec = 0;
	int const workingSeconds = 28800;

	cout << "Введите время в сек: ";
	cin >> currentSec;
	int difference = workingSeconds - currentSec;
	int hours = difference / 3600;
	int minutes = difference % 3600 / 60;
	int seconds = difference % 60;

	cout << "До конца рабочего дня осталось: ";
	cout << hours << " " << minutes << " " << seconds << endl;
}

