#include <iostream>
using namespace std;

void printWave(int arr[][4], int rows, int cols){
  for(int i=0; i<cols; i++){
    for(int j=0; j<rows; j++){
      if(i%2==0){
        cout << arr[j][i] << " ";
      }
      else{
        cout << arr[rows-j-1][i] << " ";
      }
    }
  }
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

  printWave(arr, rows, cols);
}