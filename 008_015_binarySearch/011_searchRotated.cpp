#include <iostream>
using namespace std;

int getPivot(int arr[], int size){
  int start = 0;
  int end = size -1;

  int mid = start + (end - start)/2;

  while(start < end){
    if(arr[mid] > arr[0]){
      start = mid + 1;
    }
    else{
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
}

int binarySearch(int arr[], int key, int start, int end){
  int mid = start + (end - start)/2;

  while(start <= end){
    if(arr[mid] == key){
      return mid;
    }
    else if(arr[mid] < key){
      start = mid+1;
    }
    else if(arr[mid] > key){
      end = mid - 1;
    }
    mid = start + (end - start)/2;
  }
  return -1;
}

int main(){
  int arr[6] = {21,23,1,6,10,20};
  int size = 6;

  int key = 23;

  int pivot = getPivot(arr, size);
  int index;

  if(arr[size-1] < key){
    index = binarySearch(arr, key, 0, pivot-1);
  }
  else{
    index = binarySearch(arr, key, pivot, size-1);
  }

  if(index != -1){
    cout << "The element is present at index " << index << endl;
  }
  else{
    cout << "Not found" << endl;
  }
}