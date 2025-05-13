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

void removeDuplicates(Node* head){
  if(head == NULL) return;

  map<int, bool> visited;

  Node* prev = NULL;
  Node* temp = head;
  while(temp != NULL){
    if(visited[temp->data] == true){
      prev->next = temp->next;
      temp->next = NULL;
      temp = prev->next;
    }
    else{
      visited[temp->data] = true;
      prev = temp;
      temp = temp->next;
    }
  }
}


int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(5);
  node1->next->next->next->next = new Node(5);
  node1->next->next->next->next->next = new Node(5);
  node1->next->next->next->next->next->next = new Node(6);

  removeDuplicates(head);
  print(head);

  return 0;
}