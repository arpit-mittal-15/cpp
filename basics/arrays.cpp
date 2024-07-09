#include <iostream>
using namespace std;

int main(){
  int arr[50];
  fill_n(arr, 50, -1);

  // OR 

  // int arr[50] = { [0 ... 49] = -1 };

  int size = sizeof(arr)/sizeof(int);
  cout << size << endl;

  for(int i=0; i<50; i++){
    cout << arr[i] << " ";
  }
}