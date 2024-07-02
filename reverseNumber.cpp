#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int multiple = 1;
  int ans = 0;

  while(n!=0){
    int digit = n%10;
    ans *=10;
    ans += digit;
    n/=10;
  }

  cout << ans << endl;
}