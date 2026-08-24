#include<iostream>
using namespace std;
class item{
    int code;
    float price;
    public:
    static int count;
    void getdata(){
        cout<<"\nEnter code & price:";
        cin>>code>>price;
    }
    void showdata(){
        cout<<"\ncode: "<<code<<"\nPrice: "<<price;
        count++;
    }
    void showcount(){
        cout<<"\nCount is: "<<count;
    }

};
int item::count=0;     //even it takes 0 normally if not declared;
int main(){
    item ob;
    ob.getdata();
    ob.showdata();
    ob.showcount();
    item ob2;
    ob2.getdata();
    ob2.showdata();
    ob2.showcount();

    cout<<"\nCount is:"<<item::count<<endl;
    cout<<ob.count<<endl;

}