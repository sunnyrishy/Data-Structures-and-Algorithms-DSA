To use Binary Search , the array must be sorted.
Binary Search can't be applied to unsorted array.

  Binary Seach Code :  

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start+(end-start)/2; //this solves the overflow problem caused when used (start+end)/2
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] > key){
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key : ";
    cin>>key;
    
    sort(a,a+n);
    
    int pos = BinarySearch(a,n,key);
    if(pos == -1){
        cout<<"Key not found ! ";
    }
    else {
        cout<<"Key found at index : "<<pos<<endl;
    }
    return 0;
}
