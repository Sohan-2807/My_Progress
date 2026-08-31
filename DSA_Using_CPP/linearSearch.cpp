#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Return index if found
        }
    }
    
    return -1;  // Not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}