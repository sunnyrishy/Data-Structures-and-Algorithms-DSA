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
    
    if(n == 0){
        cout<<"Greatest element not found !";
    }
    else if(n == 1){
        cout<<"Greatest element is : "<<arr[0];
    }
    else {
        int greatest = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i] >= greatest){
                greatest = arr[i];
            }
        }
        cout<<"Greatest element is : "<<greatest;
    }
    
}
