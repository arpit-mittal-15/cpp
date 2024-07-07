#include <iostream>
#include <array>
using namespace std;

int main(){
  array<int,5> a = {1,2,3,4,5};

  cout << a.size() << endl;
  cout << a.at(3) << endl;
  cout << a.empty() << endl;
  cout << a.front() << endl;
  cout << a.back() << endl;
}