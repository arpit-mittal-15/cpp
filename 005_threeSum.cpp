#include <iostream>
using namespace std;
// not working
int main(){
  int arr[5] = {1,2,3,4,5};
  int size = 5;
  int sum = 12;

  vector<vector<int> > ans;

  int i=0;
  int j=size-1;

  while(i<j){
    if(arr[i] + arr[j] < sum){
      for(int x=i+1; x<j-1; x++){
        if(arr[i] + arr[j] + arr[x] == sum){
          vector<int> temp;
          temp.push_back(arr[i]);
          temp.push_back(arr[j]);
          temp.push_back(arr[x]);
          ans.push_back(temp);
        }
      }
    }
    else{
      j--;
    }
    i++;
  }

  cout << "working";

  for(int i=0; i<ans.size(); i++){
    cout << "[";
    for(int j=0; j<3; j++){
      cout << ans[i][j] << " ";
    }
    cout << "]";
  }
}