// task_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Ru");

    //S = v * t + (a * t2) / 2

    int V = 0, T = 0, A = 0;


	for (int i = 1; i <= 3; ++i) {

		if (i == 1) {
		cout << "Введите скорость, V = ";
		cin >> V;
		}
		else if (i == 2) {
			cout << "Введите время, T = ";
			cin >> T;
		}
		else if (i == 3) {
			cout << "Введите ускорение, a = ";
			cin >> A;
		}
	}

	if (A && T && V) {
		int const S = V * T + (A * pow(T,2)/2);
		cout << "Скорость равна: " << S;
	}

}
