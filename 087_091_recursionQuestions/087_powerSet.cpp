#include<iostream>
using namespace std;

void print(vector<vector<int>> ans){
  for(int i=0; i<ans.size(); i++){
    cout << "[";
    for(int j=0; j<ans[i].size(); j++){
      cout << ans[i][j];
      if(j == ans[i].size()-1) continue;
      else cout << " ";
    }
    cout << "] ";
  }
}

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){

  if(index >= nums.size()){
    ans.push_back(output);
    return;
  }

  solve(nums, output, index+1, ans);

  int element = nums[index];
  output.push_back(element);
  solve(nums, output, index+1, ans);

  return;
}

int main(){

  vector<int> nums = {1,2,3};

  vector<vector<int>> ans;
  vector<int> output;
  int index = 0;

  solve(nums, output, index, ans);

  print(ans);

  return 0;
}