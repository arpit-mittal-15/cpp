#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int target){
  if(start > end) return false;

  int mid = start + (end-start)/2;
  if(mid == target) return true;
  else if(mid > target){
    bool ans = binarySearch(arr, start, mid-1, target);
    return ans;
  }
  else{
    bool ans = binarySearch(arr, mid+1, end, target);
    return ans;
  }
}

int main(){

  int n;
  cin >> n;

  int arr[10] = {1,2,3,4,5,6,7,8,9,10};

  bool ans = binarySearch(arr, 0, 10, n);

  if(ans) cout << "Yes it is present.";
  else cout << "It is not present.";

  return 0;
}