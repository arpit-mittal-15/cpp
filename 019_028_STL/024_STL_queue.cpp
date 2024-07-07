#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<string> q;

  q.push("First");
  q.push("Second");
  q.push("Third");

  cout << q.front() << endl;
  q.pop();
  cout << q.front() << endl;

  cout << "Size: " << q.size() << endl;
}