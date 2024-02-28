#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int target;
    cin>>target;
    int f = 0;
   
    sort(a, a+n);  //sort(begin(a), end(a));
    
    int i = 0;    // int i = a[0];
    int j = n-1;   // int j = a[n-1];
    
    while(i<j){
        if(a[i]+a[j] == target){
            f = 1;
            cout<<"True";
            cout<<a[i]<<" "<<a[j]<<endl;
            break;
        }
        else if(a[i] + a[j] < target){
            i++;
        }
        else {
            j--;
        }
    }
    if(f == 0){
        cout<<"False";
    }
    return 0;
    
}
