#include <iostream>

using namespace std;

int getFullTime(double userTime = 0, bool showTime = false) {
    int minutes =  userTime;
    int seconds = (userTime - minutes) * 100;
    int timeAtSeconds = minutes * 60 + seconds;

    if (showTime) {
    cout << "Время: " << minutes << " мин " << seconds << " cек " << "= " << minutes * 60 + seconds << " сек" << endl;
    }
 
    return timeAtSeconds;
}

double getFullSpeed(double meteres = 0, double userTime = 0) {
    double const kilometers =  meteres / 1000;
    double timeAtSeconds = getFullTime(userTime);
    double const kilometersPerHours = 3600 * kilometers / timeAtSeconds;

    return kilometersPerHours;
   
}

int main()
{
    setlocale(0, "Ru");

    int meters = 0;
    double time = 0;
    cout << "Вычисление скорости бега" << endl;
    cout << "Введите длину дистанции (метров): ";
    cin >> meters;
    cout << "Введите время (мин.сек): ";
    cin >> time;

    cout << "Дистанция: " << meters << " м " << endl;
    getFullTime(time,true);
    cout << "Вы бежали со скоростью: " << getFullSpeed(meters, time) << " км/ч " << endl;
}

