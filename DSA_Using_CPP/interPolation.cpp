#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right &&
           target >= arr[left] &&
           target <= arr[right]) {

        int pos = left +
            ((target - arr[left]) * (right - left)) /
            (arr[right] - arr[left]);

        if (arr[pos] == target) {
            return pos;
        }

        else if (arr[pos] < target) {
            left = pos + 1;
        }

        else {
            right = pos - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int target = 60;

    cout << interpolationSearch(arr, size, target);

    return 0;
}