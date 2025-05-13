#include<iostream>
using namespace std;

void print(vector<string> ans){
  for(int i=0; i<ans.size(); i++){
    cout << "[" << ans[i] << "]" << " ";
  }
}

void solve(string str, int index, vector<string>& ans){

  if(index >= str.size()){
    ans.push_back(str);
    return;
  }

  for(int i=index; i<str.size(); i++){
    swap(str[index], str[i]);
    solve(str, index+1, ans);
    swap(str[index], str[i]);
  }

  return;
}

int main(){

  string str = "abc";

  vector<string> ans;
  int index = 0;

  solve(str, index, ans);

  print(ans);

  return 0;
}