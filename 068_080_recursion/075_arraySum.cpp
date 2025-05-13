#include<iostream>
using namespace std;

int getSum(int arr[], int size){
  if(size == 1) return arr[0];

  return arr[0] + getSum(arr+1, size-1);
}

int main(){

  int arr[5] = {3,5,4,2,67};

  int ans = getSum(arr, 5);
  cout << ans;

  return 0;
}