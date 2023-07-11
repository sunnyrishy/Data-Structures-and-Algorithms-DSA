#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;
    
    Node(int data){     //constructor for Node Class
        this->data = data;
        next = NULL;
    }
};

void print(Node *head){
    Node *temp = head;
    while( temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

Node* takeInput(){     //input function
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    
    while(data != -1){
        Node *n = new Node(data);
        
        if(head == NULL){
            head = n;
            tail = n;
        }
        else{
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}
int main() {
    // Node *n1 = new Node(1);
    // Node *head = n1;
    // Node *n2 = new Node(2);
    // Node *n3 = new Node(3);
    // Node *n4 = new Node(4);
    // Node *n5 = new Node(5);
    
    
    // (*n1).next = n2;
    // (*n2).next = n3;
    // (*n3).next = n4;
    // (*n4).next = n5;
    
    Node *head = takeInput();
    
    print(head);
    
}
