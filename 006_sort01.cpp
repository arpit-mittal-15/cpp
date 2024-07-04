#include <iostream>
using namespace std;

int main(){
  int arr[8] = {1,1,0,0,0,0,1,0};
  int size = 8;

  int i=0;
  int j= size-1;

  while(i<j){
    if(arr[i] == 0){
      i++;
    }
    if(arr[j] == 1){
      j--;
    }
    if(arr[i] == 1 && arr[j] == 0){
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  }

  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}