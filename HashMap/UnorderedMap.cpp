#include<bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> hashtable;
    
    hashtable[1] = 10;   //key-value pair
    hashtable[2] = 20;
    
    cout<<"Value at key 1 is : "<<hashtable[1]<<endl;
    cout<<"Value at key 2 is : "<<hashtable[2]<<endl;
    
    if(hashtable.find(10) != hashtable.end()){    //searching/finding an element
        cout<<"Key 10 esists !";
    }
    else{
        cout<<"Key 10 not exists !";
    }
}
