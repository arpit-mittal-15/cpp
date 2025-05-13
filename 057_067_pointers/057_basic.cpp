#include<iostream>
using namespace std;

int main(){
  int num = 5;
  double d = 3.5;

  int *ptr = &num;
  double *ptr2 = &d;  // type of pointer should be same as the type of variable

  int i = 5;
  int *ptr3 = 0;    // initialising a pointer with 0
  ptr3 = &i;

  cout << "num: " << num << endl;     // outputs value
  cout << "&num: " << &num << endl;   // outputs address of num
  cout << "ptr: " << ptr << endl;     // outputs address of num
  cout << "*ptr: " << *ptr << endl;   // outputs value

  cout << "Size of ptr: " << sizeof(ptr) << endl;


  cout << "before: " << num << endl;
  (*ptr)++;
  cout << "after: " << num << endl;
 

  //copying a pointer

  int *q = ptr;

  cout << q << "-" << ptr << endl;
  cout << *q << "-" << *ptr << endl;

  return 0;
}