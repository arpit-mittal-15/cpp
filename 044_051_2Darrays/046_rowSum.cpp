#include <iostream>
using namespace std;

void rowSum(int arr[][4], int rows, int cols){
  int max = -1;
  int idx = -1;
  for(int i=0; i<rows; i++){
    int sum = 0;
    for(int j=0; j<cols; j++){
      sum += arr[i][j];
    }
    if(max < sum) max = sum; idx = i;
    cout << "Sum of row " << i << " is " << sum << endl;
  }

  cout << endl << "The max sum is " << max << " at index " << idx << endl;
}

int main(){
  int arr[3][4];
  int rows = 3;
  int cols = 4;

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

  rowSum(arr, rows, cols);
}