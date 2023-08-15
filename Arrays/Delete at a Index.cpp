#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 10, 15, 20, 25};
    int indexToDelete = 2;

    if (indexToDelete >= 0 && indexToDelete < arr.size()) {
        arr.erase(arr.begin() + indexToDelete);
        cout << "Element at index " << indexToDelete << " deleted." << endl;
    } else {
        cout << "Invalid index." << endl;
    }

    cout << "Updated vector: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
