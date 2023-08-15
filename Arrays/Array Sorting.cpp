#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {5,6,3,2,8};
    int size = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
