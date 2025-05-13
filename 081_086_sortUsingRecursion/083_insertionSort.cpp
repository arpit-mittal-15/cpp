#include<iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

void insertionSort(int arr[], int size){
  if(size == 0 || size == 1) return;

  insertionSort(arr, size-1);

  int i=size-1;

  int temp = arr[i];
  for(; i>0; i--){
    if(arr[i] < arr[i-1]){
      arr[i] = arr[i-1];
    }
    else break;
  }
  arr[i] = temp;

}

int main(){

  int arr[5] = {3,5,42,6,7};

  insertionSort(arr, 5);

  print(arr, 5);

  return 0;
}