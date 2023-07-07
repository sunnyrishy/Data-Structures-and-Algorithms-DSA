A flag is used to check if the swaaping is done or not.

If swapping is done then n^2 steps will be taken 
  else only n steps will be taken to check every element is in it's right position.


  #include<iostream>
using namespace std;

void bubbleSort(int a[],int n){
    for(int count = 0;count <= n-1;count++){
        int flag = 0;
        for (int j=0;j<=n-2;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag = 1;  //if swapping is done
            }
        }
        if(flag == 0){     //already the given elements are sorted
            break;  //come out of the outer loop
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
