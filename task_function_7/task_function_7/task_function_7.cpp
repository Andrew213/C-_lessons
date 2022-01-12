#include <iostream>
using namespace std;

void FillArray(int* const arr, int const size) {

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50;
	}
}

float getAverage(int* const arr, float const size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}

	return sum / size;
}

int main()
{

	setlocale(0, "ru");

	int const size = 10;
	int arr[size]{};

	FillArray(arr, size);

	cout << "Среднее арифметическое равно: " << getAverage(arr, size) << endl;


}

