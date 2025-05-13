#include<iostream>
using namespace std;

void update(int **p){
  // p = p + 1;
  // *p = *p + 1;
  **p = **p + 1;
}

int main(){

  int i = 5;

  int *ptr = &i;
  int **ptr2 = &ptr;

  cout << "before " << i << endl;
  cout << "before " << "ptr " << ptr << endl;
  cout << "before " << "ptr2 " << ptr2 << endl;
  update(ptr2);
  cout << "after " << i << endl;
  cout << "after " << "ptr " << ptr << endl;
  cout << "after " << "ptr2 " << ptr2 << endl;




  return 0;
}