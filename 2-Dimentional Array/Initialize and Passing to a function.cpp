---> It is not mandatory to pass the number of rows but, it is Required to pass number of column's.
  --> If the elements are not passed, they are treated as '0'.



#include<iostream>
using namespace std;

void printarray(int a[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int arr[][4] = {{1,2},{3,4}};
    printarray(arr,2,4);
    return 0;
}

Output : 

1 2 0 0 
3 4 0 0 





  ** Row Major Technique is used to store the 2D Array.
  For a 2D array of size MxN, a 1D array of size mn is created and the all the elements of a row are loaded then second row and goes on (each row is treated as a set and is loaded).
  arr[i][j] = i*C + j    i.e C = Coloums;
  To access the element in the created 1D array, number of colums is requied.
    So, It must be paseed as a argument.
