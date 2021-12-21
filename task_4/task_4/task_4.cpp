#include <iostream>

using namespace std;



int main()
{
    setlocale(0, "Ru");

    int const maxFuel = 300;
    int stopAtoB, stopBtoC, rate, carrying;

    cout << "Введите вес груза: ";
    cin >> carrying;

    cout << "Расстояние от А до В: ";
    cin >> stopAtoB;

    cout << "Расстояние от B до C: ";
    cin >> stopBtoC;

    if (carrying <= 500) {
        rate = 1;
    }
    else if (carrying <= 1000) {
        rate = 4;
    }
    else if (carrying <= 1500) {
        rate = 7;
    }
    else if (carrying <= 2000) {
        rate = 9;
    }
    else if (carrying > 2000) {
        rate = 0;
        cout << "Максимально допустимый груз превышен." << endl;
    }

    int spentAtoB = rate * stopAtoB;
    int spentBtoC = rate * stopBtoC;


    if (carrying != 0 && maxFuel < spentAtoB) {
        cout << "Самолет не долетит до точки B" << endl;
    }
    else {
        int remaining = maxFuel - spentAtoB;
        int refueling = maxFuel - remaining;
        cout << "Вы успешно долетели до точки B" << endl;
        cout << "Топлива осталось: " << remaining << endl;
        cout << "дозаправка на: " << refueling << endl;

        if (carrying != 0 && maxFuel < spentBtoC) {
            cout << "Самолет не долетит до точки C" << endl;
        }
        else {
            cout << "Вы успешно долетели до точки C" << endl;
        }

    }

    

 

}
