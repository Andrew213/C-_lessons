#include <iostream>

using namespace std;

int getPrice(int userKm, int costPetrol, int consumptionPer100) {

    
    return userKm * costPetrol * consumptionPer100 / 100;
}

int main()
{

    setlocale(LC_ALL, "Ru");

    string brand_1, brand_2, brand_3;

    int km = 0, consumptionPer100 = 0, costPetrol_1 = 0, costPetrol_2 = 0, costPetrol_3 = 0;
    
    cout << "Введите расстояние(км): ";
    cin >> km;
    cout << "Введите расход топлива на 100км: ";
    cin >> consumptionPer100;
    cout << "Введите первую цену на бензин: ";
    cin >> costPetrol_1;
    cout << "Введите его бренд: ";
    cin >> brand_1;
    cout << "Введите вторую цену на бензин: ";
    cin >> costPetrol_2;
    cout << "Введите его бренд: ";
    cin >> brand_2;
    cout << "Введите третью цену на бензин: ";
    cin >> costPetrol_3;
    cout << "Введите его бренд: ";
    cin >> brand_3;

    cout << "Стоимость " << brand_1 << " " << getPrice(km, costPetrol_1, consumptionPer100) << endl;
    cout << "Стоимость " << brand_2 << getPrice(km, costPetrol_2, consumptionPer100) << endl;
    cout << "Стоимость " << brand_2 << getPrice(km, costPetrol_3, consumptionPer100)<<endl;


}
