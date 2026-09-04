#include<iostream>
using namespace std;

int occurrence(int arr[],int size,int target){
    int count = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] == target){
            count ++;
        }
    }
    return count;
}

int main(){
    int arr[5] = {1,2,2,3,2};
    int size = 5;
    int target = 2;
    cout<<occurrence(arr,size,target);
    return 0;
}