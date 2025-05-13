//LC-48

#include <iostream>
using namespace std;

void rotate(int arr[][4], int rows, int cols){
  
  for(int i=0; i<cols; i++){
    for(int j=rows-1; j>=0; j--){
      cout << arr[j][i] << " ";
    }
  }

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

  rotate(arr, rows, cols);
}