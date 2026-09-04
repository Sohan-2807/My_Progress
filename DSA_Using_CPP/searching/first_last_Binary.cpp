#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int first = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            first = mid;
            right = mid - 1;  // Search on the left side
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return first;
}

int findLastOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int last = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            last = mid;
            left = mid + 1;  // Search on the right side
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return last;
}

int main() {
    int arr[7] = {1, 2, 4, 4, 4, 4, 5};
    int size = 7;
    int target = 4;

    int first = findFirstOccurrence(arr, size, target);
    int last = findLastOccurrence(arr, size, target);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}