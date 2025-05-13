#include <iostream>
using namespace std;

void printSpiral(int arr[][4], int rows, int cols){
  int sr = 0;
  int sc = 1;
  int er = rows-1;
  int ec = cols-1;

  int total = rows*cols;

  int count = 0;

  while(total > count){
    for(int i=sr; i<=er; i++){
      cout << arr[sc-1][i] << " ";
      count++;
    }
    er--;
    if(total <= count) break;

    for(int i=sc; i<=ec; i++){
      cout << arr[i][er+1] << " ";
      count++;
    }
    ec--;
    if(total <= count) break;

    for(int i=er; i>=sr; i--){
      cout << arr[ec+1][i] << " ";
      count++;
    }
    sr++;
    if(total <= count) break;

    for(int i=ec; i>=sc; i--){
      cout << arr[i][sr-1] << " ";
      count++;
    }
    sc++;
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

  printSpiral(arr, rows, cols);
}