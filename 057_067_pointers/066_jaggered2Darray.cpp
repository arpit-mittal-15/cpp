#include<iostream>
using namespace std;

int main(){

  int row = 4;
  int cols[] = {3,4,3,5};

  int **arr = new int*[row];

  for(int i=0; i<row; i++){
    arr[i] = new int[cols[i]];
  }

  for(int i=0; i<row; i++){
    for(int j=0; j<cols[i]; j++){
      cin >> arr[i][j];
    }
  }

  for(int i=0; i<row; i++){
    for(int j=0; j<cols[i]; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  for(int i=0; i<row; i++){
    delete []arr[i];
  }
  delete []arr;

  return 0;
}