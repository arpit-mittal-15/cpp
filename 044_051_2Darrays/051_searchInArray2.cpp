//LC-240

#include <iostream>
using namespace std;

bool search(int arr[][4], int rows, int cols, int target){
  
  int rowIndex = 0;
  int colIndex = cols - 1;

  while(rowIndex < rows && colIndex >= 0){
    int element = arr[rowIndex][colIndex];

    if(element == target) return true;
    else if(element < target) rowIndex++;
    else colIndex--;
  }

  return false;
  
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

  cout << search(arr, rows, cols, target);
}