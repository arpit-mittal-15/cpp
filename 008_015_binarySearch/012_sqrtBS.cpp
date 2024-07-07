#include <iostream>
using namespace std;

int binarySearch(int num){
  if(num == 0 || num == 1) return num;
  int start = 0;
  int end = num/2;

  int ans;

  int mid = start + (end - start)/2;

  while(start <= end){
    int midsq = mid * mid;
    if(midsq == num){
      return mid;
    }
    else if(midsq > num){
      end = mid -1;
    }
    else if(midsq < num){
      ans = mid;
      start = mid + 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

double morePrecision(int n, int precision, int tempSol){
  double factor = 1;
  double ans = tempSol;

  for(int i=0; i<=precision; i++){
    factor = factor/10;

    for(double j= ans; j*j<n; j+=factor){
      ans = j;
    }
  }
  return ans;
}

int main(){
  int num;
  cin >> num;

  int sqrt = binarySearch(num);

  cout << "The sqrt of " << num << " is " << morePrecision(num, 3, sqrt) << endl;
}