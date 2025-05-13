#include<iostream>
using namespace std;

int factorial(int n, int m){

  int ans = 1;

  for(int i=2; i<=n; i++){
    ans = (ans*i)%m;
  }

  return ans;
}

int main(){

  int n;
  int m=1000000007;

  cin >> n;

  int ans = factorial(n,m);

  cout << "The ans is: " << ans << endl;

  return 0;
}