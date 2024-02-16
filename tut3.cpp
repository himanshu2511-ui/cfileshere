#include <iostream>
using namespace std;

int main(){
int a=3;
int* b= &a;
cout<<a<<endl;
cout<<b<<endl; 
cout<<*b<<endl<<endl;
int marks[5]={98, 41, 81, 46, 88};
int* p=marks;
int i=0;
do
{
 cout<<*p<<endl;
 p++;
 i++;
}
while(i<5);
 int n;
 cout<<"enter the number of students\n";
 cin>>n;
int endsem[n];
int j=0;
cout<<"\nEnter the end sem marks of "<<n<<" students \n";
for(j=0; j<n; j++)
{
    cin>>endsem[j];
}
cout<<"Enter the topper's marks\n";
int top;
cin>>top;
top=(35*top)/100;
for(j=0; j<n; j++)
{
    if(top<endsem[j])
    {  
        cout<<"student "<<j+1<<" has passed\n";
    }   
    else{
        cout<<"student "<<j+1<<" has failed by "<<top-endsem[j]<<"marks"<<endl;
    }
}
return 0;
}