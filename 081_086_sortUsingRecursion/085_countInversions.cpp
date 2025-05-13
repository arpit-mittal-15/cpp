#include<iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int merge(int arr[], int s, int e){

  int ans = 0;

  int mid = s + (e-s)/2;

  int len1 = mid-s+1;
  int len2 = e-mid;

  int *first = new int[len1];
  int *second = new int[len2];

  int mainArrayIndex = s;
  for(int i=0; i<len1; i++){
    first[i] = arr[mainArrayIndex++];
  }

  mainArrayIndex = mid+1;
  for(int i=0; i<len2; i++){
    second[i] = arr[mainArrayIndex++];
  }

  int index1 = 0;
  int index2 = 0;

  mainArrayIndex = s;

  while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
      arr[mainArrayIndex++] = first[index1++];
    }
    else{
      arr[mainArrayIndex++] = second[index2++];
      ans+=(len1-index1);
    }
  }

  while(index1 < len1){
    arr[mainArrayIndex++] = first[index1++];
  }

  while (index2 < len2){
    arr[mainArrayIndex++] = second[index2++];
  }

  delete []first;
  delete []second;

  return ans;
}

int countInversions(int arr[], int s, int e){

  int res = 0;
  
  if(s >= e) return 0;

  int mid = s + (e-s)/2;

  res += countInversions(arr, s, mid) + countInversions(arr, mid+1, e);

  res += merge(arr, s, e);

  return res;
}

int main(){

  int arr[4] = {4,3,2,1};

  int ans = countInversions(arr, 0, 3);

  print(arr, 4);
  cout << endl << ans << endl;

  return 0;
}