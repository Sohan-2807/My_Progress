#include <iostream>
using namespace std;

int insertBegining(int arr[], int *n,int element,int max_size){
    if(*n >= max_size)return -1;
    for (int i = *n;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = element;
    (*n)++;
    return 0;
}
int main(){
    int max_size = 10;
    int arr[max_size] = {1,2,3,4,5};
    int element = 0;
    int n = 5;
    insertBegining(arr,&n,element,max_size);
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}