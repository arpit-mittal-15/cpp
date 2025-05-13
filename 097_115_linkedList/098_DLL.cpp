#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
      this->data = d;
      this->prev = NULL;
      this->next = NULL;
    }

    ~Node(){
      int value = this->data;
      if(next != NULL){
        delete next;
        next = NULL;
      }
      cout << "memory free for value " << value << endl;
    }
};


void print(Node* &head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node* &head, int d){
  Node* temp = new Node(d);
  temp->next = head;
  head->prev = temp;
  head = temp;
}

void insertAtTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

  if(position == 1){
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;

  int count = 1;
  while(count < position-1){
    temp = temp->next;
    count++;
  }

  if(temp->next == NULL){
    insertAtTail(tail, d);
    return;
  }

  Node* nodeToInsert = new Node(d);

  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}

void deleteNode(Node* &head, Node* &tail, int position){
  if(position == 1){
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else{
    Node* curr = head;
    Node* prev = NULL;

    int count = 1;
    while(count < position){
      prev = curr;
      curr = curr->next;
      count++;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    if(curr->next == NULL){
      tail = prev;
    }
    else{
      curr->next->prev = prev;
    }
    curr->next = NULL;
    delete curr;
  }
}

int main(){

  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;

  insertAtHead(head, 11);
  print(head);

  insertAtTail(tail, 14);
  print(head);

  deleteNode(head, tail, 3);
  print(head);
  
  return 0;
}