#include <iostream>
using namespace std;

constexpr int ROW = 4;
constexpr int COL = 6;

void getInfo(int arr[ROW][COL]) {

    float result = 0;
    int maxNum = 0;
    int minNum = arr[0][0];

    for (int i = 0; i < ROW; i++) {       
        for (int k = 0; k < COL; k++) {

            if (arr[i][k] > maxNum)  maxNum = arr[i][k];
           
            if (minNum > arr[i][k])  minNum = arr[i][k];
            
            result += arr[i][k];

        }
    }
        
    float average = result / (COL * ROW);

    cout << "Сумма всех чисел: " << result << endl;
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Максимальное число: " << maxNum << endl;
    cout << "Минимальоне число: " << minNum << endl;
}

int main()
{
  
    setlocale(0, "ru");

    int arr[ROW][COL]
    {
        {6,6,6,6,5,6},
        {1,8,9,10,11,12},
        {132,14,6,16,17,18},
        {0,20,21,22,23,24},
    };


    getInfo(arr);

}
