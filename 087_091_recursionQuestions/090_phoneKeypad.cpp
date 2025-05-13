#include<iostream>
using namespace std;

void print(vector<string> ans){
  for(int i=0; i<ans.size(); i++){
    cout << "[" << ans[i] << "]" << " ";
  }
}

void solve(string digits, string output, int index, vector<string>& ans, string mapping[]){

  if(index >= digits.size()){
    ans.push_back(output);
    return;
  }

  int number = digits[index] - '0';

  string value = mapping[number];

  for(int i=0; i<value.length(); i++){
    output.push_back(value[i]);
    solve(digits, output, index+1, ans, mapping);
    output.pop_back();
  }

  return;
}

int main(){

  string digits = "23";

  vector<string> ans;
  string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  string output;
  int index = 0;

  solve(digits, output, index, ans, mapping);

  print(ans);

  return 0;
}