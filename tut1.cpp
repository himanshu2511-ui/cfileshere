#include <iostream>
using namespace std;

int main(){
int n;int i,j,o,c=1;
cout<<"enter size of array"<<endl;
cin>>n;
int a[n];
cout<<"enter integral data in array"<<n<<" data"<<endl;
for( i=0;i<n;i++)
{
   cin>>a[i];
}
cout<<"the entered array is : "<<endl;
for(i=0; i<n; i++){
    cout<<a[i]<<"\t";
}
cout<<"sorted array"<<endl;
    while(c<n){
    for(j=0;j<n-c;j++)
    {
        if(a[j]>a[j+1])
         o=a[j];
        a[j]=a[j+1];
        a[j+1]=o;
    }
    c++;
    }

for( i=0; i<n;i++)
{
    cout<<a[i]+"\t";
}
return 0;
}