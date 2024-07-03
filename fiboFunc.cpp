#include <iostream>
using namespace std;

int fibo(int n){
  if(n == 1 || n == 0) return n;

  int ans = fibo(n-1) + fibo(n-2);

  return ans;
}

int main(){
  int n;
  cin >> n;

  int ans = fibo(n-1);

  cout << ans << " " << endl;
}