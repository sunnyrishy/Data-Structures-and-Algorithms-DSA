Priority Queue For Max Heap : 

#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> maxheap;  //standard maxheap, larger number = higher the priority.
  //priority_queu<int, vector<int>, less<int>>     we can also use this.
    maxheap.push(10);
    maxheap.push(20);
    maxheap.push(60);
    maxheap.push(30);
    cout<<"Highest Priority Element is : "<<maxheap.top();
}



Priority Queue For Min Heap : 

#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> minheap;  //here, the smallest number will be given the highest priority.
    minheap.push(10);
    minheap.push(20);
    minheap.push(60);
    minheap.push(30);
    cout<<"Least Priority Element is : "<<minheap.top();
}
