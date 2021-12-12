#include <iostream>
using namespace std;

void transformMoney(double userMoney) {
    int dollars = userMoney;
    
    //cout << "Долларов: " << dollars << "Центов: " << dollars / 100;
    cout << "Долларов: " << dollars << '\n' << "Центов: " << (userMoney - dollars) * 10 << endl;

};

int main()
{

    setlocale(0, "Ru");

    double userMoney = 0;

    cout << "Введите кол-во денег: ";
    cin >> userMoney;

    transformMoney(userMoney);

}

