deque (double-ended queue)

#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    
    cout<<"Front Element is : "<<q.front()<<endl;
    cout<<"Rear or Back element is : "<<q.back()<<endl;
    
    cout<<"Size is : "<<q.size()<<endl;
}

