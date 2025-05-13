#include<iostream>
#include<map>
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

void removeDuplicates(Node* &head){
  if(head == NULL) return;

  Node* curr = head;
  while(curr != NULL && curr->next != NULL){
    if(curr->next->data == curr->data){
      curr->next = curr->next->next;
    }
    else{
      curr = curr->next;
    }
  }
}


int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(5);
  node1->next->next->next = new Node(7);

  removeDuplicates(head);
  print(head);

  return 0;
}