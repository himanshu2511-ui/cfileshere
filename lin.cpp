#include <iostream>
using namespace std;

int main(){
int n,f=0;
cout<<"enter array size"<<endl;
cin>>n;
int arr[n];
cout<<"enter "<<n<<" data in array"<<endl;
for(int i=0;i<n; i++){
    cin>>arr[i];
}
cout<<"enter search variable"<<endl;
int x;
cin>>x;
for(int i=0;i<n; i++){
    if(x==arr[i]){
    f++; 
    cout<<"the value is found at "<<i+1<<" position";  
    break;
}
}
if(f==0){
    cout<<"no such data found";
}
return 0;
}