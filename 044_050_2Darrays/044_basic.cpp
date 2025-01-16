#include <iostream>
using namespace std;

int main(){
  int arr[3][4];
  //hardcoded
  // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  // int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int rows = 3;
  int cols = 4;

  //taking input
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin >> arr[i][j];
    }
  }

  //printing array
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}