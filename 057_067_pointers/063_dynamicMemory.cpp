#include<iostream>
using namespace std;

int main(){

  char *ch = new char;
  int *n = new int;

  *ch = 'a';
  *n = 5;

  cout << ch << endl;
  cout << *ch << endl;
  cout << &ch << endl;

  cout << endl;

  cout << n << endl;
  cout << *n << endl;
  cout << &n << endl;

  return 0;
}