#include <iostream>
using namespace std;

int main(){
  int arr[6] = {64,25,12,22,11,35};
  int size = 6;

  for(int i=0; i<size-1; i++){
    int index = i;
    for(int j=i; j<size; j++){
      if(arr[index] > arr[j]){
        index = j;
      }
    }
    if(index != i){
      swap(arr[i], arr[index]);
    }
  }

  for(int i=0; i<size; i++){
    cout<< arr[i] << " ";
  }
}