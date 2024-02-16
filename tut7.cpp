#include <iostream>
using namespace std;
class kashyap
{
    
    public:
    int a,b,c;
    

    void volume(int a1, int b1, int c1);//this is used to show that this void func will appear later in code
    
    void display(){
        
        cout<<"The volume of the cuboid is:\n"<<a*b*c<<endl;
        
    }
};
    void kashyap :: volume(int a1, int b1, int c1)//void func reappears here 3parameters a1 b1 and c1 are entered
    {
        cout<<"cin coimng\n"; 
         cin>>a1;
         cin>>b1;
         cin>>c1;
         a=a1;
         b=b1;
         c=c1;
    } 
    
    int main(){
        cout<<"Enter the dimensions of cuboid \n";
        kashyap om;
        int x; int y; int z;
        cout<<"xyz\n";
        om.volume (x, y, z);
        om.display();
        return 0;
    }
