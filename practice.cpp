#include <iostream>
using namespace std;
class jy{
int x;
public:
int fact(int m){
    x=m;
    if (m==0) 
    {return 1;}
    else 
    {return m*fact(m-1);}
}
int volume(int j,int k, int l){
    return j*k*l;
}
void display1(int p){
    cout<<"The factorial of "<<p<<" :"<<fact(p)<<endl;
    
}
void display2(int b,int n, int m){
    cout<<"The volume of cuboid of dimensions : ["<<b<<" , "<<n<<" , "<<m<<" ] "<<" is : "<<volume(b,n,m);
}
};
int main(){
    cout<<"Enter the an integer whose factorial is to be calculated\n";
    int y;
    cin>>y;
    jy of;
    of.display1(y);
    cout<<"Enter the an integer whose factorial is to be calculated\n";
    int b,n,m;
    cin>>b>>n>>m;
    of.display2(b,n,m);  
return 0;
}