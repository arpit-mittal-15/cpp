#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v; //initialization without given size -> capacity = 0

  vector<int> v2(3,1); // initialize with capacity 3 and values = 1

  cout << v2.capacity() << endl;

  v.push_back(3);
  v.push_back(5);
  v.push_back(1);
  v.push_back(4);
  v.push_back(8);
  v.size();
  v.at(1);
  v.front();
  v.back();
  v.pop_back();
  v2.clear();

  vector<int> copy;

  for(int i=0; i<copy.size(); i++){
    copy.push_back(i);
  }

  for(int i:copy){  // not working c++11 extension error
    cout << i << " ";
  }cout<<endl;
}