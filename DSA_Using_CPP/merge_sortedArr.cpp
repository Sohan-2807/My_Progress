#include <iostream>
using namespace std;

void mergeSorted(int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1)
        result[k++] = arr1[i++];

    while (j < size2)
        result[k++] = arr2[j++];
}

int main() {
    int arr1[] = {2, 7, 9, 10};
    int arr2[] = {1, 2, 5, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result[size1 + size2];

    mergeSorted(arr1, arr2, size1, size2, result);

    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }

    return 0;
}