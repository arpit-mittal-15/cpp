#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int size){
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }cout << endl;
}

void mergeArrays(int arr[], int arrSize, int brr[], int brrSize, int ans[]){

  int size = arrSize + brrSize;

  int x=0;
  int y=0;

  int i=0;

  while(x < arrSize && y<brrSize){
    if(arr[x] < brr[y]){
      ans[i++] = arr[x++];
    }
    else{
      ans[i++] = brr[y++];
    }
  }

  while(x < arrSize){
    ans[i++] = arr[x++];
  }
  while(y < brrSize){
    ans[i++] = brr[y++];
  }

  return;
}

int main(){
  int arr[5] = {1,3,5,6,7};
  int brr[3] = {2,4,6};

  int arrSize = 5;
  int brrSize = 3;

  int ans[8] = {0};

  mergeArrays(arr, arrSize, brr, brrSize, ans);

  print(ans,8);
}