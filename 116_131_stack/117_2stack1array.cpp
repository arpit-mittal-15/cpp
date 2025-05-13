#include<iostream>
using namespace std;

class Stack{
  public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s){
      arr = new int[s];
      top1 = -1;
      top2 = s;
      this->size = s;
    }

    void push1(int element){
      if(top2 - top1 > 1){
        top1++;
        arr[top1] = element;
      }
      else{
        cout << "Stack Overflow" << endl;
      }
    }

    void push2(int element){
      if(top2 - top1 > 1){
        top2--;
        arr[top2] = element;
      }
      else{
        cout << "Stack overflow" << endl;
      }
    }

    void pop1(){
      if(top1 >= 0) top1--;
    }

    void pop2(){
      if(top2 >= 0) top2++;
    }
};

int main(){



  return 0;
}