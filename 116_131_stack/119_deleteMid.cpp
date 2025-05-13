#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &st, int count, int size){
  if(count == size/2){
    st.pop();
    return;
  }

  int num = st.top();
  st.pop();
  solve(st, count+1, size);
  st.push(num);

  return;
}

void deleteMid(stack<int> &st, int size){
  int count = 0;
  solve(st, count, size);
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

  deleteMid(st, 6);

  for(int i=0; i<5; i++){
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  return 0;
}