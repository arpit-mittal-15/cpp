//LC-74

#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target){
  
  int s = 0;
  int e = (rows*cols) - 1;

  while(s<=e){
    int mid = s + (e-s)/2;

    if(arr[mid/cols][mid%cols] == target){
      return 1;
    }
    else if(arr[mid/cols][mid%cols] > target){
      e = mid - 1;
    }
    else{
      s = mid + 1;
    }

  }

    return 0;
}

int main(){
  int arr[4][4];
  int rows =4;
  int cols = 4;

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

  int target = 0;

  cout << endl;
  cout << "Give the target" << endl;

  cin >> target;

  cout << binarySearch(arr, rows, cols, target);
}