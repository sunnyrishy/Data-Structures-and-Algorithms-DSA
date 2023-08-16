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




#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr, int S){
    for(int i=0;i<S-1;i++){
        for(int j=0;j<S-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {3,5,6,1,2,9,0};
    int size = arr.size();
    bubblesort(arr, size);
    cout<<"Sorted array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}




Reference : https://www.geeksforgeeks.org/bubble-sort/

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. 
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

In this algorithm, 

traverse from left and compare adjacent elements and the higher one is placed at right side. 
In this way, the largest element is moved to the rightmost end at first. 
This process is then continued to find the second largest and place it and so on until the data is sorted.


  Placing the larger numbers at the right most of the array is the logic of this sorting function.
