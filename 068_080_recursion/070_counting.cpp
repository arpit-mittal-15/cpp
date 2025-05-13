#include<iostream>
using namespace std;

void countingBack(int n){
  if(n == 0) return;

  cout << n << " ";
  return countingBack(n-1);
}

void counting(int n){
  if(n == 0) return;

  counting(n-1);

  cout << n << " ";
}

int main(){

  int n;
  cin >> n;

  countingBack(n);
  cout << endl;
  counting(n);

  return 0;
}