#include <iostream>
using namespace std;

void showInfo(int* const arr, float const size) {
	int null = 0;
	int pozitiv = 0;
	int negativ = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) null += 1;
		if (arr[i] > 0) pozitiv += 1;
		if (arr[i] < 0) negativ += 1;

	}

	cout << "Нолей в массиве: " << null << endl;
	cout << "Положительных чисел в массиве: " << pozitiv << endl;
	cout << "Отрицательных чисел в массиве: " << negativ << endl;
}

int main()
{

	setlocale(0, "ru");

	int const size = 10;
	int arr[size]{ 0,-2,123,4,-23,1,3,555 };

	showInfo(arr, size);

}

