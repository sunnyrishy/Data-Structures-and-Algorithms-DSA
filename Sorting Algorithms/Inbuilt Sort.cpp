In order to use the inbuilt sort, we need to import the requied header file for it.

  Sort - #include<algorithm>

  Or simply we can import the master header file, which acts the header file for all the requied libraries.

  Master Header - #include<bits/stdc++.h>

  #include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);       // starting and ending element
    cout<<"After sorting : ";
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

  
