#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {5, 6, 3, 2, 8};
    int size = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());

    cout << endl << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
