#include<iostream>
using namespace std;

#define PI 3.14   // macro

int r = 10;       // global var

int main(){

  int r = 5;

  cout << "area is " << PI * r * r << endl;

  return 0;
}