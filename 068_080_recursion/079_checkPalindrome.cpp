#include<iostream>
using namespace std;

bool palindrome(string str, int i, int j){
  if(i<=j) return true;

  if(str[i++] == str[j--]){
    bool ans = palindrome(str, i, j);
    return ans;
  }
  else{
    return false;
  }
}

int main(){

  string str = "abcdefedcba";

  bool ans = palindrome(str,0,str.size()-1);

  cout << ans;

  return 0;
}