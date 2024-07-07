#include <iostream>
#include <set>
using namespace std;

int main(){
  set<int> s;

  s.insert(5);
  s.insert(5);
  s.insert(0);
  s.insert(1);
  s.insert(6);
  s.insert(5);
  s.insert(6);
  s.insert(0);
  s.insert(1);

  for(int i:s){
    cout << i << " ";
  }cout << endl;

  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for(int i:s){
    cout << i << " ";
  }cout << endl;

  cout << "1 is present or not: " << s.count(1) << endl;

  set<int>::iterator itr = s.find(5);

  cout << "Value of 5 is present at " << *itr << endl;

  for(auto it = itr; it!=s.end(); it++){
    cout << *it << " ";
  }

}