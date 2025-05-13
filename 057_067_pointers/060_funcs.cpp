#include<iostream>
using namespace std;

void print(int *p){
  cout << p << endl;
  cout << *p << endl;
}

void update(int *p){
  p = p+1;      // only updates the address inside this block
  *p = *p + 1;  // updates the value of the variable p is pointing at
}

int getSum(int arr[], int n){
  cout << "sizeof(arr)  " << sizeof(arr) << endl;
}

int main(){

  int value = 5;
  int *p = &value;

  print(p);

  update(p);

  int arr[5] = {1,2,3,4,5};
  int ans = getSum(arr, 5);
  cout << "size of arr outside " << sizeof(arr) << endl;

  return 0;
}