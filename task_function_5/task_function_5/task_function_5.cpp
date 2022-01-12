
#include <iostream>
using namespace std;

bool isHappyInt(double const userNum) {
	double foo = userNum / 1000;
	int firstPart = userNum / 1000;
	float secondPart = (foo - firstPart) * 1000;


	int	hundredthsFirst = firstPart / 100;
	int	tenthsFirst = (firstPart - (hundredthsFirst * 100)) / 10;
	int singleFirst = firstPart - ((firstPart / 10) * 10);
	int	hundredthsSecond = secondPart / 100;
	int	tenthsSecond = (secondPart - (hundredthsSecond * 100)) / 10;

	int bar = secondPart / 10; // из-за того, что единичные пришлось брать в float, данная перменная нужна чтобы взять две последних цифры последней половины.

	float singleSecond = secondPart - (bar * 10); //берется во float, если в int, то считается не корректно

	if (hundredthsFirst + tenthsFirst + singleFirst == hundredthsSecond + tenthsSecond + singleSecond) {
		return true;
	};

	return false;
}

int main()
{
	setlocale(0, "ru");

	double userNum = 0;
	cout << "Введите 6-ти значное число: ";
	cin >> userNum;


	isHappyInt(userNum) ? cout << "\nЧисло счастливое!" << endl : cout << "Число не является счастливым" << endl;
}


