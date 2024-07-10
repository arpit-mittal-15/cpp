#include <iostream>
using namespace std;

void removeSub(string& s, string& sub){
  while(s.length() != 0 && s.find(sub) < s.length()){
    s.erase(s.find(sub), sub.length());
  }
}

int main(){
  string s = "daabcbaabcbc";
  string sub = "abc";

  removeSub(s, sub);

  cout << s;
}