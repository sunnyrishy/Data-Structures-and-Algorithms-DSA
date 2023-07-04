#include<iostream>
using namespace std;

int main() {
    char name[100];
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Your name is : "<<name<<endl;
}


// No for loop is requied to print the array and a terminator --> '\0\' is appended at the end of input if there is space remained in the array.
// Garbage values may be printed, sometimes garbage value may contain the terminator '\0'
