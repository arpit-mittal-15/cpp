#include<iostream>
#include<queue>
using namespace std;

class Queue{
  int* arr;
  int front;
  int rear;
  int size;

  public:
  Queue(){
    size = 10001;
    arr = new int[size];
    front = 0;
    rear = 0;
  }

  void enqueue(int data){
    if(rear == size) cout << "Queue full";
    else{
      arr[rear] = data;
      rear++;
    }
  }

  void dequeue(){
    if(front == rear) return;
    else{
      arr[front] = -1;
      front++;
      if(front == rear){
        front = 0;
        rear = 0;
      }
    }
  }

  int front(){
    if(front == rear){
      return -1;
    }
    else{
      return arr[front];
    }
  }

  bool isEmpty(){
    if(front == rear) return true;
    else return false;
  }
};

int main(){

  // queue<int> q;

  // q.push(15);
  // q.push(10);

  // cout << "Front: " << q.front() << endl;

  // q.push(5);

  // cout << "Size of queue: " << q.size() << endl;

  // q.pop();

  // cout << "size of queue: " << q.size() << endl;

  // if(q.empty()) cout << "Queue is empty" << endl;
  // else cout << "queue is not empty";

  return 0;
}