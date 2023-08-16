#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>& arr, int S){
    for(int i=1;i<S;i++){
        int key = arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]>key){
            swap(arr[j],arr[j+1]);
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    vector<int> arr = {1,5,6,2,4,9,0};
    int size = arr.size();
    insertionsort(arr,size);
    cout<<"After sorting ! ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
