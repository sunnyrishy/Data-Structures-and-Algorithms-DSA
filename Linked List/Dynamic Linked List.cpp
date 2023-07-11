When a linked list is created dynamically, space is allocated in Stack and Heap.


#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main() {
    Node *n1 = new Node(1);
    Node *head = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);
    
    
    (*n1).next = n2;
    (*n2).next = n3;
    (*n3).next = n4;
    (*n4).next = n5;
    
    print(head);
    
}




or Using GPT way : 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main() {
    Node *head = nullptr;
    Node *tail = nullptr;
    
    for(int i=1;i<6;i++){
        Node* newnode = new Node(i);
        
        if(head == nullptr){ //linked list is empty
            head = newnode;
            tail = newnode;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    print(head);
    
    return 0;
    
}
