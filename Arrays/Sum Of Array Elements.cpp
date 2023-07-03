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
    
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"Sum of array elements is : "<<sum<<endl;
    return 0;
}
