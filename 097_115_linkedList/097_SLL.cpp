#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node(int data){        //constructor
      this->data = data;
      this->next = NULL;
    }

    ~Node(){               //destructor
      int value = this->data;

      if(this->next == NULL){
        delete next;
      }
      cout << "memory is free for value " << value << endl;
    }
};


void insertAtHead(Node* &head, int d){
  Node* temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node* &tail, int d){
  Node* temp = new Node(d);
  tail->next = temp;
  tail = tail->next;
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
  temp->next = nodeToInsert;
}

void deleteNode(Node* &head, Node* &tail, int position){

  if(position == 1){
    Node* temp = head;
    head = head -> next;

    temp->next = NULL;  // deleting node to free up space
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
    
    tail = prev;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main(){

  Node* node1 = new Node(10);

  // cout << node1->data << endl;

  Node* head = node1;
  Node* tail = node1;

  insertAtTail(tail, 12);
  insertAtTail(tail, 15);
  print(head);

  insertAtPosition(tail, head, 4, 22);
  print(head);

  cout << "head " << head->data << endl;
  cout << "tail " << tail->data << endl;


  print(head);
  deleteNode(head, tail, 1);
  print(head);

  cout << "head " << head->data << endl;
  cout << "tail " << tail->data << endl;

  return 0;
}