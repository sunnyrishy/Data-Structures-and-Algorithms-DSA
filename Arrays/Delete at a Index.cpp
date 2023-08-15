#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {5, 10, 15, 20, 25};
    int indexToDelete = 2;

    if (indexToDelete >= 0 && indexToDelete < vec.size()) {
        vec.erase(vec.begin() + indexToDelete);
        cout << "Element at index " << indexToDelete << " deleted." << endl;
    } else {
        cout << "Invalid index." << endl;
    }

    cout << "Updated vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
