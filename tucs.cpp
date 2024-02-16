#include<iostream>
#include<string>
using namespace std;
int main() {
    int x,y=0,i;
    cout<<"enter a number to get its reverse"<<endl;
    cin>>x;
    for(i=0;i<x;i=i/10){
        y=y+i;
    }
    cout<<"the reversed number is "<<y;
    string s,m="";
    cout<<"enter a number to get its reverse";
    cin>>s;
    int n = s.length();
    for(i=0;i<n;i++)
    {
        m=m+s[n-i-1];
    }
    cout<<"the reversed number is "<<m;
    return 0;
}