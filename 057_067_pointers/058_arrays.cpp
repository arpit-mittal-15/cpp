#include<iostream>
using namespace std;

int main(){
  int arr[10] = {2,3,5};

  cout << "The address of arr is: " << arr << endl;
  cout << "The address of arr is: " << &arr[0] << endl;
  cout << "arr[0]: " << arr[0] << endl;
  cout << "*arr " << *arr << endl;

  cout << "*arr + 1 " << *arr + 1 << endl;
  cout << "*(arr+2) " << *(arr+2) << endl;

  int temp[10] = {1,2};
  int *ptr = &temp[0];

  cout << "sizeof temp " << sizeof(temp) << endl;
  cout << "sizeof ptr " << sizeof(ptr) << endl;

  return 0;
}