#include<iostream>
using namespace std;

void printprefix(char str[]){
    for(int end = 0;str[end]!= '\0';end++){
        for(int start =0;start<=end;start++){
            cout<<str[start];
        }
        cout<<endl;
    }
}

int main() {
    char name[100] = "abcdef";
    printprefix(name);
    return 0;
}


Output : 


a
ab
abc
abcd
abcde
abcdef
