#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){
  if(size == 0) return false;

  if(arr[0] == target){
    return true;
  }
  else{
    bool ans = linearSearch(arr+1, size-1, target);
    return ans;
  }
}

int main(){

  int n;
  cin >> n;

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  bool ans = linearSearch(arr, 10, n);

  if(ans) cout << "Yes it is present.";
  else cout << "It is not present.";

  return 0;
}