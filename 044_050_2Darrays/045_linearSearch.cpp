#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int key, int rows, int cols){
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      if(arr[i][j] == key){
        return 1;
      }
    }
  }
  return 0;
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

  int key;

  cout << "Enter the key: ";
  cin >> key;

  if(isPresent(arr, key, rows, cols)){
    cout << "The number is present" << endl; 
  }
  else{
    cout << "The number is not present" << endl;
  }
}