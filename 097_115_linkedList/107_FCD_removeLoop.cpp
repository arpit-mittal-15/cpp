// FLOYD CYCLE DETECTION

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

bool detectLoop(Node* &head, Node* &slow, Node* &fast){
  while(fast != NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
    if(fast == slow){
      return 1;
    }
  }
  return 0;
}

Node* getBeginning(Node* &head){
  Node* fast = head;
  Node* slow = head;

  if(detectLoop(head, slow, fast)){
    slow = head;
    while(slow != fast){
      slow = slow->next;
      fast = fast->next;
    }

    return slow;
  }
  else return NULL;
}

void removeLoop(Node* head){
  if(head == NULL) return;

  Node* startOfLoop = getBeginning(head);

  if(startOfLoop){
    
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
      temp = temp->next;
    }
    temp->next = NULL;
  }
  else return;
}

int main(){

  Node* node1 = new Node(3);
  Node* head = node1;
  node1->next = new Node(5);
  node1->next->next = new Node(7);
  node1->next->next->next = new Node(9);
  node1->next->next->next->next = node1->next->next;

  removeLoop(head);

  print(head);

  return 0;
}