#include<iostream>
using namespace std;

inline int maxx(int a,int b){
    return (a>b)?a:b;
}
int main()
{
    
    cout<<"\nmaximum is:";
    cout<<maxx(5,9);
    cout<<"\nmaximum is:";
    cout<<maxx(99,100);

}