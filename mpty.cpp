#include <iostream>
using namespace std;
class om{
public:

void sum(int x, int y){
   
    cout<<"Sum of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
}
void diff(int x, int y){
   
    cout<<"Difference of "<<x<<" and "<<y<<" is : "<<x-y<<endl;
}
void mul(int x, int y){
   
    cout<<"Product of "<<x<<" and "<<y<<" is : "<<x*y<<endl;
}
void div(int x, int y){
   
    cout<<"Ratio of "<<x<<" and "<<y<<" is : "<<x/y<<endl;
}

};
int main(){
cout<<"Enter 2 digits to for arithmetic operations\n";
int m,n;
om kashyap;
cin>>m>>n;
kashyap.sum(m,n);
kashyap.diff(m,n);
kashyap.mul(m,n);
kashyap.div(m,n);
return 0;
}