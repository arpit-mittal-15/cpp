#include<iostream>
using namespace std;

void sayDigits(int n){
  if(n==0) return;

  string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

  sayDigits(n/10);

  int digit = n%10;
  cout << arr[digit] << " ";
  
  return;
}

int main(){

  int n;
  cin >> n;

  sayDigits(n);

  return 0;
}