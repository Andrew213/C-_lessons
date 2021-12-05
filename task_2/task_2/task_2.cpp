

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Ru");

    //R = P / (2π)

    float const pi = 3.14;
    int circuit;

    cout << "Введите длину окружности: " << flush;

    if (!(cin >> circuit) || (cin.peek() != '\n')) {
        cout << "Ошибка";

    }
    else {

        int const rad = circuit / (2 * pi);
        int const square = pi * pow(rad,2);

        cout << "Площадь окружности: " << square;
    }

}

