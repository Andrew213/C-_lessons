#include <iostream>
using namespace std;

constexpr int SIZE = 10;

void insertionSort(int arr[], int size){
    int insertNum;
    for(int i = 1; i < size; i++){
        for(int k = 0; k < i; k++){
            insertNum = arr[i];
            if(arr[k]>arr[i]){
                arr[i] = arr[k];
                arr[k] = insertNum; 
            }
        }
    }
}

void fillArr(int arr[], const int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100 + 1;
    }
}

void showArr(int arr[], const int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void divideArr(int arr[], const int size){
    int twoOfThree = size/3 + size/3;
    double sumTwoOfThree = 0;
    for(int i = 0; i < twoOfThree; i ++){
        sumTwoOfThree += arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    const double averageTwoOfThree = sumTwoOfThree / twoOfThree;

    if(averageTwoOfThree > 0){
        int insertNum;
        for(int i = 1; i < twoOfThree; i++){
            for(int k = 0; k < i; k++){
                insertNum = arr[i];
                if(arr[k]>arr[i]){
                    arr[i] = arr[k];
                    arr[k] = insertNum; 
                }
            }
        }
    }else{
        int insertNum;
        for(int i = 1; i < size/3; i++){
            for(int k = 0; k < i; k++){
                insertNum = arr[i];
                if(arr[k]>arr[i]){
                    arr[i] = arr[k];
                    arr[k] = insertNum; 
                }
            }
        }
    }
       cout<<" третья треть : ";

    int thirdOfThree = size - twoOfThree;
    //    cout<<" третья треть : " << size thirdOfThree << " " << twoOfThree;
 
    for(int i = size - thirdOfThree, k = size - 1; i < size - (thirdOfThree / 2); i++,k-- ){
            int saveNum = arr[i];
            arr[i] = arr[k];
            arr[k] = saveNum;
    }
    cout << "Среднее арифм двух трети : " << averageTwoOfThree << endl;
 }


int main(){
    int arr[11]{-3,0,-1,-8,-7,2,5,4,9,6,10};
    int foo = 10;

    divideArr(arr,11);
    showArr(arr, 11);
}