#include <iostream>
using namespace std;

int main(){
  int arr[10] = {2,1,0,2,1,0,2,0,1,1};
  int size = 10;
  
  int lo = 0;
  int mid = 0;
  int hi = size - 1;

  while(mid<=hi){
    if(arr[mid] == 0){
      swap(arr[mid], arr[lo]);
      lo++;
      mid++;
    }
    else if(arr[mid] == 1){
      mid++;
    }
    else if(arr[mid] == 2){
      swap(arr[mid], arr[hi]);
      hi--;
    }
  }

  

  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}