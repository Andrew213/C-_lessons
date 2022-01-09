#include <iostream>
using namespace std;

constexpr int ROW = 4;
constexpr int COL = 6;


void ShowArray(int arr[ROW][COL]) {

	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {
			cout << arr[i][k] << " ";
		}
		cout << "\n" << endl;
	}

}


void left(int arr[ROW][COL], int step) {

	int temp = 0;

	for (int i = 0; i < step; i++) {
		for (int r = 0; r < ROW; r++) {

			temp = arr[r][0]; // первый элемент в строке

			for (int c = 0; c < COL - 1; c++) {

				arr[r][c] = arr[r][c + 1];

			}

			arr[r][COL - 1] = temp;
		}
	}

	ShowArray(arr);
}

void right(int arr[ROW][COL], int step) {

	int temp = 0;

	for (int i = 0; i < step; i++) {
		for (int r = 0; r < ROW; r++) {

			temp = arr[r][COL - 1]; // последний элемент в строке

			for (int c = COL - 1, k = 0; k < c; c--) {

				arr[r][c] = arr[r][c - 1];

				//cout << arr[r][c] << endl;

			}

			arr[r][0] = temp;
		}
	}

	ShowArray(arr);

}

void up(int arr[ROW][COL], int step) {

	int newArr[COL]{};


	for (int i = 0; i < step; i++) {
		for (int foo = 0; foo < COL; foo++) {
			newArr[foo] = arr[0][foo]; //сохраняю первую строку
		}
		for (int r = 0; r < ROW - 1; r++) {



			for (int c = 0; c < COL; c++) {
				arr[r][c] = arr[r + 1][c];
			}
		}

		for (int c = 0; c < COL; c++) {
			arr[ROW - 1][c] = newArr[c];
		}
	}

	ShowArray(arr);


}

void down(int arr[ROW][COL], int step) {

	int newArr[COL]{};


	for (int i = 0; i < step; i++) {
		for (int foo = 0; foo < COL; foo++) {
			newArr[foo] = arr[ROW - 1][foo]; //сохраняю последнюю строку
		}
		for (int r = ROW - 1, k = 0; k < r; r--) {

			for (int c = 0; c < COL; c++) {
				arr[r][c] = arr[r - 1][c];
			}
		}

		for (int c = 0; c < COL; c++) {
			arr[0][c] = newArr[c];
		}
	}

	ShowArray(arr);


}

int main()
{

	setlocale(0, "ru");

	int step;
	string position;

	int arr[ROW][COL]{
		{1,2,3,4,5,6},
		{7,8,9,10,11,12},
		{13,14,15,16,17,18},
		{19,20,21,22,23,24}
	};


	cout << "Исходный массив: " << endl;
	ShowArray(arr);


	cout << "На сколько шагов сдвинуть: ";
	cin >> step;
	cout << "Направление сдвига (up,down,left,right): ";
	cin >> position;



	if (position == "left") left(arr, step);
	if (position == "up") up(arr, step);
	if (position == "right") right(arr, step);
	if (position == "down") down(arr, step);

}

