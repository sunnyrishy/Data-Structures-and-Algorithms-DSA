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

Node *takeInput(){
    cout<<"Enter input : ";
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

void print(Node *head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int length(Node *head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
   
}

void print_ith_element(Node *head, int i){
      
    if(i<0 ){
        cout<<"-1"<<endl;   //out of range
        return;
    }
    int count = 0;
    while(count<i && head){  //if this condition is not satisfied we get a Segmentation error
     head = head->next;
     count ++;
    }
    cout<<"Element at "<<i<<"th index is : ";
    cout<<head->data<<endl;
}

int main() {
    Node *head = takeInput();
    print(head);
    int len = length(head);
    cout<<endl;
    cout<<"Length is : "<<len;
    int index;
    cout<<endl;
    cout<<"Enter the index to find its element : ";
    cin>>index;
    cout<<endl;
    print_ith_element(head, index);
}
