#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int binaryForm = 0;
  int multiple = 1;

  while(n!=0){
    int rem = n%2;
    int bin = rem * multiple;
    binaryForm += bin;
    multiple *= 10;
    n = n/2;
  }
  cout << binaryForm << endl;
}