#include <iostream>
using namespace std;

int search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Target found
        if (arr[mid] == target) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[left] <= arr[mid]) {

            // Check if target lies in the sorted left half
            if (target >= arr[left] && target < arr[mid]) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

        // Otherwise, the right half is sorted
        else {

            // Check if target lies in the sorted right half
            if (target > arr[mid] && target <= arr[right]) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int size = 7;
    int target = 1;

    cout << search(arr, size, target);

    return 0;
}