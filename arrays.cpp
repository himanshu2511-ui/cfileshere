#include <iostream>
using namespace std;

int main(){
int n;int a[n];int i,o;
cout<<"enter size of array"<<endl;
cin>>n;
cout<<"enter integral data in array"<<n<<" data";
for( i=0;i<n;i++)
{
   cin>>a[i];
}
cout<<"the entered array is : "<<endl;
for(i=0; i<n; i++){
    cout<<a[i]<<"\t";
}
cout<<"sorted array"<<endl;
for(i=0; i<n;i++)
{
    for(int j=0;j<i;j++)
    {
        if(a[j]>a[j+1])
         o=a[j];
        a[j]=a[j+1];
        a[j+1]=o;
    }
}
for(i=0; i<n;i++)
{
    cout<<a[i]+"\t";
}
return 0;
}