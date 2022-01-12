#include <iostream>
using namespace std;

int getSum(int a, int b) {

	int sum = 0;

	if (a > b) {
		int difference = a - b;

		for (int i = a - 1; i > b; --i) {
			sum += i;
		}

	}
	else if (b > a) {
		int difference = b - a;

		for (int i = b - 1; i > a; --i) {
			sum += i;
		}
	}
	else {
		cout << "Числа равны " << endl;
	}


	return sum;
}


int main()
{

	setlocale(0, "ru");

	int a = 0, b = 0;


	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "\nСумма чисел диапазона: " << getSum(a, b) << endl;
}
