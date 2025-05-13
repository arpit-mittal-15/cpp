#include<iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

void selectionSort(int arr[], int size){
  if(size == 0 || size == 1) return;

  int min = arr[0];
  int index = 0;
  for(int i=1; i<size; i++){
    if(arr[i] < arr[index]){
      min = arr[i];
      index = i;
    }
  }
  swap(arr[0], arr[index]);

  selectionSort(arr+1, size-1);
}

int main(){

  int arr[5] = {5,3,42,6,7};

  selectionSort(arr, 5);

  print(arr, 5);

  return 0;
}