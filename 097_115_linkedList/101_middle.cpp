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

int getLen(Node* &head){
  if(head == NULL) return 0;
  Node* temp = head->next;
  int count = 1;
  while(temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

Node* middle1(Node* &head){
  int len = getLen(head);
  int ans = (len/2) + 1;
  Node* temp = head;
  int count = 1;
  while(count < ans){
    temp = temp->next;
    count++;
  }
  return temp;
}

Node* middle2(Node* &head){
  if(head == NULL || head->next == NULL) return head;

  Node* fast = head->next;
  Node* slow = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
    }
    slow = slow->next;
  }
  return slow;
}

int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(9);

  Node* temp = middle2(head);

  cout << temp->data << endl;

  return 0;
}