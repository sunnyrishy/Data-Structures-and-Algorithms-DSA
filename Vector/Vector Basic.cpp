Vector is basically Inbuilt Dynamic array.

There is no need to give the size of the array in advance. It is dynamic.
* It's size keeps doubling its size as soon as the blocks are filled.

Capacity (v.capacity()) shows the number of elements that the vector can hold.
Size (v.size()) shows the number of elements that the vector is holding at present.

push_back is used to insert element at the end.
pop_back is used to delete element at the end.
v.capacity()    ----- Capacity gets doubled when the size reaches the capacity.
v.size()

 #include<iostream>
 using namespace std;
 #include<vector>
 
 int main() {
     vector<int> v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     int capa = v.capacity();
     cout<<"Capacity of the Vector is : "<<capa<<endl;
     cout<<"Size of the Vecotr is : "<<v.size()<<endl;
 }
