#include<iostream>
using namespace std;
class Employee{
    public:
        int id;
        float esal;
        void getdata()
        {
            cout<<"enter eid and esal:";
            cin>>id>>esal;
        }
        void display()
        {
            cout<<"Employee details are:\n";
            cout<<"eid:"<<id<<"\n";
            cout<<"esal:"<<esal<<"\n";
        }
};
int main(){
    Employee e1,e2;
    e1.getdata();
    e1.display();   
    cout<<"\n";
    cout<<"Enter details of second employee:\n";
    cout<<"enter eid and esal:";
    cin>>e2.id>>e2.esal;
    e2.display();
}
