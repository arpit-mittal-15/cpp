#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
  for(int i=0; i<size; i++){
    if(arr[i] == key){
      return 1;
    }
  }
  return 0;
}

int main(){

  int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

  cout << "Enter the element to search for: ";
  int key;
  cin >> key;

  //whether key is present in arr or not

  bool isPresent = search(arr, 10, key);

  if(isPresent) cout<< "The element is present in the array" << endl;
  else cout << "The element is not present in the array" << endl;
}