#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  int i=1;
  int sum = 0;
  bool prime = true;
  while(i<=n){
    cout<< i << " ";
    sum+=i;
    if(i>1 && i<n && n%i == 0){
      prime = false;
    }
    i++;
  }
  cout<< endl<<  "Sum: " << sum ;
  cout<< endl<< "Prime: " << prime;

}