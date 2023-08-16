#include <iostream>
#include <stack>  or #include<bits/stdc++.h>

int main() {
    std::stack<int> myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Top value: " << myStack.top() << std::endl;
    }

    myStack.pop();

    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Top value after pop: " << myStack.top() << std::endl;
    }

    return 0;
}
