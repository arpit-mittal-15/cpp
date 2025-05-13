#include<iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

void bubbleSort(int arr[], int size){
  if(size == 0 || size == 1) return;

  for(int i=0; i<size-1; i++){
    if(arr[i] > arr[i+1]){
      swap(arr[i], arr[i+1]);
    }
  }

  bubbleSort(arr, size-1);
}

int main(){

  int arr[5] = {3,5,42,6,7};

  bubbleSort(arr, 5);

  print(arr, 5);

  return 0;
}