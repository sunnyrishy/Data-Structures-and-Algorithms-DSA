Here is the code snipped to calculate the length of LL.

  int length(Node *head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}




Here is the complete code that calculates the length.

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
            tail->next = n;
            tail = n;
        }
        cin>>data;
    }
    return head;
}

int length(Node *head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}
int main(){
    Node *head = takeInput();
    print(head);
    int len = length(head);
    cout<<endl;
    cout<<"Length of the Linked List is : "<<len;
    return 0;
}


Time Complexity : O(N)
