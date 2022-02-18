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