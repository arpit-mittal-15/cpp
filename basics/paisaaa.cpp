#include <iostream>
using namespace std;

int main(){
  int n;
  cin>> n;

  switch(1)
  {
  case 1:
    {int hundred = n/100;
    cout << "100s: " << hundred << endl;
    n = n%100;}

  case 2:
    {int fifty = n/50;
    cout << "50s: " << fifty << endl;
    n = n%50;}

  case 3:
    {int twenty = n/20;
    cout << "20s: " << twenty << endl;
    n = n%20;}

  case 4:
    cout << "100s: " << n << endl;
    break;
  
  default:
    cout << "Enter a valid amount";
    break;
  }
}