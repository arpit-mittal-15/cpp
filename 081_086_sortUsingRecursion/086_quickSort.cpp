#include<iostream>
using namespace std;

void print(int arr[], int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int partition(int arr[], int s, int e){

  int pivot = arr[s];

  int count = 0;
  for(int i=s+1; i<=e; i++){
    if(arr[i] <= pivot){
      count++;
    }
  }

  swap(arr[s], arr[s+count]);

  int i=s;
  int j=e;
  while(i<s+count && j>s+count){
    if(arr[i] > arr[s+count] && arr[j] < arr[s+count]){
      swap(arr[i++], arr[j--]);
    }
    else if(arr[i] < arr[s+count]){
      i++;
    }
    else if(arr[j] > arr[s+count]){
      j--;
    }
    else{
      i++;
      j--;
    }
  }

  return s+count;
}

void quickSort(int arr[], int s, int e){
  
  if(s >= e) return;

  int p = partition(arr, s, e);

  quickSort(arr, s, p-1);
  quickSort(arr, p+1, e);
  
}

int main(){

  int arr[8] = {24,18,38,43,14,40,1,54};

  quickSort(arr, 0, 7);

  print(arr, 8);

  return 0;
}