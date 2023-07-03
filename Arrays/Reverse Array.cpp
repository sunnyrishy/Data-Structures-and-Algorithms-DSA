#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before reversing array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int start = 0;
    int end = n-1;
    
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<"After reversing array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
