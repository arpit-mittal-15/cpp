#include<iostream>
#include<stack>
using namespace std;

class Stack{
  public:
    int top;
    int *arr;
    int size;

    Stack(int size){
      this->size = size;
      arr = new int[size];
      top = -1;
    }

    void push(int element){
      if(size-top > 1){
        top++;
        arr[top] = element;
      }
      else{
        cout << "stack overflow" << endl;
      }
    }

    void pop(){
      if(top >= 0){
        top--;
      }
      else{
        cout << "Stack Underflow" << endl;
      }
    }

    int peek(){
      if(top >= 0){
        return arr[top];
      }
      else{
        cout << "Stack is empty." << endl;
        return -1;
      }
    }

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }
};

int main(){

  Stack st(5);

  st.push(22);
  st.push(44);
  st.push(46);

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  /*
  stack<int> s;

  s.push(2);
  s.push(3);

  s.pop();

  cout << s.top() << endl;

  cout << s.empty() << endl;
  */

  return 0;
}