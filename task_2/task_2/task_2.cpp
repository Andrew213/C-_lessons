#include <iostream>


using namespace std;

int main()
{

	setlocale(0, "ru");

	int userNum = 0;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	cout << "Введите 4-x значное число: ";
	cin >> userNum;

	int result = userNum / 1000;
	int foo = userNum / 10;

	if (result == 0 || result > 9) {
		cout << "Число не 4-x значное"<<endl;
	}
	else {
		for (int i = 0; i <= 4; ++i) {
			if (i == 0) {
				num4 = userNum % 10;
			}
			if (i == 1){
				num3 = foo % 10;
			}
			if (i == 2) {
				 foo /= 10;
				 num2 = foo % 10;
			}
			if (i == 3) {
				foo /= 10;
				num1 = foo % 10;
			}
		}
	}

	if (num1 && num2 && num3 && num4) {
		result = num2 * 1000 + num1 * 100 + num4 * 10 + num3;

		cout << result << endl;
	}

}

