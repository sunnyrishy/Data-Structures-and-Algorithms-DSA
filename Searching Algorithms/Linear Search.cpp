It is just a normal loop iteration search .

#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i] == key){
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements :  ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;
    
    int pos = linearSearch(a,n,key);
    if(pos == -1) {
        cout<<"Key Not found !";
    }
    else {
        cout<<"Key Found at index"<<pos;
    }
}

Time Complexity : O(n)
