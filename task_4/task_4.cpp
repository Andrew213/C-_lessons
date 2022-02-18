#include <iostream>
using namespace std;

constexpr int SIZE = 10;

void SortArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool flag = true;
    for (int j = 0; j < size - (i + 1); j++) { 
       if (arr[j] > arr[j + 1]) {
        flag = false;
        swap (arr[j], arr[j + 1]);
      }
    }
    if (flag) {
      break;
    }
  }

  cout<<"Отсортированный массив ";

  for(int i = 0; i<SIZE;i++){
	  cout<<arr[i]<<" ";
  }
  cout << endl;
}



int main()
{
	setlocale(0, "RU");
    int arr[SIZE]{3,0,1,8,7,2,5,4,9,6};

	SortArr(arr, SIZE);

}