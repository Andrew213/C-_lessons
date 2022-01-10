#include <iostream>
using namespace std;

constexpr int ROW = 3;
constexpr int COL = 4;

int* getSumInRows(int arr[ROW][COL]) {
	int sumInRows[ROW]{};
	int sum = 0;

	for (int i = 0; i < ROW; i++) {
		sum = 0;
		for (int k = 0; k < COL; k++) {

			sumInRows[i] = sum += arr[i][k];

		}
	}

	return sumInRows;
}

int* getSumInCols(int arr[ROW][COL]) {
	int sumInCols[COL]{};
	int sum = 0;


	for (int k = 0; k < COL; k++) {
		sum = 0;
		for (int i = 0; i < ROW; i++) {

			sumInCols[k] = sum += arr[i][k];

		}
	}


	return sumInCols;

}

void ShowArray(int arr[ROW][COL]) {

	int sumInRows = 0;
	int sumInCols = 0;

	for (int i = 0; i < ROW; i++) {

		for (int k = 0; k < COL; k++) {
			cout << arr[i][k] << " ";
		}

		cout << "| ";
		int* foo = getSumInRows(arr);
		sumInRows += foo[i];
		cout << foo[i] << "\n" << endl;


	}

	cout << "--------------\n" << endl;

	for (int i = 0; i < COL; i++) {
		int* foo = getSumInCols(arr);
		sumInCols += foo[i];
		cout << foo[i] << " ";
	}

	cout << "|" << sumInCols || sumInRows; //тут наверно надо сумму выводить строк и столбцов?

	cout << "\n" << endl;

}

int main()
{

	setlocale(0, "ru");

	int arr[ROW][COL]
	{
		{3,5,6,7},
		{12,1,1,1},
		{0,7,12,1},
	};


	ShowArray(arr);

}
