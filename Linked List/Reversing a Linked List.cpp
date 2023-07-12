We simply reverse the Linked List by adding the elements at the head position and updating head.

  Here is  the code to change the head postion everytime a new element is inserted.

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
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

Node *takeInput() {
    int data;
    cout<<"Enter enough data and add -1 to stop inputing :"<<endl;
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
            n->next = head;    // here is the part where the head is updated to reverse the linked list, previously it is tail->next = n; tail = n
            head = n;
        }
        cin>>data;
    }
    return head;
}
int main(){
    Node *head = takeInput();
    print(head);
    return 0;
}



Time Complexity : O(N)  where N is the number of elements.
