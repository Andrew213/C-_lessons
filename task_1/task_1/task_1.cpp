#include <iostream>
using namespace std;

int main()
{

	setlocale(0, "ru");
	int userNum = 0;
	cout << "Введите 6-ти значное число: ";
	cin >> userNum;
	int result = userNum / 100000;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;
	int foo = 0;

	
	if (result == 0 || result > 9) {
		cout << "Число не 6-ти значное" << endl;
	}
	else {
		for (int i = 0; i <= 5; ++i) {
			if (i == 0) {
				num6 = userNum % 10;
			};
			if (i == 1) {
				foo = userNum / 10;
				num2 = foo % 10;
			};

			if (i == 2) {
				foo /= 10;
				num3 = foo % 10;
			}

			if (i == 3) {
				 foo /= 10;
				 num4 = foo % 10;
			}

			if (i == 4) {
				foo /= 10;
				num5 = foo % 10;
			}

			if (i == 5) {
				foo /= 10;
				num1 = foo % 10;
			}
		}
	}


	if (num1 && num2 && num3 && num4 && num5 && num6) {
		if (num6 + num2 + num3 == num1 + num4 + num5) {
		cout << "Поздравляем! Число счастиливое! " << endl;
		}
	}

}

