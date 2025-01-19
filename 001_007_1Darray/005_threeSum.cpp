#include <iostream>
using namespace std;
// not working
int main(){
  int arr[6] = {-4,-1,-1,0,1,2};
  int size = 6;
  int sum = 0;

  vector<vector<int> > ans;

  int i=0;
  int j=size-1;

  while(i<j){
    for(int mid=i+1; mid<j; mid++){
      if(arr[i] + arr[j] + arr[mid] == sum){
        vector<int> temp;
        temp.push_back(arr[i]);
        temp.push_back(arr[mid]);
        temp.push_back(arr[j]);
        ans.push_back(temp);
      }
    }
    i++;
  }

  for(int i=0; i<ans.size(); i++){
    cout << "[";
    for(int j=0; j<3; j++){
      cout << ans[i][j] << " ";
    }
    cout << "]";
  }
}