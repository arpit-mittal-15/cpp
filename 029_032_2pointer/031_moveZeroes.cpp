#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums){
  int i = 0;
  
  for(int j=0; j<nums.size(); j++){
    if(nums[j] != 0){
      swap(nums[i], nums[j]);
      i++;
    }
  }
}

int main(){
  vector<int> nums;

  nums.push_back(11);
  nums.push_back(1);
  nums.push_back(0);
  nums.push_back(3);
  nums.push_back(12);

  moveZeroes(nums);

  for(int i:nums){
    cout << i << " ";
  }
}