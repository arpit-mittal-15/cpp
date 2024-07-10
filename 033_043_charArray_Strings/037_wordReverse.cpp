#include <iostream>
using namespace std;

void fullReverse(string& s){
  int si=0;
  int ei = s.size()-1;

  while(si<ei){
    swap(s[si++] , s[ei--]);
  }

  return;
}

void reverseWord(string& s, int si, int ei){
  for(;si<ei;si++,ei--){
    swap(s[si], s[ei]);
  }
  return;
}

void reverse(string& s){
  int si=0;
  int ei=0;

  for(int i=0; i<s.size(); i++){
    if(s[i] != ' '){
      ei++;
    }
    else{
      reverseWord(s, si, ei-1);
      ei++;
      si = ei;
    }
  }
  return;
}

int main(){
  string s = " the sky is blue";


  fullReverse(s);
  reverse(s);


  cout << s;
}