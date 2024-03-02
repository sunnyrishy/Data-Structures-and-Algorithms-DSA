#include<bits/stdc++.h>
using namespace std;

int main () {
    int n = 5;
    int m = 6;  // this can be taken from the user input
    
    int adj[n+1][n+1];   // n+1 is because of the usage of 1 based Indexing.   We can use adj[n][n] if we are using 0 based indexing
    memset(adj, 0, sizeof(adj));    //initializing all the matrix elements to zero.
    cout<<"Enter Edges : "<<endl;
    for(int i = 0; i < m; i++){
        int u , v;
        cin>> u >> v;
        adj[u][v] = 1;   // changing 0 to 1 if there exists a edge
        adj[v][u] = 1;
    }
    
    //printing matrix
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=n;j++){
            cout<<adj[i][j]<<" ";   //printing the matrix.
        }
        cout<<endl;
    }
    return 0;
}




Output : 


Enter Edges : 
1 3
1 2
3 4
3 5
2 4
4 5
0 0 0 0 0 0 
0 0 1 1 0 0 
0 1 0 0 1 0 
0 1 0 0 1 1 
0 0 1 1 0 1 
0 0 0 1 1 0 
