Continuously compare and swap adjacent elements at a max in worst case of n-1 times.

  #include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int count = 0;count <= n-1;count++){
        for (int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
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
    bubbleSort(a,n);
    cout<<"After Sorting : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}


Space Complexity :  O(1)
Time Complexity : O(N^2) - Worst Case
