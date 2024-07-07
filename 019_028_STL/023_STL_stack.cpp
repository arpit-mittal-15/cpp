#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<string> s;

  s.push("Arpit");
  s.push("Mittal");

  cout << s.top() << endl;
  s.pop();
  cout << s.top() << endl;

  cout << "Size: " << s.size() << endl;
  cout << "Empty: " << s.empty() << endl;

  s.push("Mittal");
  s.push("Third");

}