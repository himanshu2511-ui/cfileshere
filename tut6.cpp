#include <iostream>//preprocessor directive(a way of future)
using namespace std;

int fact(int x){
 
 if(x<2){
    return 1;
 }
 return x*fact(x-1);  
}
int main(){
cout<<"Enter an integer whose factorial is to be calculated\n";
int n;
cin>>n;
cout<<"The factorial of "<<n<<" is "<<endl<<fact(n);
return 0;//terminates the main function
}