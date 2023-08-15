#include<iostream>
#include<array>
using namespace std;

int main() {
  array<int, size> myarray = {1,2,3,4};
  for(int i=0;i<myarray.size();i++){
    cout<<myarray[i]<<endl;
  }
  return 0;
}


This method is prefered is the size of the array is known before compile time.


#include<iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> myarray = {1,2,3,4};
  for(int i=0;i<myarray.size();i++){
    cout<<myarray[i]<<endl;
  }
  return 0;
}


This method is prefered is the size of the array is not know during the compile time.
