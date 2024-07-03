#include <iostream>
using namespace std;

int maxArr(int arr[], int size){
  int max = INT_MIN;
  for(int i=0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int main(){
  int size;
  cin >> size;

  int arr[100];
  for(int i=0; i<size; i++){
    cin >> arr[i];
  }

  int max = maxArr(arr, size);

  cout << max << endl;
}