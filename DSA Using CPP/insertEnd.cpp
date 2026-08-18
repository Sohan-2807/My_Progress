#include <iostream>
using namespace std;

int insertEnd(int arr[], int *n, int max_size, int element){
    if (*n >= max_size) {
        cout << "Array is full. Cannot insert element." << endl;
        return -1;
    }

    arr[*n] = element;
    (*n)++;

    return 0;
}

int main() {
    int max_size = 10;
    int arr[max_size] = {1, 2, 3, 4, 5};

    int n = 5;

    insertEnd(arr, &n, max_size, 4);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }

    return 0;
}