#include <iostream>
using namespace std;

void getFullWeek(int userDays) {
    int weeks = userDays / 7;
    int days = userDays % 7;
    cout << "Недель: " << weeks << "Дней: " << days;
}


int main()
{
    setlocale(0, "Ru");

    int days = 0;
    cout << "Введите кол-во дней: ";
    cin >> days;
    
    cout << "Недель: " << days/7 << "\n" << "Дней: " << days % 7;

}
