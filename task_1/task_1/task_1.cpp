#include <iostream>
using namespace std;

constexpr int SIZE = 4;
void initMatrix(char arr[SIZE][SIZE]);
void initMatrix(int arr[SIZE][SIZE]);
void initMatrix(double arr[SIZE][SIZE]);
//-----------------------------------
void ShowMatrix(char arr[SIZE][SIZE]);
void ShowMatrix(int arr[SIZE][SIZE]);
void ShowMatrix(double arr[SIZE][SIZE]);
//-----------------------------------
void GetMinAndMax(char arr[SIZE][SIZE]);
void GetMinAndMax(int arr[SIZE][SIZE]);
void GetMinAndMax(double arr[SIZE][SIZE]);
//-----------------------------------
void SortMatrix(char arr[SIZE][SIZE]);
void SortMatrix(int arr[SIZE][SIZE]);
void SortMatrix(double arr[SIZE][SIZE]);

// CHAR #################################

void initMatrix(char arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = (char)(rand() % 255);
		}
	}
	ShowMatrix(arr);
	cout << endl;
	GetMinAndMax(arr);
}


void ShowMatrix(char arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void GetMinAndMax(char arr[SIZE][SIZE]) {

	int maxNum = (int)arr[0][0];
	int minNum = (int)arr[0][0];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {

				int currentNum = (int)arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				cout << currentNum;
			};
		}
		cout << endl;
	}

	cout << endl;
	cout << "MAX CHAR IN DIAGONAL : " << maxNum << " - " << (char)maxNum << endl;
	cout << "MIN CHAR IN DIAGONAL : " << minNum << " - " << (char)minNum << endl;

}

// INT #################################

void initMatrix(int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = rand() % 10;
		}
	}
	ShowMatrix(arr);
	cout << endl;
	GetMinAndMax(arr);
}

void ShowMatrix(int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

void GetMinAndMax(int arr[SIZE][SIZE]) {

	int maxNum = 0;
	int minNum = arr[0][0];



	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {

				int currentNum = arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				cout << currentNum;
			};
		}
		cout << endl;
	}

	cout << endl;
	cout << "MAX NUM IN DIAGONAL : " << maxNum << endl;
	cout << "MIN NUM IN DIAGONAL : " << minNum << endl;

}


// DOUBLE #################################

void initMatrix(double arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr[i][j] = (rand() % 23 + 1) * 0.1;
		}
	}
	ShowMatrix(arr);
	cout << endl;
	GetMinAndMax(arr);
}

void ShowMatrix(double arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void GetMinAndMax(double arr[SIZE][SIZE]) {

	double maxNum = 0;
	double minNum = arr[0][0];

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {

				double currentNum = arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				cout << currentNum;
			};
		}
		cout << endl;
	}

	cout << endl;
	cout << "MAX NUM IN DIAGONAL : " << maxNum << endl;
	cout << "MIN NUM IN DIAGONAL : " << minNum << endl;

}


void QuickSort(int arr[], int size) {
	int pivot;
	for (int i = 0; i < size; i++) {
		pivot = arr[i];

		for (int j = size - 1; i <= j; j--) {
			if (arr[j] < pivot) {
				arr[i] = arr[j];
				arr[j] = pivot;

				for (int k = i + 1; k < j - 1; k++) {
					if (arr[k] > pivot) {
						arr[j] = arr[k];
						arr[k] = pivot;
					}


						QuickSort(arr, size - k);


				}

				break;
			}

		}
		break;

		cout << endl;
	}


	for (int i = 0; i < size; i++) {
		cout << arr[i];

	}
	cout << endl;

}


void FillArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 24 + 1;
	};

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	};
}

void ShowArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	};
	cout << endl;

}

void SortArr(int arr[], int size) {
	int pivot = arr[0];
	int i = size - 1;

	// 2 0 1

	ShowArr(arr, size);



	for (int i = size-1; 0 <= i; i--) {

		if (arr[i] < pivot) {
			arr[0] = arr[i];
			arr[i] = pivot;

			//ShowArr(arr, size);

			
			for (int k = 1; k < i ; k++) {
				if (arr[k] > pivot) {
					arr[i] = arr[k];
					arr[k] = pivot;
					SortArr(arr, k);
			

				}
			}

		
			SortArr(arr, i);
			
		}
	};

	ShowArr(arr, size);

}

int main()
{
	setlocale(0, "RU");
	srand(time(NULL));

	char arr_char[SIZE][SIZE]{};
	int arr_int[SIZE][SIZE]{};
	double arr_double[SIZE][SIZE]{};

	const int size = 10;
	int arrForSort[size]{ 3,0,1,8,7,2,5,4,9,6 };

	//QuickSort(arrForSort, size);
	//initMatrix(arr_int);

	int arr[20]{ 12, 10, 8, 3, 20, 4, 21, 18, 23, 1, 16, 22, 22, 10, 13, 2, 5, 11, 22, 7 };
	//int arr[10]{ 3, 0, 1, 8, 7, 2, 5, 4, 9, 6,};
		SortArr(arr, 20);
}

