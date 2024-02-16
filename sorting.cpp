#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of elements in array: "<<endl;
cin>>n;
int a[n];
cout<<"enter array data"<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"array before sorting"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]+"\t";
}
cout<<"array after sorting"<<endl;
for(int i=0;i<n-1; i++){
   for(int j=i+1; j<n;j++){
    if(a[j] <a[i]){
        int t=a[j];
        a[j]=a[i];
        a[i]=t;  
   }
}
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]+"\t";
}
cout<<"enter search variable";
int y;
cin>>y;
int b=0,en=n-1,mid;
while(b<=en) {
    mid=(b+en)/2;
    if(y==a[mid]){
        cout << "Element found at index " << mid;}
        else if (y > a[mid])
        b = mid + 1;
        else
        en=mid-1;
}

return 0;
}