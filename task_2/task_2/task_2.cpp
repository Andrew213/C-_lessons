#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Ru");

    HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(Console, FOREGROUND_RED);
    cout << "\t\t\t\t\t"
        << "Каждый\n";

    SetConsoleTextAttribute(Console, 6);
    cout << "\t\t\t\t\t"
        << "Охотник\n";

    SetConsoleTextAttribute(Console, 14);
    cout << "\t\t\t\t\t"
        << "Желает\n";

    SetConsoleTextAttribute(Console, FOREGROUND_GREEN);
    cout << "\t\t\t\t\t"
        << "Знать \n";

    SetConsoleTextAttribute(Console, 3);
    cout << "\t\t\t\t\t"
        << "Где \n";

    SetConsoleTextAttribute(Console, 1);
    cout << "\t\t\t\t\t"
        << "Сидит \n";

    SetConsoleTextAttribute(Console, 5);
    cout << "\t\t\t\t\t"
        << "Фазан \n";

        

    cin.get();
}
