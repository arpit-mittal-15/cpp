#include<iostream>
using namespace std;

void reverseString(string &str, int i, int j){
  if(i>j){
    return;
  }

  swap(str[i], str[j]);
  reverseString(str, ++i, --j);

  return;
}

int main(){

  string str = "abcde";

  reverseString(str, 0, 4);

  cout << str;

  return 0;
}