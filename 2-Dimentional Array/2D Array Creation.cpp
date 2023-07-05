Syntax : datatype 2D-arrayname [rows][coloums];

#include<iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of coloums : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements : ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //printing array ----
    cout<<"Row wise : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Coloum wise : "<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


Output : 


Enter number of rows : 2 
Enter number of coloums : 3
Enter elements : 1 2 3 4 5 6
Row wise : 
1 2 3 
4 5 6 
Row wise : 
1 4 
2 5 
3 6 
