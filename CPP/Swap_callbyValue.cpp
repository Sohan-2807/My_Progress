#include<iostream>
using namespace std;
void swapNumbers(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
int main(){
    int a;
    int b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    swapNumbers(a,b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}