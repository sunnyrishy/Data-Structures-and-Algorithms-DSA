It is just a normal loop iteration search .

It is also known as Sequential Search.

    
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





#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> arr, int N, int T){
    for(int i=0;i<arr.size();i++){
        if(T == arr[i]){
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6};
    int size = arr.size();
    int target = 5;
    int result = linearsearch(arr, size, target);
    if(result != -1){
        cout<<"Element found at "<<result;
        
    }
    else{
        cout<<"Not found !";
    }
    return 0;
}
