#include <iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " " ;
  }
  cout << endl;
}

int main(){
  int arr[10] = {0,1,0,2,1,0,2,0,1,1};
  int size = 10;
  
  int lo = 0;
  int mid = 0;
  int hi = size - 1;

  while(mid<=hi){
    if(arr[mid] == 0){
      swap(arr[mid], arr[lo]);
      printArray(arr, size);
      lo++;
      mid++;
    }
    else if(arr[mid] == 1){
      printArray(arr, size);
      mid++;
    }
    else if(arr[mid] == 2){
      swap(arr[mid], arr[hi]);
      printArray(arr, size);
      hi--;
    }
  }


}