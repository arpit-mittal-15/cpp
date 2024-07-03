#include <iostream>
using namespace std;

int power(int x, int n){
  int ans = 1;
  for(int i=0; i<n; i++){
    ans = ans * x;
  }
  return ans;
}

int main(){
  int x;
  cout << "Enter number: ";
  cin >> x;

  int n;
  cout << "Enter power: ";
  cin >> n;

  int ans = power(x, n);

  cout << "Answer is: " << ans << endl;
}