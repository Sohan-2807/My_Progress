#include <iostream>
using namespace std;

int deleteAtPosition(int arr[], int *n, int pos) {
    if (*n == 0) return -1;
    if (pos < 0 || pos >= *n) return -1;

    int deleted = arr[pos];

    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;

    return deleted;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int pos = 4;

    int deleted = deleteAtPosition(arr, &n, pos);

    cout << "Deleted: " << deleted << endl;
    cout << "Array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}