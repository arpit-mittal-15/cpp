#include<iostream>
using namespace std;

int main(){

  int arr[10] = {0};
  char ch[6] = "abcde";

  cout << arr << endl;
  cout << ch << endl;

  char temp = 'z';
  char *ptemp = &temp;

  cout << ptemp << endl;

  return 0;
}