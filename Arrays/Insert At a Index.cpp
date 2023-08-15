#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};
    int element = 7;
    int index = 1;

    if (index >= 0 && index <= arr.size()) {
        arr.insert(arr.begin() + index, element);
    } else {
        cout << "Invalid index!" << endl;
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
