#include<iostream>
using namespace std;
class operations{
    int a;
    int b;
    public:
    void getdata(){
        cout<<"Enter values of a & b:";
        cin>>a>>b;
    }
    inline int maxx();
};
int operations::maxx(){
    return(a>b)?a:b;
}
int main(){
    operations ob;
    ob.getdata();
    cout<<"largest num is:";
    cout<<ob.maxx();
}