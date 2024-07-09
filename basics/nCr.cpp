#include <iostream>
using namespace std;

int factorial(int n){
  int ans = 1;
  for(int i=1; i<=n; i++){
    ans = ans * i;
  }
  return ans;
}

int nCr(int n, int r){
  return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
  int n,r;
  cin >> n;
  cin >> r;

  cout << nCr(n,r) << endl;
}