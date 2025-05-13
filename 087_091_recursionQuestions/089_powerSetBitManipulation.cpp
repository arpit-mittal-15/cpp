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

void solve(vector<int> nums, vector<vector<int>>& ans){
  int size = nums.size();
  
  for(int i=0; i<(1<<size); i++){
    vector<int> temp;
    for(int j=0; j<size; j++){
      if(i & (1 << j)){
        temp.push_back(nums[j]);
      }
    }
    ans.push_back(temp);
  }
}

int main(){
  
  vector<int> nums = {1,2,3};

  vector<vector<int>> ans;

  solve(nums, ans);

  print(ans);

  return 0;
}