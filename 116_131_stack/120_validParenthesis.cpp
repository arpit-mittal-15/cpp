#include<iostream>
#include<stack>
using namespace std;

bool match(char top, char ch){
  if((ch == ']' && top == '[') || (ch == '}' && top == '{') || (ch == ')' && top == '(')){
    return true;
  }
  else return false;
}

bool checkValid(string str){
  stack<char> s;
  for(int i=0; i<str.length(); i++){
    char ch = str[i];

    if((ch == '(') || (ch == '{') || (ch == '[')){
      s.push(ch);
    }
    else{
      if(s.empty()) return false;
      else{
        if(match(s.top(), ch)){
          s.pop();
        }
        else return false;
      }
    }
  }
  if(s.empty()) return true;
  else return false;
}

int main(){

  string str = "[({})({})()]";

  if(checkValid(str)){
    cout << "valid string" << endl;
  }
  else{
    cout << "not valid";
  }

  return 0;
}