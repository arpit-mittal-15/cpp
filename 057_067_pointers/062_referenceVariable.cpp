#include<iostream>
using namespace std;

void increment2(int &n){  // passed by value
  n = n+1;
}

void increment(int n){  // passed by value
  n = n+1;
}

int main(){

  int i=5;
  int &j = i; // reference var

  cout << i++ << endl;
  cout << j << endl;

  cout << endl << "before increment " << i <<endl;
  increment(i);
  cout << "after increment " << i << endl;   // no change bcoz passed by value

  cout << endl << "before increment " << i <<endl;
  increment2(i);
  cout << "after increment " << i << endl;

  return 0;
}