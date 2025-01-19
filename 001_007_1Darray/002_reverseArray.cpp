#include <iostream>
using namespace std;

void reverse(int arr[], int size){
  for(int i=0, j=size-1; i<j; i++,j--){
    swap(arr[i], arr[j]);
  }
  return;
}

int main(){
  int arr[9] = {1,2,3,4,5,6,8,9,10};

  reverse(arr, 9);

  for(int i=0; i<9; i++){
    cout<< arr[i] << " ";
  }
}