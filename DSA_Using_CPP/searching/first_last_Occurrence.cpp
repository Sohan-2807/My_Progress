#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int findLastOccurrence(int arr[], int size, int target) {
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[7] = {1, 2, 4, 4, 4, 4, 5};
    int size = 7;
    int target = 4;

    cout << "First occurrence: "
         << findFirstOccurrence(arr, size, target) << endl;

    cout << "Last occurrence: "
         << findLastOccurrence(arr, size, target);

    return 0;
}