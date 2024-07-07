#include <iostream>
using namespace std;

void binarySearchStart(int arr[], int ans[], int size, int key){
  int start = 0;
  int end = size-1;

  int mid = start + (end - start)/2;

  while(start<=end){
    if(arr[mid] == key){
      ans[0] = mid;
      end = mid - 1; 
    }
    else if(arr[mid] < key){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return;
}

void binarySearchEnd(int arr[], int ans[], int size, int key){
  int start = 0;
  int end = size-1;

  int mid = start + (end - start)/2;

  while(start<=end){
    if(arr[mid] == key){
      ans[1] = mid;
      start = mid + 1; 
    }
    else if(arr[mid] < key){
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return;
}

int main(){
  int arr[5] = {1,2,3,3,5};

  int size = 5;
  int key = 3;

  int ans[2] = {-1,-1};

  binarySearchStart(arr, ans, size, key);
  binarySearchEnd(arr, ans, size, key);

  for(int i=0; i<2; i++){
    cout<< ans[i] << " ";
  }
}