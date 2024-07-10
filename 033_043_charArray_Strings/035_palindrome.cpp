#include <iostream>
using namespace std;

bool checkPalindrome(char str[]){
  int i=0;
  int len=0;

  while(str[i] != '\0'){
    len++;
    i++;
  }

  int s = 0;
  int e = len-1;

  while(s<e){
    int si = int(str[s]);
    int ei = int(str[e]);

    if(si > 64 && si < 91){
      si += 32;
    }
    if(ei > 64 && ei < 91){
      ei += 32;
    }
    if((si < 97 || si > 122) && (si < 48 || si > 57)){
      s++;
    }
    else if((ei < 97 || ei > 122) && (ei < 48 || ei > 57)){
      e--;
    }
    else{
      if(si == ei){
        s++;
        e--;
      }
      else{
        return false;
      }
    }
  }
  return true;
}

int main(){
  char str[30];

  cout << "Enter a string: " << endl;
  cin >> str;

  bool palindrome = checkPalindrome(str);

  if(palindrome) cout << "The string is a palindrome" << endl;
  else cout << "Its not a palindrome";
}