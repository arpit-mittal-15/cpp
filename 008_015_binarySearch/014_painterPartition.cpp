#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int painters, int mid){
  int painter = 1;
  int sum = 0;

  for(int i=0; i<size; i++){
    if(sum + arr[i] <= mid){
      sum += arr[i];
    }
    else{
      painter++;
      if(painter > painters || arr[i] > mid){
        return false;
      }
      sum = arr[i];
    }
  }
  return true;
}

int painterPartition(int arr[], int size, int painters){
  int ans = -1;

  int start = 0;
  int sum = 0;
  for(int i=0; i<size; i++){
    sum += arr[i];
  }
  int end = sum;

  while(start <= end){
    int mid = start + (end - start)/2;

    if(isPossible(arr, size, painters, mid)){
      ans = mid;
      end = mid-1;
    }
    else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  int arr[4] = {12,34,67,90};
  int size = 4;
  int painters = 2;

  int ans = painterPartition(arr, size, painters);

  cout << ans;
}