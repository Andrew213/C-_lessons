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

void SortMatrix(char arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool flag = true;
    for (int j = 0; j < size - (i + 1); j++) { 
       if (arr[j] > arr[j + 1]) {
        flag = false;
        swap (arr[j], arr[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }

cout<<"Отсортированная диагональ ";

  for(int i = 0; i<SIZE;i++){
	  cout<<arr[i]<<" ";
  }
  cout << endl;

}

void GetMinAndMax(char arr[SIZE][SIZE]) {


	int maxNum = 0;
	int minNum = arr[0][0];
	char diagonalArr[SIZE]{};

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {
				diagonalArr[i] = arr[i][j];
				int currentNum = arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				
			};
		}
	}

	cout << endl;
	cout << "MAX CHAR IN DIAGONAL : " << (char)maxNum << endl;
	cout << "MIN CHAR IN DIAGONAL : " << (char)minNum << endl;
	cout << endl;

	SortMatrix(diagonalArr, SIZE);

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

void SortMatrix(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool flag = true;
    for (int j = 0; j < size - (i + 1); j++) { 
       if (arr[j] > arr[j + 1]) {
        flag = false;
        swap (arr[j], arr[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }

cout<<"Отсортированная диагональ ";

  for(int i = 0; i<SIZE;i++){
	  cout<<arr[i];
  }
  cout << endl;

}

void GetMinAndMax(int arr[SIZE][SIZE]) {

	int maxNum = 0;
	int minNum = arr[0][0];
	int diagonalArr[SIZE]{};

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {
				diagonalArr[i] = arr[i][j];
				int currentNum = arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				
			};
		}
	}

	cout << endl;
	cout << "MAX NUM IN DIAGONAL : " << maxNum << endl;
	cout << "MIN NUM IN DIAGONAL : " << minNum << endl;
	cout << endl;

	SortMatrix(diagonalArr, SIZE);

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

void SortMatrix(double arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool flag = true;
    for (int j = 0; j < size - (i + 1); j++) { 
       if (arr[j] > arr[j + 1]) {
        flag = false;
        swap (arr[j], arr[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }

cout<<"Отсортированная диагональ ";

  for(int i = 0; i<SIZE;i++){
	  cout<<arr[i]<<" ";
  }
  cout << endl;

}

void GetMinAndMax(double arr[SIZE][SIZE]) {

	int maxNum = 0;
	int minNum = arr[0][0];
	double diagonalArr[SIZE]{};

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (i == j) {
				diagonalArr[i] = arr[i][j];
				int currentNum = arr[i][j];

				if (maxNum < currentNum) maxNum = currentNum;

				if (minNum > currentNum) minNum = currentNum;

				
			};
		}
	}

	cout << endl;
	cout << "MAX NUM IN DIAGONAL : " << maxNum << endl;
	cout << "MIN NUM IN DIAGONAL : " << minNum << endl;
	cout << endl;

	SortMatrix(diagonalArr, SIZE);

}

int main()
{
	setlocale(0, "RU");
	srand(time(NULL));

	char arr_char[SIZE][SIZE]{};
	int arr_int[SIZE][SIZE]{};
	double arr_double[SIZE][SIZE]{};

	initMatrix(arr_char);

}

