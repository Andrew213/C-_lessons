#include <iostream>

using namespace std;

double calcProfitPerMonth(double initCount = 0, double percentsPerYear = 0) {
    double percentsPerMounth = percentsPerYear / 100 / 12;
    return initCount * percentsPerMounth;
}

int main()
{

    setlocale(0, "Ru");

    double initCount;
    double percents;
    cout << "Введите сумму денежного вклада (eur): ";
    cin >> initCount;
    cout << "Введите желаемый годовой процент: ";
    cin >> percents;

    cout << "Per month " << calcProfitPerMonth(initCount, percents) << endl;
}