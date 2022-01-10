#include <iostream>

using namespace std;



int main()
{

	setlocale(0, "RU");

	int const ROW = 1;
	int const COL = 3;
	int arr[ROW][COL]{};
	int userNum = 0;
	cout << "Введите любое число: ";
	cin >> userNum;

	arr[0][0] = userNum;
	arr[0][1] = userNum * 2;
	arr[0][2] = arr[0][1] * 2;


	for (int i = 0; i < ROW; i++) {
		for (int k = 0; k < COL; k++) {

			
			cout << arr[i][k] << endl;

		}
	}


 }

