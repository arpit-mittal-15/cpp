#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st, int element){
  if(st.empty()){
    st.push(element);
    return;
  }

  int num = st.top();
  st.pop();
  solve(st, element);
  st.push(num);

  return;
}

void insertAtBottom(stack<int> &st, int element){
  solve(st, element);
}

int main(){

  stack<int> st;

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  st.push(5);

  cout << endl;

  insertAtBottom(st, 6);

  while(!st.empty()){
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  return 0;
}