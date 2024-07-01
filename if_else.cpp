#include <iostream>
using namespace std;

int main(){
  char a,b;

  cout<< "Enter the value of a: ";
  cin>>a;

  if(a>0){
    cout << int(a) << endl;
  }
  else if(a<0){
    cout << a << endl;
  }
  else{
    cout<< a << endl;
  }

}