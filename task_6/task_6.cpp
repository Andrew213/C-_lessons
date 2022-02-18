#include <iostream>
using namespace std;
constexpr int SIZE = 10;

void showAllGrades(int arr[]){
     for(int i = 0 ; i < SIZE; i++){
        cout<< arr[i]<<" ";
    }
}

void retakeSubj(int arr[]){
        int subjToRetake = 0;
    int newGrade = 0;
    cout<<"Введите номер предмета для пересдачи: ";
    cin>>subjToRetake;
    cout<<"Введите новую оценку: ";
    cin>>newGrade;
    arr[subjToRetake - 1] = newGrade;
}

void checkGrants(int arr[]){
    double sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += arr[i];
    }
    
    const double middleGrade = sum / SIZE;

    if(middleGrade >= 4.5){
    cout << "Степендия одобрена"<<endl;
    }else{
    cout << "Недостаточный средний балл"<<endl;
    }
}

enum menuNum { showAll = 1, retake = 2, gpa = 3 };
int main(){
    setlocale(0, "ru");

    int arr[SIZE]{};
    int choose = 0;

    for(int i = 0 ; i < SIZE; i++){
  
        if(i < 1) {
            cout<<"1. Введите оценку по Биологии: ";
        cin >> arr[i];
        };
        if(i = 1){
             cout<<"2. Введите оценку по Физике: ";
        cin >> arr[i];
             };
        if(i = 2) {
            cout<<"3. Введите оценку по Химии: ";
        cin >> arr[i];
            };
        if(i = 3) {
            cout<<"4. Введите оценку по Матеше: ";
        cin >> arr[i];
            };
        if(i = 4) {
            cout<<"5. Введите оценку по забивке кальяна: ";
        cin >> arr[i];
            };
        if(i = 5) {
            cout<<"6. Введите оценку по прыжкам с дерева: ";
        cin >> arr[i];

        };
        if(i = 6){
             cout<<"7. Введите оценку по поимке кота: ";
        cin >> arr[i];
        
        };
        if(i = 7) {
            cout<<"8. Введите оценку по игре в доту: ";
        cin >> arr[i];
       
        };
        if(i = 8) {
            cout<<"9. Введите оценку по уборке дома: ";
        cin >> arr[i];
       
        };
        if(i = 9) {
            cout<<"10. Введите оценку по оценке: ";
        cin >> arr[i];

        };
 
    }

    cout<< "Доступное меню" << "\n" << endl;
    cout << "1 - Показать все оценки" << endl;
    cout << "2 - Пересдать какой-либо предмет" << endl;
    cout << "3 - Статус стипендии" << "\n" << endl;
    cout << "Выберите действие: ";
    cin >> choose;

    switch (choose){
    case 1:
        showAllGrades(arr);
        break;
    case 2:
        retakeSubj(arr);
    case 3:
        checkGrants(arr);
    default:
        break;
    }
    
}