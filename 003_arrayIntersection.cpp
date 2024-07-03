#include <iostream>
using namespace std;

void intersect(int inter[], int arr[] , int brr[], int sizeA, int sizeB){
  int index = 0;
  for(int i=0; i<sizeA; i++){
    for(int j=0; j<sizeB; j++){
      if(arr[i] == brr[j]){
        inter[index] = arr[i];
        index++;
      }
    }
  }
  return;
}

int main(){
  int arr[4] = {1,2,3,4};
  int brr[4] = {2,4,6,8};
  int inter[10];

  intersect(inter, arr, brr, 4,4);

  for(int i=0; i<10; i++){
    cout << inter[i] << " ";
  }
}