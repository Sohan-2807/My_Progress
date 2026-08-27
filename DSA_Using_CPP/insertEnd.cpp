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
/*
note1: The code above defines a function insertEnd that inserts an element at the end of an array. It checks if the array is full before inserting the element.
note2: The function takes a pointer to the current size of the array (n) and the maximum size of the array (max_size) as parameters. It updates the size of the array after inserting the element.
note3: The main function initializes an array with a maximum size of 10 and inserts an element (4) at the end of the array. It then prints the updated array.
note4: The code does not handle the case where the input array is empty. You may want to add checks for that scenario.
note5: The code assumes that the input array has enough space to accommodate the new element. If the array is full, it prints an error message and does not insert the element.
note6: The code uses C++14 features, so make sure your compiler supports that standard version.
*/