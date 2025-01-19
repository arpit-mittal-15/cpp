#include <iostream>
using namespace std;

void intersect(vector<int>& inter, int arr[] , int brr[], int sizeA, int sizeB){
  // int index = 0;
  // for(int i=0; i<sizeA; i++){
  //   for(int j=0; j<sizeB; j++){
  //     if(arr[i] == brr[j]){
  //       inter[index] = arr[i];
  //       index++;
  //     }
  //   }
  // }

  //2 POINTER APPROACH

  int i = 0;
  int j = 0;

  while(i<sizeA && j<sizeB){
    if(arr[i] == brr[j]){
      inter.push_back(arr[i]);
      i++;
      j++;
    }
    else if(arr[i] < brr[j]){
      i++;
    }
    else{
      j++;
    }
  }

  return;
}

int main(){
  int arr[4] = {1,2,3,4};
  int brr[4] = {2,4,6,8};
  vector<int> inter;

  intersect(inter, arr, brr, 4,4);

  for(int i=0; i<inter.size(); i++){
    cout << inter[i] << " ";
  }
}