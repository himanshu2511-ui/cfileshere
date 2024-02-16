#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    cout<<"enter 2 values for public variables\n";
    cin>>harry.d;
    cin>>harry.e;
    cout<<"enter 3 values for private variables\n";
    int z,x,y;
    cin>>x>>y>>z;
    harry.setData(z,y,x);
    harry.getData();
    return 0;
}