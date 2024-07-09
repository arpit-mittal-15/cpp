#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;

  switch(num%2){
    case 0:
      cout<< "Even number" << endl;
      break;
    case 1:
      cout<< "Odd number" << endl;
      break;
    default:
      cout << "Number not specified" << endl;
  }
}