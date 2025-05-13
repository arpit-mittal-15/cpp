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

void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

Node* iteratively(Node* &head){
  Node* prev = NULL;
  Node* curr = head;

  while(curr != NULL){
    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}

void recursive1(Node* &head, Node* curr, Node* prev){
  if(curr == NULL){
    head = prev;
    return;
  }
  Node* forward = curr->next;
  recursive1(head , forward, curr);
  curr->next = prev;
}

Node* recursive2(Node* head){
  if(head == NULL || head->next == NULL) return head;

  Node* chotaHead = recursive2(head->next);
  head->next->next = head;
  head->next = NULL;
  return chotaHead;
}

int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(9);

  Node* temp = recursive2(head);

  print(temp);

  return 0;
}