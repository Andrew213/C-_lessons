#include <iostream>
using namespace std;

constexpr int SIZE = 10;

void fillArr(int arr[], const int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 100 + 1;
    }
}

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

void showArr(int arr[], const int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
      int arr[SIZE]{};

        fillArr(arr,SIZE);
        showArr(arr,SIZE);
        insertionSort(arr,SIZE);
        showArr(arr,SIZE);
}