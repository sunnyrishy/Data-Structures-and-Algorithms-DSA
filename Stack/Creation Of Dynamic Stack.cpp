#include <bits/stdc++.h>
using namespace std;
#define n 100

class my_stack {
    int* arr;
    int top;
    
public:
    my_stack(){
        arr = new int[n];
        top = -1;
    }
    
    void push(int x){
        if(top == n-1){
            cout << "Stack Overflow !";
            return;
        }
        top++;
        arr[top] = x;
    }
    
    void pop(){
        if(top == -1){
            cout << "Stack is already empty !";
            return;
        }
        top--;
    }
    
    int Top(){
        if(top == -1){
            cout << "No elements in stack !";
            return -1;
        }
        return arr[top];
    }
    
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
    
    void print(){
        for (int i = top; i >= 0; i--){
            cout << arr[i] << endl;
        }
    }
};



 
 int main() {
    my_stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.print();
    
    cout<< "Top of the stack is : " <<stk.Top()<<endl;

    cout << "Is stack empty? " << stk.isEmpty() << endl;

    stk.pop();
    stk.pop();
    stk.pop();

    cout << "Is stack empty? " << stk.isEmpty() << endl;

    stk.print();

    return 0;
}

