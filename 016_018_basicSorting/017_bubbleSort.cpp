#include <iostream>
using namespace std;

int main(){
  int arr[7] = {8,22,7,9,31,5,13};
  int size = 7;

  for(int i=0; i<size; i++){
    bool swapped = false;
    for(int j=0; j<size-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapped = true;
      }
    }
    if(!swapped) break;
  }

  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}