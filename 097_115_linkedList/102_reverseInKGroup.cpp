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

void print(Node* &head){
  Node* temp = head;

  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

Node* reverseKGroup(Node* head, int k){
  if(head == NULL) return NULL;

  Node* next = NULL;
  Node* curr = head;
  Node* prev = NULL;

  int count = 0;
  while(curr != NULL && count < k){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    count++;
  }

  if(count != k){
    while(count != 0){
      next = prev->next;
      prev->next = curr;
      curr = prev;
      prev = next;
      count--;
    }
    return curr;
  }

  if(next != NULL) head->next = reverseKGroup(next, k);

  return prev;
}

int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(9);
  node1->next->next->next->next = new Node(11);

  Node* temp = reverseKGroup(head, 3);

  print(temp);

  return 0;
}