#include <iostream>

    using namespace std;
    class om{
      
        public:
        int x,y;
    void sum(int x, int y)
    {
        cout<<"THE SUM OF THE ENTERED NUMBER FOR TASK(2) IS \n"<<x+y;
      
    }
    void diff(int x, int y)
    {
        cout<<"THE DIFFERENCE OF THE ENTERED NUMBER FOR TASK(2) IS \n"<<x-y; 
        
    }
    void product(int x, int y)
    {
        cout<<"THE PRODUCT OF THE ENTERED NUMBER FOR TASK(2) IS \n"<< x*y;
        
    }
    void divide(int x, int y)
    {
        cout<<"THE RATIO OF THE ENTERED NUMBER FOR TASK(2) IS \n"<<x/y;
        cout<<endl;
    }
    

    };

    
    int main()
    {
        om kashyap;
    cout<<"ENTER TWO DIGITS TO PERFORM ALL BASIC ARITHMETIC OPERATIONS TASK(2)"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    kashyap.sum(a,b);
    kashyap.product(a,b);
    kashyap.divide(a,b);
    kashyap.diff(a,b);

    cout<<"Enter the number of digits to perform an array task(1)\n";
    int x;
    cin>>x;
    cout<<"Enter "<<x<<" digits\n";
    int c[x];
    for(int i=0; i<x; i++)
    {
        cin>>c[i];
    }
    cout<<"THE SUM OF THE 1ST AND LAST DATA ENTERED FROM BOTH ENDS IS \n";
    for(int i=0; i<x; i++)
    {
        cout<<c[i]+c[x-1-i]<<endl;
    }
     
    
   return 0;
    }
    
   

    



