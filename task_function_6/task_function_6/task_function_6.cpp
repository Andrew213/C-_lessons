#include <iostream>
using namespace std;

bool isLeapYear(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		return true;
	};

	return false;
}

int getDifference(int const d1, int const m1, int const y1, int const d2, int const m2, int const y2) {

	int const COL = 7; int const ROW = 2;
	// массив с количеством дней в месяце (кроме февраля)
	// строка первая - месяцы с 31 днем, вторая строка - месяцы с 30 днями
	int const daysAtMonths[ROW][COL]{
		{ 1,3,5,7,8,10,12 },
		{ 4,6,9,11 }
	};

	int diffYears = 0;

	if (y2 > y1) {

		//переменные для присвоения общего количства дней в ПОЛНЫХ месяцах
		int daysAtFullMonth_y1 = 0, daysAtFullMonth_y2 = 0;

		//переменная с полными месяцами в году который больше (исключая сам год)
		int fullMonths_m2 = 0 + m2 - 1;

		//=================================================================
		//Нахожу количество пройденных дней в первом месяце первой даты

		int daysAtThisMonth = 0;

		for (int i = 0; i < ROW; i++) {
			for (int k = 0; k < COL; k++) {
				if (daysAtMonths[i][k] == m1) {
					if (i == 0) daysAtThisMonth = 31 - d1;
					if (i == 1) daysAtThisMonth = 30 - d1;
				}
			}
		}

		if (m1 == 2) {
			isLeapYear(y1) ? daysAtThisMonth = 29 - d1 : daysAtThisMonth = 28 - d1;
		}

		//=================================================================
		//Нахожу сумму всех дней ПОЛНЫХ месяцев в первой дате

		for (int i = 12; i > m1; --i) {


			for (int k = 0; k < ROW; k++) {
				for (int j = 0; j < COL; j++) {

					if (k == 0) if (i == daysAtMonths[k][j]) daysAtFullMonth_y1 += 31;

					if (k == 1) if (i == daysAtMonths[k][j]) daysAtFullMonth_y1 += 30;

				}
			}

			if (i == 2) isLeapYear(y1) ? daysAtFullMonth_y1 += 29 : daysAtFullMonth_y1 += 28;
		}


		//=================================================================
		//Нахожу сумму всех дней ПОЛНЫХ месяцев во второй дате

		for (int i = 1; i <= fullMonths_m2; i++) {

			for (int k = 0; k < ROW; k++) {
				for (int j = 0; j < COL; j++) {

					if (k == 0) if (i == daysAtMonths[k][j]) daysAtFullMonth_y2 += 31;

					if (k == 1) if (i == daysAtMonths[k][j]) daysAtFullMonth_y2 += 30;

				}
			}

			if (i == 2) {
				isLeapYear(y2) ? daysAtFullMonth_y2 += 29 : daysAtFullMonth_y2 += 28;
			}
		}

		//=================================================================
		//Нахожу сумму дней во всех годах, которые находятся в промежутке между первым годом и вторым (исключая данные года)

		for (int i = y2 - 1; i > y1; --i) {
			isLeapYear(i) ? diffYears += 366 : diffYears += 365;
		}

		//=================================================================
		//Складываю все параметры

		int totalDiff = diffYears + daysAtFullMonth_y1 + daysAtFullMonth_y2 + daysAtThisMonth + d2;

		return totalDiff;

	}

	//Далее идет просто случай в обратном порядке

	else if (y1 > y2) {
		int daysAtFullMonth_y1 = 0, daysAtFullMonth_y2 = 0;
		int fullMonths_m1 = 0 + m1 - 1;

		int daysAtThisMonth = 0;

		for (int i = 0; i < ROW; i++) {
			for (int k = 0; k < COL; k++) {
				if (daysAtMonths[i][k] == m2) {
					if (i == 0) daysAtThisMonth = 31 - d2;
					if (i == 1) daysAtThisMonth = 30 - d2;
				}
			}
		}

		if (m2 == 2) {
			isLeapYear(y2) ? daysAtThisMonth = 29 - d2 : daysAtThisMonth = 28 - d2;
		}

		for (int i = 12; i > m2; --i) {


			for (int k = 0; k < ROW; k++) {
				for (int j = 0; j < COL; j++) {

					if (k == 0) if (i == daysAtMonths[k][j]) daysAtFullMonth_y2 += 31;

					if (k == 1) if (i == daysAtMonths[k][j]) daysAtFullMonth_y2 += 30;

				}
			}

			if (i == 2) isLeapYear(y2) ? daysAtFullMonth_y2 += 29 : daysAtFullMonth_y2 += 28;
		}

		for (int i = 1; i <= fullMonths_m1; i++) {

			for (int k = 0; k < ROW; k++) {
				for (int j = 0; j < COL; j++) {

					if (k == 0) if (i == daysAtMonths[k][j]) daysAtFullMonth_y1 += 31;

					if (k == 1) if (i == daysAtMonths[k][j]) daysAtFullMonth_y1 += 30;

				}
			}

			if (i == 2) {
				isLeapYear(y1) ? daysAtFullMonth_y1 += 29 : daysAtFullMonth_y1 += 28;
			}
		}

		for (int i = y1 - 1; i > y2; --i) {
			isLeapYear(i) ? diffYears += 366 : diffYears += 365;
		}

		int totalDiff = diffYears + daysAtFullMonth_y1 + daysAtFullMonth_y2 + daysAtThisMonth + d1;

		return totalDiff;

	}

	//cout << totalDiff << endl;

}

int main()
{
	setlocale(0, "ru");


	int dayFirst = 0;
	int monthFirst = 0;
	int yearFirst = 0;
	int daySecond = 0;
	int monthSecond = 0;
	int yearSecond = 0;
	cout << "Введите день первой даты: ";
	cin >> dayFirst;
	cout << "Введите месяц первой даты: ";
	cin >> monthFirst;
	cout << "Введите год первой даты: ";
	cin >> yearFirst;
	cout << "Введите день второй даты: ";
	cin >> daySecond;
	cout << "Введите месяц второй даты: ";
	cin >> monthSecond;
	cout << "Введите год второй даты: ";
	cin >> yearSecond;

	//не стал делать случай, если год будет одинаковый;

	cout << "Разница в днях составляет: "
		<< getDifference(dayFirst, monthFirst, yearFirst, daySecond, monthSecond, yearSecond) << endl;

}
