#include <iostream>
using namespace std;

float transformTime(float userHours, float userMinutes, float userSeconds) {
    float hoursInMinutes = userHours * 60;
    float userSecondsInMinutes = userSeconds / 60;
    
    return hoursInMinutes + userSecondsInMinutes + userMinutes;

};

int main()
{

    setlocale(0, "Ru");

    float hoursS = 0, minutesS = 0, secondsS = 0;
    float hoursE = 0, minutesE = 0, secondsE = 0;
    int const rate = 2;

    cout << "Введите начало поездки(часы): ";
    cin >> hoursS;
    cout << "Введите начало поездки(минуты): ";
    cin >> minutesS;
    cout << "Введите начало поездки(секунды): ";
    cin >> secondsS;

    cout << "Введите конец поездки(часы): ";
    cin >> hoursE;
    cout << "Введите конец поездки(минуты): ";
    cin >> minutesE;
    cout << "Введите конец поездки(секунды): ";
    cin >> secondsE;

    cout << "Стоимость поездки составляет: " << (transformTime(hoursE, minutesE, secondsE) - transformTime(hoursS, minutesS, secondsS)) * rate << endl;



}

