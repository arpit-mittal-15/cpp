#include <iostream>
using namespace std;

int main(){
  int arr[7] = {10,1,7,4,8,2,11};
  int size = 7;

  for(int i=1; i<size; i++){
    int temp = arr[i];

    int j=i-1;
    for(; j>=0; j--){
      if(arr[j] > temp){
        arr[j+1] = arr[j];
      }
      else{
        break;
      }
    }
    arr[j+1] = temp;
  }

  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
}