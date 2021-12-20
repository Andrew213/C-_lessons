#include <iostream>


using namespace std;

int main()
{

	setlocale(0, "ru");

	int currentSec = 0;
	int const midnightSeconds = 86400;

	cout << "Введите время в сек: ";
	cin >> currentSec;
	int difference = midnightSeconds - currentSec;
	int hours = difference / 3600;
	int minutes = difference %3600/60;
	int seconds = difference %60;
	
	cout << "До полуночи осталось: ";
	cout << hours << " " << minutes << " " << seconds << endl;
}

