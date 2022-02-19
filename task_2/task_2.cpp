#include <iostream>
using namespace std;

// Написать игру «Быки и коровы». Программа "загадывает" четырёхзначное число и играющий
// должен угадать его. После ввода пользователем числа программа сообщает, сколько цифр числа
// угадано (быки) и сколько цифр угадано и стоит на нужном месте (коровы). После отгадывания
// числа на экран необходимо вывести количество сделанных пользователем попыток. В
// программе необходимо использовать рекурсию.

int* decomposeNum(const int hiddenNum){
    int* hiddenNumsArr = new int[4];
    
    hiddenNumsArr[0] = hiddenNum / 1000;
    hiddenNumsArr[1] = ((hiddenNum % 1000) - (hiddenNum % 100)) / 100;
    hiddenNumsArr[2] = ((hiddenNum % 100) - hiddenNum % 10) / 10;
    hiddenNumsArr[3] = hiddenNum % 10;

  
    return hiddenNumsArr;
}

void StartGame(int hiddenArr[], int tryingCount = 1){

    int tryCount = tryingCount;
    int userNum = 0;
    int bulls = 0;
    int cows = 0;

    cout << "Число было загадано."<<endl;

    cout<< "Ваш ход, введите 4-х значное число: ";
    
    cin >> userNum;

    int* userArr = decomposeNum(userNum);

    for(int i = 0; i < 4; i++){
        for(int k = 0; k<4; k++){
            if(hiddenArr[i] == userArr[k]){
                bulls++;
                if(i == k){
                    cows++;
                }
            }
        }        
    }
    
    cout<< "bulls " << bulls <<endl;
    cout<< "cows " << cows <<endl;

    if(cows == 4){
        cout << "Поздравляем, вы отгадали число!: " << userNum << endl;
        cout << "Число попыток: " << tryCount << endl;
    }else{
        tryCount++;
        cout << "Мимо, повторите снова" << endl;
        StartGame(hiddenArr, tryCount);
    }

    delete[] userArr;
    // for(int i = 0; i < 4; i++){
    //     cout<<hiddenArr[i]<< " ";     
    // }
    // cout<<endl;
    // for(int i = 0; i < 4; i++){
    //     cout<<userArr[i]<< " ";     
    // }

    // cout<<endl;
}

int main(){
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));

    int hiddenNum =  rand()%(9999-1000+1) + 1000;

    int* hiddenArr = decomposeNum(hiddenNum);
    
    StartGame(hiddenArr);

    delete[] hiddenArr;
}


