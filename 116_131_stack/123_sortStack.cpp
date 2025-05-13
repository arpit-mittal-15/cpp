#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int> &st, int element){
  if(st.empty() || st.top() < element){
    st.push(element);
    return;
  }

  int num = st.top();
  st.pop();
  insert(st, element);
  st.push(num);

  return;
}

void sortStack(stack<int> &st){
  if(st.empty()) return;

  int element = st.top();
  st.pop();
  sortStack(st);
  insert(st, element);
}

int main(){

  stack<int> st;

  st.push(1);
  st.push(2);
  st.push(5);
  st.push(4);
  st.push(5);
  st.push(5);

  cout << endl;

  sortStack(st);

  while(!st.empty()){
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  return 0;
}