Linked List is random allocation of memory. We can add as much number of elements as can. 

Remember that pointer is of 8 bytes in size.

#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;  //Node is the datatype of next pointer
    // next is a pointer to the next Node object

    Node(int data){  //this is the constructor
        this->data = data; // this assigns the value of the data argument to the data member of the current node object
        next = NULL;
    }
    
};

int main() {
    Node n1(1);
    Node n2(2);
    
    n1.next = &n2;
    cout<<n1.data<<" "<<n2.data;
    cout<<endl;
    Node *head = &n1;
    cout<<(*head).data;
    return 0;
    
}
