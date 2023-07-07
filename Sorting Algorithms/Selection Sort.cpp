A Loop is ued to iterater over the elements and an inner loop is used to find the smalles element towards its right. If smallest element is found it is swapped else moves on.


#include<iostream>
using namespace std;

void selectionsort(int a[], int n){
    for(int i=0;i<=n-2;i++){
        int smallest = i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[smallest]){
                smallest = j;
            }
        }
        swap(a[i], a[smallest]);
    }
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
    selectionsort(a,n);
    cout<<"After sorting : ";
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}
