#include<bits/stdc++.h>
using namespace std;

int main () {
    int n = 5;
    int m = 6;
    vector<int> adj[n+1];    //every element is assigned a empty list. 0->{}, 1->{}, 2->{}, 3->{}.........
    for(int i = 0; i<m; i++){
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);   // this line is not used in case of directed graph
    }
    cout<<"Adjacency List "<<endl;
    for(int i = 0; i<= n; i++){
        cout<<"Vertex "<<i<<"  : ";
        for(int j= 0; j<adj[i].size();j++){
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }
}
