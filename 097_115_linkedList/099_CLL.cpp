#include<iostream>
using namespace std;

class Node{

  public:
    int data;
    Node* next;

    Node(int d){
      this->data = d;
      this->next = NULL;
    }

    ~Node(){
      int value = this->data;
      if(next != NULL){
        delete next;
        next = NULL;
      }
      cout << "memory cleared for value " << value << endl;
    }
};

void insertNode(Node* &tail, int element, int d){
  if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
  }
  else{
    //non empty list
    //assuming that the element is present

    Node* curr = tail;

    while(curr->data != element){
      curr = curr->next;
    }

    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void deleteNode(Node* &tail, int d){
  if(tail == NULL){
    cout << "List is empty" << endl;
    return;
  }
  else{
    //non-empty
    //assuming the value is present

    Node* prev = tail;
    Node* curr = prev->next;

    while(curr->data != d){
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;
    if(tail == curr){
      if(curr == prev){
        tail = NULL;
      }
      else{
        tail = prev;
      }
    }
    curr->next = NULL;
    delete curr;
  }
}

void print(Node* &tail){
  Node* temp = tail;

  if(tail == NULL){
    cout << "List is empty" << endl;
    return;
  }
  do{
    cout << tail->data << " ";
    tail = tail->next;
  }
  while(tail != temp);
  cout << endl;
  
}



int main(){

  Node* tail = NULL;

  insertNode(tail, 5, 3);
  // insertNode(tail, 3, 5);
  // insertNode(tail, 5, 4);
  // insertNode(tail, 4, 9);
  // insertNode(tail, 9, 10);
  // insertNode(tail, 10, 11);
  // insertNode(tail, 11, 12);
  print(tail);

  deleteNode(tail, 3);
  print(tail);
  
  return 0;
}