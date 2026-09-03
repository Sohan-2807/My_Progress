#include<iostream>
using namespace std;

int SimpleInterest(int principal,int time,int rate){
    cout<<"Simple Interest is:"<<endl;
    int si = principal*time*rate/100;
    return si;
}

int main(){
    cout<<SimpleInterest(10000,2,10);
}

