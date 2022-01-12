#include <iostream>
using namespace std;

int getPow(int a, int b) {
	return pow(a, b);
}

int main()
{
	setlocale(0, "ru");
	int a = 0, b = 0;

	cout << "Введите основание степени: ";
	cin >> a;
	cout << "Введите показатель степени: ";
	cin >> b;

	cout << "\nПолученное число : " << getPow(a, b) << endl;


}

