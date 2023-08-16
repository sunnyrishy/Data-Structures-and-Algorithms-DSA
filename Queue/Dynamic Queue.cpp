#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Front element is : "<<q.front()<<endl;
    q.pop();
    cout<<"Present Front Element is : "<<q.front()<<endl;
    q.push(4);
    q.push(5);
    cout<<"Size of the Queue is : "<<q.size();
    return 0;
}
