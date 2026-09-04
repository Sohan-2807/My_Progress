#include <iostream>
using namespace std;

int sentinelSearch(int arr[], int n, int target) {
    int last = arr[n - 1];       // Save last element
    arr[n - 1] = target;         // Place target as sentinel

    int i = 0;

    while (arr[i] != target) {
        i++;
    }

    arr[n - 1] = last;           // Restore last element

    // Check whether target was actually present
    if (i < n - 1 || arr[n - 1] == target) {
        return i;
    }

    return -1;
}

int main() {
    int n, target;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    int result = sentinelSearch(arr, n, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}