#include <iostream>

using namespace std;

int main()
{

    setlocale(0, "Ru");
    int seconds = 0, minutes = 0, hours = 0;

    cout << "Введите время в секундах: ";
    cin >> seconds;
    hours = seconds / 3600;
    minutes = (seconds / 60) - (hours * 60);
    seconds = seconds % 60;

    cout << "Часов: " << hours << "\n" << "Минут: " << minutes << "\n" << "Секунд: " << seconds;

}

