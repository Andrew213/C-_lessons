#include <iostream>


using namespace std;

int main()
{

	setlocale(0, "ru");

	int userNum = 0;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0;
	int biggest = 0;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Введите третье число: ";
	cin >> num3;
	cout << "Введите четвертое число: ";
	cin >> num4;
	cout << "Введите пятое число: ";
	cin >> num5;
	cout << "Введите шестое число: ";
	cin >> num6;
	cout << "Введите седьмое число: ";
	cin >> num7;

	for (int i = 0; i <= 7; ++i) {
		if (num1 > biggest) biggest = num1;
		if (num2 > biggest) biggest = num2;
		if (num3 > biggest) biggest = num3;
		if (num4 > biggest) biggest = num4;
		if (num5 > biggest) biggest = num5;
		if (num6 > biggest) biggest = num6;
		if (num7 > biggest) biggest = num7;
	}

	cout << biggest << endl;

}

