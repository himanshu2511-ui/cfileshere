#include <iostream>
using namespace std;

int main(){
cout<<"my name is himanshu"<<endl;
cout<<"see some patterns but entering a digit greater than 2\n";
int n,i,j;
cin>>n;
for( i=0; i<n+1; i++)
{
    for(j=0; j<i; j++)
   {
     cout<<j<<" ";
}
cout<<"\n";
}
cout<<"\n";
cout<<"\n";
for( i=0; i<n+1; i++)
{
    for(j=0; j<i+1; j++)
    if(j%2==0)
    {
        cout<<"*"<<" ";
}
else
   { 
    cout<<"@"<<" ";
}
cout<<"\n";
}
cout<<"\n";
cout<<"\n";
for( i=0; i<n+1; i++)
{
    for(j=n+1; j>i; j--)
    if(j%2==0)
    {
        cout<<"*"<<" ";
}
else
   { 
    cout<<"@"<<" ";
}
cout<<"\n";
}

cout<<"\n";
cout<<"\n";
for( i=0; i<n+1; i++)
{
    for(j=n; j>i; j--)
   {
     cout<<j<<" ";
}
cout<<"\n";
}
return 0;
}

