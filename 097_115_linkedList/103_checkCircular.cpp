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

bool checkCircular(Node* &head){
  if(head == NULL) return 0;

  Node* temp = head->next;
  while((temp != NULL) && (temp != head)){
    temp = temp->next;
  }
  if(temp == NULL) return 0;
  else return 1;
}

int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(9);
  // node1->next->next->next->next = head;

  cout << checkCircular(head);

  return 0;
}