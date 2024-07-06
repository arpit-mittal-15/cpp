#include <iostream>
using namespace std;

bool isPossible(int arr[], int size, int cows, int mid){
  int cowCount = 1;
  int lastPos = arr[0];

  for(int i=0; i<size; i++){
    if(arr[i] - lastPos >= mid){
      cowCount++;
      if(cowCount == cows){
        return true;
      }
      lastPos = arr[i];
    }
  }
  return false;
}

int getDistance(int arr[], int size, int cows){

  sort(arr, arr+size);

  int ans = -1;

  int start = 0;
  int max = -1;
  int min = 0;

  for(int i=0; i<size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if(arr[i] < min){
      min = arr[i];
    }
  }

  int end = max - min;

  while(start <= end){
    int mid = start + (end - start)/2;

    if(isPossible(arr, size, cows, mid)){
      ans = mid;
      start = mid + 1;
    }
    else{
      end = mid - 1;
    }
  }
  return ans;
}

int main(){
  int arr[5] = {4,2,1,3,6};
  int size = 5;
  int cows = 2;

  int ans = getDistance(arr, size, cows);

  cout << ans;
}