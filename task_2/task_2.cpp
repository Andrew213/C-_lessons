#include <iostream>
using namespace std;
constexpr int SIZE = 10;

void FillArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 50 + 1;
    }
}

void ShowArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i]<<" ";
    }

    cout<<endl;
}

void findMaxInArr (int arr[], int size){
    int maxNum = arr[0];

    for(int i = 0; i < size; i++){
        if(maxNum < arr[i]) maxNum = arr[i];
    }
    cout<<"Max num at Arr One: "<<maxNum<<endl;
}

//##################################

void FillArr(int arr[SIZE][SIZE], int size){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            arr[i][k] = rand() % 50 + 1;
        }
    }
}

void ShowArr(int arr[SIZE][SIZE], int size){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            cout<<arr[i][k]<<" ";
        }
    cout<<endl;
    }

}

void findMaxInArr (int arr[SIZE][SIZE], int size){
    int maxNum = arr[0][0];
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            if(maxNum < arr[i][k]) maxNum = arr[i][k];
        }
    }
    cout<<"Max num at Arr One: "<<maxNum<<endl;
}

//##################################

void FillArr(int arr[SIZE][SIZE][SIZE], int size){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            for(int j = 0; j < size; j++){
            arr[i][k][j] = rand() % 150 + 1;
            }
        }
    }
}

void ShowArr(int arr[SIZE][SIZE][SIZE], int size){
    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            for(int j = 0; j < size; j++){
                cout<<arr[i][k][j]<<" ";
            }
        }
    cout<<endl;
    }

}

void findMaxInArr (int arr[SIZE][SIZE][SIZE], int size){
    int maxNum = arr[0][0][0];

    cout<<endl;

    for(int i = 0; i < size; i++){
        for(int k = 0; k < size; k++){
            for(int j = 0; j < size; j++){
             if(maxNum < arr[i][k][j]) maxNum = arr[i][k][j];
            }
        }
    }
    cout<<"Max num at Arr One: "<<maxNum<<endl;
}

//##################################
int findMax (int a, int b){
    int maxNum=0;
    a > b ? maxNum = a : maxNum = b;   
          
    return maxNum;
}

int findMax (int a, int b, int c){
    int maxNum=0;
    int k = findMax(b,c);
    a >  k ? maxNum = a : maxNum = k;   

    return maxNum;
}


int main(){

    srand(time(NULL));

    int arr_One[SIZE]{};
    int arr_Two[SIZE][SIZE]{{},{}};
    int arr_Three[SIZE][SIZE][SIZE]{{},{},{}};

    // FillArr(arr_Three, SIZE);
    // ShowArr(arr_Three, SIZE);
    // findMaxInArr(arr_Three, SIZE);
    const int maxNum = findMax(2,10,22);
    cout<< maxNum<<endl;
}
