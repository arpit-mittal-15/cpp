#include <iostream>
#include <map>
using namespace std;

int main(){
  map<int,string> m;

  m[1] = "A";
  m[2] = "B";
  m[13] = "M";

  m.insert({5,"E"});

  for(auto i:m){
    cout << i.first << " " << i.second << endl;
  }

  cout << "13 is present " << m.count(13) << endl;

  m.erase(13);

  for(auto i:m){
    cout << i.first << " " << i.second << endl;
  }
}