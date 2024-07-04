#include <iostream>
using namespace std;

int main(){
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int sum = 5;

  // 2 POINTER SOLUTION

  int i = 0;
  int j = size-1;

  vector<vector<int> > ans;

  while(i<j){
    if(arr[i] + arr[j] == sum){
      vector<int> temp;
      temp.push_back(i);
      temp.push_back(j);
      ans.push_back(temp);
      i++;
      j--;
    }
    else if(arr[i] + arr[j] < sum){
      i++;
    }
    else{
      j--;
    }
  }

  for(int i=0; i<ans.size(); i++){
    cout << "[";
    for(int j=0; j<2; j++){
      cout << ans[i][j] << " ";
    }
    cout << "]";
  }
}