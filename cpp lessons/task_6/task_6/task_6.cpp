#include <iostream>

using namespace std;

constexpr int ROW = 5;
constexpr int COL = 10;

void ShowArray(int** arr, int const ROW, int const COL) {

	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {

			cout << arr[i][k] << " ";

		}
		cout << "\n" << endl;
	}
}


int** FillFirstArray(int** arr) {

	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {

			arr[i][k] = rand() % 50;

		}
	}

	return arr;

}

void FillSecondArray(int** arr2, int& const currentROW, int const currentCOL, const int value) {

	arr2[currentROW][currentCOL] = value;

}

void FillSecondArray(int** arr, int** arr2, int const ROW, int const COL) {

	int** firstArr = FillFirstArray(arr);


	for (int i = 0; i < ROW; i++) {
		for (int k = 0, j = 0; k < COL - 1; k = k + 2, j++) { //k - два элемента первого массива, j - элемент второго массива, передаются параметрами в функцию FillSecondArray

			int val = firstArr[i][k] + firstArr[i][k + 1];

			FillSecondArray(arr2, i, j, val);

		}
	}

	//ShowArray(arr, ROW, COL);


}

int main()
{

	setlocale(0, "Ru");

	//Пробую двумерные динамические массивы и указатели
	//эксперементы с передачей массивов в функции и их возвратом

	int** arr1 = new int* [ROW];
	int** arr2 = new int* [ROW];

	for (int i = 0; i < ROW; i++) {
		arr2[i] = new int[ROW];
	}


	for (int i = 0; i < ROW; i++) {
		arr1[i] = new int[COL];
	}


	FillSecondArray(arr1, arr2, ROW, COL);


	cout << "=========== Первый массив ===========\n" << endl;
	ShowArray(arr1, ROW, COL);

	cout << "=========== Второй массив ===========\n" << endl;
	ShowArray(arr2, ROW, ROW);


	//======================================== Очистка памяти

	for (int i = 0; i < ROW; i++) {
		delete[] arr1[i];
	}
	delete[] arr1;

	for (int i = 0; i < ROW; i++) {
		delete[] arr2[i];
	}

	delete[] arr2;

}
