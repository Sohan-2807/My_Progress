#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[6] = {1, 3, 6, 8, 9, 11};
    int n = 6;
    int target = 11;

    cout << binarySearch(arr, n, target);

    return 0;
}