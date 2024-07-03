#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

    void reverse(Node* &head){
      Node* prev = NULL;
      Node* curr = head;
      Node* next;

      while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;

      }
      head = prev;
    }

void display(Node* head){
 Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
  
    display(head);
    cout<<endl;
    reverse(head);
   cout<<endl;
    display(head);
}